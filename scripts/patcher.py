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

Mode **apply**
-------------
- Applies patches from opt/patches to local QGIS source
- Overwrites files from opt/overwrite into the local source tree
- Renames ui_defaults.h to ngui_defaults.h
- Updates local util.cmake with upstream version info

Typical call::

    python patcher.py apply --upstream /path/to/qgis
"""

import argparse
from enum import StrEnum
import re
import shutil
import subprocess
import sys
from pathlib import Path
from typing import Any, Dict, Iterable, List, Optional, Set, Tuple, cast

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
# Postprocessing helpers for **apply** mode
# ---------------------------------------------------------------------------


def _resolve_conflict(resolver: str, patch_path: Path) -> bool:
    """Resolve patch conflicts using specified merge tool."""
    if resolver == "none":
        return False

    return False


def _check_can_be_applied(local_path: Path, patch_file: Path) -> bool:
    code = subprocess.call(
        [
            "git",
            "apply",
            "--check",
            "--reverse",
            "--ignore-whitespace",
            "--whitespace=nowarn",
            str(patch_file),
        ],
        cwd=local_path,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
    )
    return code == 0


def _apply_patch(local_path: Path, patch_file: Path) -> Tuple[bool, Optional[str]]:
    process = subprocess.Popen(
        [
            "git",
            "apply",
            "--ignore-whitespace",
            "--whitespace=nowarn",
            str(patch_file),
        ],
        cwd=local_path,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
    )
    out, _ = process.communicate()
    apply_result = process.returncode

    if apply_result == 0:
        return True, None

    error_strings = out.decode().strip().splitlines()
    return False, "errors: \n" + "\n".join(
        error.replace("error:", "  -") for error in error_strings
    )


def _apply_patches(
    upstream: Path, local: Path, resolver: str, skip_errors: bool
) -> None:
    """Apply .patch files to the project directory."""
    patches_path = local / "opt" / "patches"
    if not patches_path.exists():
        mark_failure(f"{patches_path} doesn't exist")
        sys.exit(1)

    patch_files = list(patches_path.rglob("*.patch"))
    color_print(f"ℹ Found {len(patch_files)} patches in {patches_path}")

    errors = []

    for patch_file in patch_files:
        color_print(f"⤭ applying {patch_file.name} ... ", endl=False)

        if _check_can_be_applied(local, patch_file):
            color_print("already patched", color=AnsiColor.YELLOW)
            continue

        is_applied, error_message = _apply_patch(local, patch_file)
        if is_applied:
            color_print("done.", color=AnsiColor.GREEN)
            continue

        assert error_message is not None

        if resolver == "none":
            errors.append(f"Error applying {patch_file}")
            color_print(error_message, color=AnsiColor.RED)
            if not skip_errors:
                sys.exit(1)
            else:
                continue

        if _resolve_conflict(resolver, patch_file):
            color_print("resolved", color=AnsiColor.GREEN)
        elif skip_errors:
            color_print("not resolved", color=AnsiColor.YELLOW)
        else:
            color_print(error_message, color=AnsiColor.RED)
            sys.exit(1)

    if errors:
        color_print("\nErrors:", color=AnsiColor.RED)
        for error in errors:
            color_print(f" - {error}", color=AnsiColor.RED)


def _overwrite_files(local_path: Path) -> None:
    """Overwrite destination directory files with those from source."""
    overwrite_path = local_path / "opt" / "overwrite"
    if not overwrite_path.exists():
        mark_semi_success(f"{overwrite_path} doesn't exist")
        return

    for source_path in overwrite_path.rglob("*"):
        if not source_path.is_file() or source_path.name.startswith("."):
            continue

        destination = local_path / source_path.relative_to(overwrite_path)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_path, destination)
        mark_success(f"overwrited {destination}")


def _rename_ui_file(local_path: Path) -> None:
    """Rename ui_defaults.h file to ngui_defaults.h if it exists."""
    old_path = local_path / "src/app/ui_defaults.h"
    if not old_path.exists():
        return

    new_path = local_path / "src/app/ngui_defaults.h"
    old_path.rename(new_path)
    mark_success("renamed ui_defaults.h")


def _patch_util_cmake(local: Path, version: Dict[str, str]) -> None:
    """Patch util.cmake file with extracted version info."""
    from fileinput import input

    for line in input(local / "cmake" / "util.cmake", inplace=True):
        if "set(QGIS_MAJOR " in line:
            print(f"    set(QGIS_MAJOR {version['major']})")
        elif "set(QGIS_MINOR " in line:
            print(f"    set(QGIS_MINOR {version['minor']})")
        elif "set(QGIS_PATCH " in line:
            print(f"    set(QGIS_PATCH {version['patch']})")
        elif "set(QGIS_NAME " in line:
            print(f'    set(QGIS_NAME "{version["name"]}")')
        elif "set(VERSION_PATCH " in line:
            print("    set(VERSION_PATCH 0)")
        else:
            print(line, end="")

    mark_success("patched version in util.cmake")


def apply(
    upstream: Path,
    local: Path,
    upstream_version: Dict[str, str],
    resolver: str,
    skip_errors: bool,
) -> None:
    _apply_patches(upstream, local, resolver, skip_errors)
    _overwrite_files(local)
    _rename_ui_file(local)
    _patch_util_cmake(local, upstream_version)


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

    # apply
    apply_parser = subparsers.add_parser(
        "apply",
        parents=[common_local, common_upstream],
        help="",
    )
    apply_parser.add_argument("--skip-errors", action="store_true")
    apply_parser.add_argument("--resolver", choices=["none"], default="none")

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

    # Local version info
    local = args.local.resolve()
    mark_info(f"Local QGIS path: {local}")
    local_version = _parse_qgis_version(local / "cmake" / "util.cmake")
    mark_info(
        "Local QGIS version: {} ({}.{}.{})".format(
            local_version["name"],
            local_version["major"],
            local_version["minor"],
            local_version["patch"],
        )
    )

    if args.command == "list":
        for path in _collect_changed_files_from_patches(local):
            print(path)
        return

    # Upstream version info
    upstream = args.upstream.resolve()
    mark_info(f"Upstream QGIS path: {upstream}")
    upstream_version = _parse_qgis_version(upstream / "CMakeLists.txt")
    mark_info(
        "Upstream QGIS version: {} ({}.{}.{})".format(
            upstream_version["name"],
            upstream_version["major"],
            upstream_version["minor"],
            upstream_version["patch"],
        )
    )

    if args.command == "apply":
        apply(
            upstream=upstream,
            local=local,
            upstream_version=upstream_version,
            resolver=args.resolver,
            skip_errors=args.skip_errors,
        )
        return

    if upstream_version != local_version:
        mark_failure("Upstream QGIS version must be the same as local")
        sys.exit(1)

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
