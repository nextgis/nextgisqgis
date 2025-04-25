#!/usr/bin/env python3

"""
apply_local_edits.py - A utility script for syncing QGIS core in NextGIS fork

This script performs the following tasks:
- Parses QGIS version and release name from upstream CMakeLists.txt
- Updates local util.cmake with parsed version info
- Applies custom patches from opt/patches to local QGIS source
- Overwrites files from opt/overwrite into the local source tree
- Renames ui_defaults.h to ngui_defaults.h if present

Typical usage:
    python apply_local_edits.py --upstream /path/to/qgis

Arguments:
    --upstream     Path to upstream QGIS source directory (with CMakeLists.txt)
    --local        Path to local working directory (default: project root)
    --skip-errors  Continue patching even if some patches fail
"""

from pathlib import Path
from enum import StrEnum
from typing import Any, Dict, Optional, Tuple
import sys
import shutil
import subprocess


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


def mark_done(text: str) -> None:
    color_print("✓", color=AnsiColor.GREEN, endl=False)
    color_print(" " + text)


def mark_fail(text: str) -> None:
    color_print(f"✗ {text}", color=AnsiColor.RED)


def parse_cmake_version(upstream_path: Path) -> Dict[str, str]:
    """Extract QGIS version and name from CMakeLists.txt."""

    def extract_value(line: str) -> str:
        return line.split('"')[1]

    cmake_file = upstream_path / "CMakeLists.txt"
    if not cmake_file.exists():
        color_print(
            "✗ The specified upstream path does not contain a CMakeLists.txt file.",
            color=AnsiColor.RED,
        )
        sys.exit(1)

    parsed: Dict[str, Any] = {
        "major": None,
        "minor": None,
        "patch": None,
        "name": None,
    }
    with cmake_file.open() as cmake_stream:
        for line in cmake_stream:
            upper_line = line.upper()

            if "SET(CPACK_PACKAGE_VERSION_MAJOR" in upper_line:
                parsed["major"] = extract_value(line)
            elif "SET(CPACK_PACKAGE_VERSION_MINOR" in upper_line:
                parsed["minor"] = extract_value(line)
            elif "SET(CPACK_PACKAGE_VERSION_PATCH" in upper_line:
                parsed["patch"] = extract_value(line)
            elif "SET(RELEASE_NAME" in upper_line:
                parsed["name"] = extract_value(line)
            else:
                continue

            if all(part is not None for part in parsed.values()):
                break

    if not all(part is not None for part in parsed.values()):
        color_print("✗ Invalid CMakeLists.txt file.", color=AnsiColor.RED)
        sys.exit(1)

    mark_done(
        f"found QGIS {parsed['name']} ({parsed['major']}.{parsed['minor']}.{parsed['patch']})",
    )

    return parsed


def patch_util_cmake(local_path: Path, version_info: Dict[str, str]) -> None:
    """Patch util.cmake file with extracted version info."""
    from fileinput import input

    for line in input(local_path / "cmake" / "util.cmake", inplace=True):
        if "set(QGIS_MAJOR " in line:
            print(f"    set(QGIS_MAJOR {version_info['major']})")
        elif "set(QGIS_MINOR " in line:
            print(f"    set(QGIS_MINOR {version_info['minor']})")
        elif "set(QGIS_PATCH " in line:
            print(f"    set(QGIS_PATCH {version_info['patch']})")
        elif "set(QGIS_NAME " in line:
            print(f'    set(QGIS_NAME "{version_info["name"]}")')
        elif "set(VERSION_PATCH " in line:
            print("    set(VERSION_PATCH 0)")
        else:
            print(line, end="")

    mark_done("patched version in util.cmake")


def overwrite_files(local_path: Path) -> None:
    """Overwrite destination directory files with those from source."""
    overwrite_path = local_path / "opt" / "overwrite"
    if not overwrite_path.exists():
        color_print(f"✓ {overwrite_path} doesn't exist", color=AnsiColor.YELLOW)
        return

    for source_path in overwrite_path.rglob("*"):
        if not source_path.is_file() or source_path.name.startswith("."):
            continue

        destination = local_path / source_path.relative_to(overwrite_path)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_path, destination)
        mark_done(f"overwrited {destination}")


def rename_ui_file(local_path: Path) -> None:
    """Rename ui_defaults.h file to ngui_defaults.h if it exists."""
    old_path = local_path / "src/app/ui_defaults.h"
    if not old_path.exists():
        return

    new_path = local_path / "src/app/ngui_defaults.h"
    old_path.rename(new_path)
    mark_done("ui_defaults.h renamed")


def check_is_applied(local_path: Path, patch_file: Path) -> bool:
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


def resolve_conflict(resolver: str, patch_path: Path) -> bool:
    """Resolve patch conflicts using specified merge tool."""
    if resolver == "none":
        return False

    return False


def apply_patch(local_path: Path, patch_file: Path) -> Tuple[bool, Optional[str]]:
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


def apply_patches(
    upstream_path: Path, local_path: Path, resolver: str, skip_errors: bool
) -> None:
    """Apply .patch files to the project directory."""
    patches_path = local_path / "opt" / "patches"
    if not patches_path.exists():
        mark_fail(f"{patches_path} doesn't exist")
        sys.exit(1)

    patch_files = list(patches_path.rglob("*.patch"))
    color_print(f"ℹ Found {len(patch_files)} patches in {patches_path}")

    errors = []

    for patch_file in patch_files:
        color_print(f"⤭ applying {patch_file.name} ... ", endl=False)

        if check_is_applied(local_path, patch_file):
            color_print("already patched", color=AnsiColor.YELLOW)
            continue

        is_applied, error_message = apply_patch(local_path, patch_file)
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

        if resolve_conflict(resolver, patch_file):
            color_print("resolved", color=AnsiColor.GREEN)
        elif skip_errors:
            color_print("not resolved", color=AnsiColor.GREEN)
        else:
            color_print(error_message, color=AnsiColor.RED)
            sys.exit(1)

    if errors:
        color_print("\nErrors:", color=AnsiColor.RED)
        for error in errors:
            color_print(f" - {error}", color=AnsiColor.RED)


def main() -> None:
    """Main entry point."""
    import argparse

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--upstream",
        type=Path,
        required=True,
        help="Path to directory containing CMakeLists.txt",
    )
    repo_root = Path(__file__).parents[1]
    parser.add_argument(
        "--local",
        type=Path,
        default=repo_root,
        help=f"Path to local working directory (default: {repo_root})",
    )
    parser.add_argument("--skip-errors", action="store_true")
    # TODO
    # parser.add_argument(
    #     "--resolver", choices=["meld", "vscode", "none"], default="none"
    # )
    args = parser.parse_args()

    upstream_path: Path = args.upstream.resolve()
    local_path: Path = args.local.resolve()
    resolver = "none" # args.resolver

    color_print(f"ℹ Upstream: {upstream_path}")
    color_print(f"ℹ Local: {local_path}")

    version = parse_cmake_version(upstream_path)
    patch_util_cmake(local_path, version)
    overwrite_files(local_path)
    rename_ui_file(local_path)
    apply_patches(upstream_path, local_path, resolver, args.skip_errors)


if __name__ == "__main__":
    main()
