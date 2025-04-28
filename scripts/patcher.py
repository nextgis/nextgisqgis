#!/usr/bin/env python3

"""
patcher.py – utility for creating, updating, listing and scanning patch
files used in the NextGIS QGIS.

Mode **create**
----------------
Creates one or several ``*.patch`` files that describe the difference
between *upstream* (vanilla QGIS) and *local* (NextGIS) versions of the
same file.

Typical call::

    python patcher.py create --upstream /path/to/qgis src/app/qgshelloworld.cpp

Mode **update**
----------------
Re‑creates every patch already present in ``<local>/opt/patches`` by
re‑diffing the corresponding files.

Typical call::

    python patcher.py update --upstream /path/to/qgis

Mode **list**
--------------
Shows the list of file paths currently covered by patches.

Typical call::

    python patcher.py list

Mode **scan**
-------------
Detects every source file changed since a given *commit* up to ``HEAD``.
For files that do **not** yet have a corresponding patch, the script
verifies that they exist in *upstream* (and are **not** in the exclusion
list).  Patches are then created automatically.

Typical call::

    python patcher.py scan --from a1b2c3d4 --upstream /path/to/qgis
"""

import argparse
from enum import StrEnum
import re
import subprocess
import sys
from pathlib import Path
from typing import Any, Dict, Iterable, List, Optional, Set, cast

# ---------------------------------------------------------------------------
# Constants & configuration
# ---------------------------------------------------------------------------

#: Paths (relative to the QGIS source tree) that must **never** receive a
#: patch automatically.
EXCLUDED_PATHS: Set[Path] = set((Path("opt/patches"),))
EXCLUDED_FILES: Set[str] = set(("README.md", ".gitignore"))

# ---------------------------------------------------------------------------
# Helper classes & utilities
# ---------------------------------------------------------------------------


class AnsiColor(StrEnum):
    """Basic ANSI 8‑color escape sequences (normal intensity)."""

    BLACK = "\033[0;90m"
    RED = "\033[0;91m"
    GREEN = "\033[0;92m"
    YELLOW = "\033[0;93m"
    BLUE = "\033[0;94m"
    PURPLE = "\033[0;95m"
    CYAN = "\033[0;96m"
    WHITE = "\033[0;97m"


def color_print(
    text: str,
    *,
    bold: bool = False,
    color: Optional[AnsiColor] = None,
    endl: bool = True,
) -> None:
    """Print *text* with optional ANSI **color** and **bold** formatting."""
    if sys.platform == "win32" or (not bold and color is None):
        print(text, end="\n" if endl else "")
        return

    prefix = ""
    if bold:
        prefix += str(color).replace("[0", "[1") if color else "\033[1m"
    else:
        prefix += str(color)

    suffix = "\033[0m"
    print(f"{prefix}{text}{suffix}", end="\n" if endl else "")


def mark_success(text: str) -> None:  # pragma: no cover
    color_print("✓", color=AnsiColor.GREEN, endl=False)
    color_print(" " + text)


def mark_semi_success(text: str) -> None:  # pragma: no cover
    color_print(f"✓ {text}", color=AnsiColor.YELLOW)


def mark_failure(text: str) -> None:  # pragma: no cover
    color_print(f"✗ {text}", color=AnsiColor.RED)

def mark_info(text: str) -> None:  # pragma: no cover
    color_print(f"ℹ {text}", color=AnsiColor.PURPLE)


# ---------------------------------------------------------------------------
# Version helpers
# ---------------------------------------------------------------------------


def _parse_qgis_version(cmake_file: Path) -> Dict[str, str]:
    """Extract QGIS **version** and **name** from *cmake_file*."""

    def _extract_value(line: str) -> Optional[str]:
        match = re.search(r"set\([^ ]+ (['\"]?)(.+?)\1\)", line, re.IGNORECASE)
        return match.group(2) if match else None

    if not cmake_file.exists():
        mark_failure(f"CMake file {cmake_file} does not exist.")
        sys.exit(1)

    version_prefix = "CPACK_PACKAGE_VERSION" if cmake_file.suffix == ".txt" else "QGIS"
    name_prefix = "RELEASE" if cmake_file.suffix == ".txt" else "QGIS"

    parsed: Dict[str, Optional[str]] = {
        "major": None,
        "minor": None,
        "patch": None,
        "name": None,
    }
    with cmake_file.open() as cmake_stream:
        for line in cmake_stream:
            upper_line = line.upper()
            if f"SET({version_prefix}_MAJOR" in upper_line:
                parsed["major"] = _extract_value(line)
            elif f"SET({version_prefix}_MINOR" in upper_line:
                parsed["minor"] = _extract_value(line)
            elif f"SET({version_prefix}_PATCH" in upper_line:
                parsed["patch"] = _extract_value(line)
            elif f"SET({name_prefix}_NAME" in upper_line:
                parsed["name"] = _extract_value(line)

            if all(parsed.values()):
                break

    if not all(parsed.values()):
        mark_failure(f"Invalid cmake file ({cmake_file}).")
        sys.exit(1)

    return cast(Dict[str, str], parsed)


def _check_qgis_version(upstream: Path, local: Path) -> None:
    """Ensure *upstream* and *local* QGIS versions match."""
    upstream_version = _parse_qgis_version(upstream / "CMakeLists.txt")
    mark_info(
        "Upstream QGIS version: {} ({}.{}.{})".format(
            upstream_version["name"],
            upstream_version["major"],
            upstream_version["minor"],
            upstream_version["patch"],
        )
    )

    local_version = _parse_qgis_version(local / "cmake" / "util.cmake")
    mark_info(
        "Local QGIS version: {} ({}.{}.{})".format(
            local_version["name"],
            local_version["major"],
            local_version["minor"],
            local_version["patch"],
        )
    )

    if upstream_version != local_version:
        mark_failure("Upstream QGIS version must be the same as local")
        sys.exit(1)


# ---------------------------------------------------------------------------
# Diff & patch helpers
# ---------------------------------------------------------------------------


def _run_diff(upstream_file: Path, local_file: Path) -> str:
    """Return ``diff -u`` output between **files** (may be empty)."""
    process = subprocess.run(
        ("diff", "-u", str(upstream_file), str(local_file)),
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    if process.returncode == 2:
        raise RuntimeError(process.stderr.decode())
    return process.stdout.decode()


def _patch_file_name(file_path: Path) -> str:
    """Convert *file_path* to a patch **file name**.

    Examples
    --------
    >>> Path("src/app/qgis.h") -> "app_qgis.h.patch"
    """
    parts = file_path.parts
    if parts[0:3] == ("python", "core", "auto_generated"):
        parts = parts[2:]
    elif parts[0] in {"src", "python", "plugins", "tests"}:
        parts = parts[1:]
    return "_".join(parts) + ".patch"


def _is_diff_same(patch_file: Path, new_diff: str) -> bool:
    """Return *True* if ``patch_file`` already has **new_diff** content."""
    old_diff_lines = patch_file.read_text("utf-8").splitlines()[2:]
    new_diff_lines = new_diff.splitlines()[2:]
    return old_diff_lines == new_diff_lines


def _ensure_patch_dir(local: Path) -> Path:
    """Return ``<local>/opt/patches`` creating it when necessary."""
    patch_dir = local / "opt" / "patches"
    patch_dir.mkdir(parents=True, exist_ok=True)
    return patch_dir


def _create_or_update_patch(
    *,
    upstream: Path,
    local: Path,
    relative_path: Path,
    patch_dir: Path,
    diff_data: str,
) -> None:
    """Write *diff_data* to ``patch_dir`` using generated file name."""
    patch_file = patch_dir / _patch_file_name(relative_path)

    # Remove obsolete patches (empty diffs)
    if not diff_data:
        if patch_file.exists():
            patch_file.unlink()
            mark_semi_success(f"removed empty patch: {patch_file}")
        else:
            mark_semi_success(f"skip empty patch: {patch_file}")
        return

    if patch_file.exists() and _is_diff_same(patch_file, diff_data):
        mark_success(f"diff is same for {relative_path}")
        return

    with patch_file.open("w", encoding="utf-8") as file:
        file.write(
            diff_data.replace(upstream.as_posix(), "a").replace(local.as_posix(), "b")
        )

    mark_success(f"wrote patch for {relative_path}")


def _cleanup(patch_dir: Path) -> None:
    """Remove every **obsolete** (empty) patch file in *patch_dir*."""
    for patch_file in patch_dir.glob("*.patch"):
        if patch_file.stat().st_size == 0:
            mark_semi_success(f"removed empty patch: {patch_file}")
            patch_file.unlink()


def _collect_changed_files_from_patches(local: Path) -> List[Path]:
    """Return a sorted list of paths **already** covered by patches."""
    patch_dir = _ensure_patch_dir(local)
    pattern = re.compile(r"--- a/(.+?)(\t|\s|$)")
    subpaths: Set[Path] = set()

    for patch_file in patch_dir.glob("*.patch"):
        with patch_file.open("r", encoding="utf-8") as file:
            first_line = file.readline()
            match = pattern.search(first_line)
            if match:
                subpaths.add(Path(match.group(1)))

    return sorted(subpaths)


def create_patches(upstream: Path, local: Path, changed_files: Iterable[Path]) -> None:
    """Create patches for *changed_files* relative to *local*."""
    patch_dir = _ensure_patch_dir(local)

    for changed_file in changed_files:
        relative_path = Path(changed_file)
        upstream_file = upstream / relative_path
        local_file = local / relative_path

        if not upstream_file.exists():
            mark_failure(f"upstream missing: {upstream_file}")
            continue

        if not local_file.exists():
            mark_failure(f"local missing: {local_file}")
            sys.exit(1)

        diff = _run_diff(upstream_file, local_file)
        _create_or_update_patch(
            upstream=upstream,
            local=local,
            relative_path=relative_path,
            patch_dir=patch_dir,
            diff_data=diff,
        )


# ---------------------------------------------------------------------------
# Git‑helpers for **scan** mode
# ---------------------------------------------------------------------------


def _get_changed_files_since(local: Path, commit: str) -> List[Path]:
    """Return every file changed from *commit* (exclusive) to ``HEAD``."""
    proc = subprocess.run(
        (
            "git",
            "-C",
            str(local),
            "diff",
            "--name-only",
            f"{commit}",
            "HEAD",
        ),
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )

    if proc.returncode not in {0, 1}:
        mark_failure(proc.stderr.decode())
        sys.exit(1)

    return [Path(path) for path in proc.stdout.decode().splitlines() if path]


def scan_for_new_patches(
    upstream: Path, local: Path, commit: str, with_cmake: bool
) -> None:
    """Find files changed since *commit* and create **missing** patches."""
    changed_files = _get_changed_files_since(local, commit)
    if not changed_files:
        mark_success("No files changed – nothing to do.")
        return

    patch_dir = _ensure_patch_dir(local)

    excluded_local_paths = {local / path for path in EXCLUDED_PATHS}

    files_to_patch: List[Path] = []
    for changed_file in changed_files:
        if (
            any(changed_file.is_relative_to(path) for path in excluded_local_paths)
            or changed_file.name in EXCLUDED_FILES
        ):
            continue

        if not with_cmake and (
            changed_file.name == "CMakeLists.txt" or changed_file.suffix == ".cmake"
        ):
            continue

        patch_file = patch_dir / _patch_file_name(changed_file)
        if patch_file.exists():
            mark_semi_success(f"already patched: {changed_file}")
            continue

        upstream_file = upstream / changed_file
        if not upstream_file.exists():
            continue

        files_to_patch.append(changed_file)

    if files_to_patch:
        create_patches(upstream, local, files_to_patch)
    else:
        mark_success("All changed files already have patches.")


# ---------------------------------------------------------------------------
# Command‑line interface
# ---------------------------------------------------------------------------


def _build_parser() -> argparse.ArgumentParser:  # pragma: no cover
    """Return the configured :pyclass:`argparse.ArgumentParser`."""
    parser = argparse.ArgumentParser(description="Patch management helper.")
    subparsers = parser.add_subparsers(dest="command", required=True)

    # common
    common_local = argparse.ArgumentParser(add_help=False)
    common_local.add_argument(
        "--local",
        type=Path,
        default=Path(__file__).parents[1],
        help="Path to NextGIS QGIS root (default: repo root).",
    )

    common_upstream = argparse.ArgumentParser(add_help=False)
    common_upstream.add_argument(
        "--upstream",
        type=Path,
        required=True,
        help="Path to upstream QGIS.",
    )

    # create
    create_parser = subparsers.add_parser(
        "create",
        parents=[common_local, common_upstream],
        help="Create patches for given files.",
    )
    create_parser.add_argument(
        "files",
        nargs="+",
        help="Relative paths for which patches are generated.",
    )

    # update
    subparsers.add_parser(
        "update",
        parents=[common_local, common_upstream],
        help="Re‑generate every existing patch.",
    )

    # list
    subparsers.add_parser(
        "list", parents=[common_local], help="List files covered by patches."
    )

    # scan
    scan_parser = subparsers.add_parser(
        "scan",
        parents=[common_local, common_upstream],
        help="Scan for changed files since COMMIT and create missing patches.",
    )
    scan_parser.add_argument(
        "--from",
        required=True,
        dest="_from",
        help="Git commit (hash/ref) to start scanning after.",
    )
    scan_parser.add_argument(
        "--with-cmake",
        action="store_true",
        default=False,
        help="Include CMake files.",
    )

    return parser


def parse_args() -> argparse.Namespace:  # pragma: no cover
    """Parse and return CLI arguments."""
    return _build_parser().parse_args()


# ---------------------------------------------------------------------------
# Entrypoint
# ---------------------------------------------------------------------------


def main() -> None:  # pragma: no cover
    """Script **entry point**."""
    args = parse_args()

    local = args.local.resolve()
    if args.command == "list":
        for path in _collect_changed_files_from_patches(local):
            print(path)
        return

    upstream = args.upstream.resolve()
    _check_qgis_version(upstream, local)

    if args.command == "create":
        create_patches(upstream, local, args.files)
    elif args.command == "update":
        changed = _collect_changed_files_from_patches(local)
        create_patches(upstream, local, changed)
        _cleanup(_ensure_patch_dir(local))
    elif args.command == "scan":
        scan_for_new_patches(upstream, local, args._from, args.with_cmake)
    else:
        mark_failure("Unknown command")
        sys.exit(1)


if __name__ == "__main__":  # pragma: no cover
    main()
