#!/usr/bin/env python3

"""
patcher.py – utility for creating, updating and listing patch-files
used in the NextGIS QGIS.

Mode **create**
----------------
Creates one or several ``*.patch`` files that describe the difference
between *upstream* (clean QGIS) and *local* (NextGIS) versions of
the same file.

Typical call::

    python patcher.py create --upstream /path/to/qgis src/app/qgshelloworld.cpp

Mode **update**
----------------
Re-creates every patch already present in ``<local>/opt/patches`` by
re-diffing the corresponding files.

Typical call::

    python patcher.py update --upstream /path/to/qgis

Mode **list**
--------------
Shows the list of file paths currently covered by patches.

Typical call::

    python patcher.py list
"""

import argparse
from enum import StrEnum
import re
import subprocess
import sys
from pathlib import Path
from typing import Iterable, List, Optional, Set


class AnsiColor(StrEnum):
    """Basic ANSI 8-color escape sequences (normal intensity)."""

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
    """Prints text with optional ANSI color and bold formatting."""
    if sys.platform == "win32" or (not bold and color is None):
        print(text, end="\n" if endl else "")
        return

    prefix = ""
    if bold:
        if color is None:
            prefix += "\033[1m"
        else:
            prefix += str(color).replace("[0", "[1")
    else:
        prefix += str(color)

    suffix = "\033[0m"
    print(f"{prefix}{text}{suffix}", end="\n" if endl else "")


def mark_success(text: str) -> None:
    color_print("✓", color=AnsiColor.GREEN, endl=False)
    color_print(" " + text)


def mark_semi_success(text: str) -> None:
    color_print(f"✓ {text}", color=AnsiColor.YELLOW)


def mark_failure(text: str) -> None:
    color_print(f"✗ {text}", color=AnsiColor.RED)


def _run_diff(upstream_file: Path, local_file: Path) -> str:
    """Return ``diff -u`` output between files (may be empty)."""
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
    """
    Convert a file path to a patch file name.
    Example:
        src/app/qgis.h -> app_qgis.h.patch
    """
    parts = file_path.parts
    if parts[0:3] == ("python", "core", "auto_generated"):
        parts = parts[2:]
    elif parts[0] in ("src", "python", "plugins", "tests"):
        parts = parts[1:]
    return "_".join(parts) + ".patch"


def _ensure_patch_dir(local_path: Path) -> Path:
    """Return ``<local>/opt/patches`` creating it when necessary."""
    patch_dir = local_path / "opt" / "patches"
    patch_dir.mkdir(parents=True, exist_ok=True)
    return patch_dir


def _create_or_update_patch(
    upstream: Path, local: Path, relative_path: Path, patch_dir: Path, diff_data: str
) -> None:
    """Write *diff_data* to *patch_dir*/<generated_name>"""
    patch_file = patch_dir / _patch_file_name(relative_path)
    if patch_file.exists() and not diff_data:
        mark_semi_success(f"removed empty patch: {patch_file}")
        patch_file.unlink()
        return

    with open(patch_file, "w", encoding="utf-8") as file:
        file.write(
            diff_data.replace(upstream.as_posix(), "a").replace(local.as_posix(), "b")
        )

    mark_success(f"writed patch for {relative_path}")


def _cleanup(patch_dir: Path) -> None:
    """Remove all obsolete patches"""
    for patch_file in patch_dir.glob("*.patch"):
        if patch_file.stat().st_size == 0:
            mark_semi_success(f"removed empty patch: {patch_file}")
            patch_file.unlink()


def _collect_changed_files_from_patches(local: Path) -> List[Path]:
    """Return a sorted list of unique subpaths mentioned in patch headers."""
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


def create_patches(
    upstream: Path, local: Path, changed_files: Iterable[Path], write_empty: bool = True
) -> None:
    """Create new patches for *subpaths*."""
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


def update_patches(upstream: Path, local: Path) -> None:
    """Re-generate every existing patch."""
    changed_files = _collect_changed_files_from_patches(local)
    create_patches(upstream, local, changed_files)
    _cleanup(_ensure_patch_dir(local))


def list_patched_files(local: Path) -> None:
    """Print list of patched files."""
    for path in _collect_changed_files_from_patches(local):
        print(path)


def parse_args() -> argparse.Namespace:
    """Return parsed command-line arguments."""
    parser = argparse.ArgumentParser(description="Patch management helper.")
    subparsers = parser.add_subparsers(dest="command", required=True)

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
        help="Path to upstream QGIS",
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
        help="Relative paths to files for which patches are generated.",
    )

    # update
    subparsers.add_parser(
        "update",
        parents=[common_local, common_upstream],
        help="Re-generate every existing patch.",
    )

    # list
    subparsers.add_parser(
        "list", parents=[common_local], help="List files covered by patches."
    )

    return parser.parse_args()


def main() -> None:
    """Entry point."""
    args = parse_args()

    if args.command == "create":
        create_patches(args.upstream, args.local, args.files)
    elif args.command == "update":
        update_patches(args.upstream, args.local)
    elif args.command == "list":
        list_patched_files(args.local)
    else:
        sys.exit("unknown command")


if __name__ == "__main__":
    main()
