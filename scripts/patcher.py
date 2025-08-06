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
import tempfile
from pathlib import Path
from typing import Dict, List, Literal, Optional, Set, Tuple, cast

# ---------------------------------------------------------------------------
# Constants & configuration
# ---------------------------------------------------------------------------

#: Paths (relative to the QGIS source tree) that must **never** receive a
#: patch automatically.
EXCLUDED_PATHS: Set[Path] = set((Path("opt/patches"), Path("opt/overwrite")))
EXCLUDED_FILES: Set[str] = set(("README.md", ".gitignore", "ui_defaults.h"))

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


def _format_version(version: Dict[str, str], with_name: bool = False) -> str:
    template = (
        "{name} ({major}.{minor}.{patch})" if with_name else "{major}.{minor}.{patch}"
    )
    return template.format_map(version)


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
    elif parts[0] in {"src", "python", "plugins"}:
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
    is_scan: bool = False,
) -> None:
    """Write *diff_data* to ``patch_dir`` using generated file name."""
    patch_file = patch_dir / _patch_file_name(relative_path)

    # Remove obsolete patches (empty diffs)
    if not diff_data:
        if patch_file.exists():
            patch_file.unlink()
            mark_semi_success(f"Removed empty patch: {patch_file}")
        elif not is_scan:
            mark_semi_success(f"Skip empty patch: {patch_file}")
        return

    if diff_data.startswith("Binary files"):
        mark_semi_success(f"Skip binary file: {relative_path}")
        return

    if patch_file.exists() and _is_diff_same(patch_file, diff_data):
        mark_success(f"Diff is same for {relative_path}")
        return

    with patch_file.open("w", encoding="utf-8") as file:
        file.write(
            diff_data.replace(upstream.as_posix(), "a").replace(local.as_posix(), "b")
        )

    mark_success(f"Wrote patch for {relative_path}")


def _cleanup(patch_dir: Path) -> None:
    """Remove every **obsolete** (empty) patch file in *patch_dir*."""
    for patch_file in patch_dir.glob("*.patch"):
        if patch_file.stat().st_size == 0:
            mark_semi_success(f"Removed empty patch: {patch_file}")
            patch_file.unlink()


def _collect_changed_files_from_patches(local: Path) -> List[Path]:
    """Return a sorted list of paths **already** covered by patches."""
    patches_path = _ensure_patch_dir(local)
    pattern = re.compile(r"--- a/(.+?)(\t|\s|$)")
    subpaths: Set[Path] = set()

    patch_files = list(patches_path.rglob("*.patch"))
    mark_info(f"Found {len(patch_files)} patches in {patches_path}")

    for patch_file in patch_files:
        with patch_file.open("r", encoding="utf-8") as file:
            first_line = file.readline()
            match = pattern.search(first_line)
            if match:
                subpaths.add(Path(match.group(1)))

    return sorted(subpaths)


def _find_missing_upstream_file(
    repo_path: Path, relative_file_path: Path
) -> Optional[Literal["D", "R"]]:
    """
    Analyze the Git history of a file to determine whether it was deleted,
    renamed

    :param repo_path: Path to the Git repository root
    :param relative_file_path: File path relative to the repo root
    :return: One of "D", "R", or None if no info available
    """
    cmd = [
        "git",
        "-C",
        str(repo_path),
        "log",
        "--follow",
        "--find-renames",
        "--name-status",
        "--format=%H",
        "--",
        str(relative_file_path),
    ]

    try:
        output = subprocess.check_output(cmd, text=True)
    except subprocess.CalledProcessError:
        return None

    lines = output.strip().splitlines()

    seen_rename = False

    for line in lines:
        if not line or all(c in "0123456789abcdef" for c in line.strip()):
            continue  # commit hash line

        parts = line.split("\t")
        if parts[0].startswith("R"):
            seen_rename = True
        elif parts[0] == "D":
            return "D"

    if seen_rename:
        return "R"

    return None


def create_patches(
    upstream: Path,
    local: Path,
    changed_files: List[Path],
    *,
    needed_version: Optional[Dict[str, str]] = None,
    is_scan: bool = False,
) -> None:
    """Create patches for *changed_files* relative to *local*."""
    if not changed_files:
        mark_semi_success("Empty changed files list")
        return

    patch_dir = _ensure_patch_dir(local)

    if needed_version is None:
        temporary_dir = None
        upstream_root = upstream
    else:
        temporary_dir = tempfile.TemporaryDirectory()
        upstream_root = Path(temporary_dir.name)
        branch = "final-" + _format_version(needed_version).replace(".", "_")
        _copy_files_from_branch(upstream, branch, upstream_root, changed_files)

    try:
        for changed_file in changed_files:
            relative_path = Path(changed_file)
            upstream_file = upstream_root / relative_path
            local_file = local / relative_path

            is_upstream_file_missing = not upstream_file.exists()
            if is_upstream_file_missing:
                current_status = _find_missing_upstream_file(upstream, relative_path)
                if current_status == "D":
                    patch_file = patch_dir / _patch_file_name(relative_path)
                    patch_file.unlink()
                    mark_semi_success(
                        f"File was deleted in upstream. Patch removed: {patch_file}"
                    )
                    continue

                # TODO: elif current_status == "R":

            if is_upstream_file_missing or not local_file.exists():
                mark_failure(
                    f"Patch for {relative_path} exists, but the file is missing"
                    + (" in upstream" if is_upstream_file_missing else "")
                )
                answer = input("Delete the patch? [y/N]: ")
                if answer.lower() == "y":
                    patch_file = patch_dir / _patch_file_name(relative_path)
                    if patch_file.exists():
                        patch_file.unlink()
                        mark_success(f"Patch removed: {patch_file}")
                else:
                    mark_info(f"Skip patch for {relative_path}")

                continue

            diff = _run_diff(upstream_file, local_file)
            _create_or_update_patch(
                upstream=upstream_root,
                local=local,
                relative_path=relative_path,
                patch_dir=patch_dir,
                diff_data=diff,
                is_scan=is_scan,
            )

    finally:
        if temporary_dir is not None:
            temporary_dir.cleanup()


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
            f"{commit}~",
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
    upstream: Path,
    local: Path,
    commit: str,
    with_cmake: bool,
    *,
    needed_version: Optional[Dict[str, str]] = None,
) -> None:
    """Find files changed since *commit* and create **missing** patches."""
    changed_files = [
        changed_file
        for changed_file in _get_changed_files_since(local, commit)
        if (
            not any(
                changed_file.is_relative_to(excluded_path)
                for excluded_path in EXCLUDED_PATHS
            )
            and changed_file.name not in EXCLUDED_FILES
        )
    ]
    if not changed_files:
        mark_success("No files changed – nothing to do.")
        return

    patch_dir = _ensure_patch_dir(local)

    if needed_version is None:
        temporary_dir = None
        upstream_root = upstream
    else:
        temporary_dir = tempfile.TemporaryDirectory()
        upstream_root = Path(temporary_dir.name)
        branch = "final-" + _format_version(needed_version).replace(".", "_")
        _copy_files_from_branch(upstream, branch, upstream_root, changed_files)

    try:
        files_to_patch: List[Path] = []
        for changed_file in changed_files:
            if not with_cmake and (
                changed_file.name == "CMakeLists.txt" or changed_file.suffix == ".cmake"
            ):
                continue

            patch_file = patch_dir / _patch_file_name(changed_file)
            if patch_file.exists():
                mark_semi_success(f"Already patched: {changed_file}")
                continue

            upstream_file = upstream_root / changed_file
            if not upstream_file.exists():
                continue

            files_to_patch.append(changed_file)

        if files_to_patch:
            create_patches(upstream_root, local, files_to_patch, is_scan=True)
        else:
            mark_success("All changed files already have patches.")
    finally:
        if temporary_dir is not None:
            temporary_dir.cleanup()


# ---------------------------------------------------------------------------
# Postprocessing helpers for **apply** mode
# ---------------------------------------------------------------------------


def _check_is_applied(local_path: Path, patch_file: Path) -> bool:
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
    temp_repo: Path,
    patches_path: Path,
) -> None:
    """Apply .patch files to the project directory."""
    for patch_file in patches_path.rglob("*.patch"):
        if _check_is_applied(temp_repo, patch_file):
            continue

        is_applied, error_message = _apply_patch(temp_repo, patch_file)
        if not is_applied:
            assert error_message is not None
            mark_failure(error_message)
            sys.exit(1)


def _init_repo(
    temp_repo: Path,
    initial_branch: str,
) -> None:
    subprocess.run(
        ["git", "init", "-b", initial_branch],
        cwd=temp_repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=True,
    )


def _copy_files_from_branch(
    upstream: Path,
    initial_branch: str,
    temp_repo: Path,
    changed_files: List[Path],
) -> None:
    # Get the content of all files in the upstream repository at the initial branch state
    for changed_file in changed_files:
        temp_file_path = Path(temp_repo) / changed_file

        # Ensure the parent directory exists
        temp_file_path.parent.mkdir(parents=True, exist_ok=True)

        # Retrieve the file content from the initial branch
        result = subprocess.run(
            [
                "git",
                "-C",
                str(upstream),
                "show",
                f"{initial_branch}:{changed_file}",
            ],
            stdout=subprocess.PIPE,
            stderr=subprocess.DEVNULL,
            check=False,
        )

        if result.returncode != 0:
            mark_semi_success(f"Failed to retrieve {changed_file} file from upstream")
            continue

        # Write the content to the temporary directory
        temp_file_path.write_bytes(result.stdout)


def _create_branch_and_checkout(
    temp_repo: Path, initial_branch: str, target_branch: str
) -> None:
    subprocess.run(
        ["git", "checkout", "-b", target_branch, initial_branch],
        cwd=temp_repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=True,
    )


def _rebase(temp_repo: Path, target_branch: str) -> List[Path]:
    result = subprocess.run(
        ["git", "rebase", target_branch],
        cwd=temp_repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=False,
    )

    if result.returncode == 0:
        return []

    # Identify files with conflicts during rebase
    result = subprocess.run(
        ["git", "status", "--porcelain"],
        cwd=temp_repo,
        stdout=subprocess.PIPE,
        stderr=subprocess.DEVNULL,
        check=True,
    )

    conflicted_files: List[Path] = [
        Path(line[3:].strip())
        for line in result.stdout.decode().splitlines()
        if line.startswith("UU ")  # "UU" indicates both modified (conflict)
    ]
    return conflicted_files


def _add_to_stage(repo: Path, files: List[Path]) -> None:
    subprocess.run(
        ["git", "add", *files],
        cwd=repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=True,
    )


def _commit(temp_repo: Path, message: str) -> None:
    subprocess.run(
        ["git", "add", "."],
        cwd=temp_repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=True,
    )
    subprocess.run(
        ["git", "commit", "-m", message, "--allow-empty"],
        cwd=temp_repo,
        stdout=subprocess.DEVNULL,
        stderr=subprocess.DEVNULL,
        check=True,
    )


def _copy_files(source: Path, destination: Path, files: List[Path]) -> None:
    for file in files:
        source_file = source / file
        destination_file = destination / file

        if not source_file.exists():
            mark_failure(f"File does not exist: {source_file}")
            continue

        destination_file.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_file, destination_file)


def _update_conflicting_files(local: Path, conflicting_files: List[Path]) -> None:
    for conflicting_file in conflicting_files:
        file_path = local / conflicting_file
        content = file_path.read_text("utf-8")

        updated_content = re.sub(
            r"^<<<<<<<.*$", "<<<<<<< Vanilla QGIS", content, flags=re.MULTILINE
        )
        updated_content = re.sub(
            r"^>>>>>>>.*$", ">>>>>>> NextGIS QGIS", updated_content, flags=re.MULTILINE
        )

        file_path.write_text(updated_content)


def _apply_patches_in_temp_repo(
    *,
    local: Path,
    upstream: Path,
    local_version: Dict[str, str],
    upstream_version: Dict[str, str],
    add_to_stage: bool,
) -> None:
    """Apply .patch files."""
    patches_path = local / "opt" / "patches"
    if not patches_path.exists():
        mark_failure(f"{patches_path} doesn't exist")
        sys.exit(1)

    changed_files = _collect_changed_files_from_patches(local)

    with tempfile.TemporaryDirectory() as temp_dir:
        temp_repo = Path(temp_dir)
        initial_branch = "final-" + _format_version(local_version).replace(".", "_")
        target_branch = "final-" + _format_version(upstream_version).replace(".", "_")
        changed_branch = "changed-" + _format_version(local_version).replace(".", "_")

        initial_branch_in_temp_repo = f"{initial_branch}-temp-initial"
        target_branch_in_temp_repo = f"{target_branch}-temp-target"

        # Init repo with files from upstream at prevours NGQ core
        _init_repo(temp_repo, initial_branch_in_temp_repo)
        _copy_files_from_branch(upstream, initial_branch, temp_repo, changed_files)
        _commit(temp_repo, "Upstream at " + _format_version(local_version))

        _create_branch_and_checkout(temp_repo, initial_branch_in_temp_repo, target_branch_in_temp_repo)
        _copy_files_from_branch(upstream, target_branch, temp_repo, changed_files)
        _commit(temp_repo, "Upstream at " + _format_version(upstream_version))

        _create_branch_and_checkout(temp_repo, initial_branch_in_temp_repo, changed_branch)
        _apply_patches(temp_repo, patches_path)
        _commit(temp_repo, "Updated " + _format_version(upstream_version))
        conflicting_files = _rebase(temp_repo, target_branch_in_temp_repo)
        _copy_files(temp_repo, local, changed_files)

        _update_conflicting_files(local, conflicting_files)

        if add_to_stage:
            _add_to_stage(local, list(set(changed_files) - set(conflicting_files)))

        if not conflicting_files:
            mark_success("All patches are applied successfully")
        else:
            mark_semi_success(
                f"{len(conflicting_files)} patches are applied with errors"
            )


def _overwrite_files(local: Path, add_to_stage: bool) -> None:
    """Overwrite destination directory files with those from source."""
    overwrite_path = local / "opt" / "overwrite"
    if not overwrite_path.exists():
        return

    for source_path in overwrite_path.rglob("*"):
        if not source_path.is_file() or source_path.name.startswith("."):
            continue

        destination = local / source_path.relative_to(overwrite_path)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_path, destination)
        mark_success(f"Overwrited {destination.relative_to(local)}")

        if add_to_stage:
            _add_to_stage(local, [destination])


def _rename_files(local: Path, add_to_stage: bool) -> None:
    """Rename ui_defaults.h file to ngui_defaults.h if it exists."""
    files = [
        (local / "src/app/ui_defaults.h", local / "src/app/ngui_defaults.h"),
    ]
    for old_path, new_path in files:
        if not old_path.exists():
            continue
        old_path.rename(new_path)

        if add_to_stage:
            _add_to_stage(local, [old_path, new_path])

        mark_success(f"Renamed {old_path.name} to {new_path.name}")


def _patch_util_cmake(local: Path, version: Dict[str, str], add_to_stage: bool) -> None:
    """Patch util.cmake file with extracted version info."""
    from fileinput import input

    util_path = local / "cmake" / "util.cmake"

    for line in input(util_path, inplace=True):
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

    if add_to_stage:
        _add_to_stage(local, [util_path])

    mark_success("Patched version in util.cmake")


def apply(
    *,
    local: Path,
    upstream: Path,
    local_version: Dict[str, str],
    upstream_version: Dict[str, str],
    add_to_stage: bool,
) -> None:
    _apply_patches_in_temp_repo(
        local=local,
        upstream=upstream,
        local_version=local_version,
        upstream_version=upstream_version,
        add_to_stage=add_to_stage,
    )
    _overwrite_files(local, add_to_stage)
    _rename_files(local, add_to_stage)
    _patch_util_cmake(local, upstream_version, add_to_stage)


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
    apply_parser.add_argument(
        "--add", action="store_true", help="Add changed files to stage"
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

    # Local version info
    local = args.local.resolve()
    mark_info(f"Local QGIS path: {local}")

    upstream = None
    upstream_version = None
    if args.command != "list":
        upstream = args.upstream.resolve()
        upstream_version = _parse_qgis_version(upstream / "CMakeLists.txt")
        mark_info(f"Upstream QGIS path: {upstream}")

    local_version = _parse_qgis_version(local / "cmake" / "util.cmake")
    mark_info(
        f"QGIS version: {_format_version(local_version, with_name=True)}",
    )

    if args.command == "list":
        for path in _collect_changed_files_from_patches(local):
            print(path)
        return

    assert upstream is not None and upstream_version is not None

    if args.command == "apply":
        apply(
            local=local,
            upstream=upstream,
            local_version=local_version,
            upstream_version=upstream_version,
            add_to_stage=args.add,
        )
        return

    needed_version = None if local_version == upstream_version else local_version

    if args.command == "create":
        create_patches(upstream, local, args.files, needed_version=needed_version)
    elif args.command == "update":
        changed = _collect_changed_files_from_patches(local)
        create_patches(upstream, local, changed, needed_version=needed_version)
        _cleanup(_ensure_patch_dir(local))
    elif args.command == "scan":
        scan_for_new_patches(
            upstream, local, args._from, args.with_cmake, needed_version=needed_version
        )
    else:
        mark_failure(f"Unknown command: {args.command}")
        sys.exit(2)


if __name__ == "__main__":  # pragma: no cover
    main()
