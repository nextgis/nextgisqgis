#!/usr/bin/env python3
"""
Read mapping.yaml, collect files from locked_paths, filter by extension,
run lupdate, and save translations to i18n/ng_ru.ts.

:raises FileNotFoundError: If mapping.yaml does not exist.
:raises RuntimeError: If lupdate fails.
"""

import sys
from pathlib import Path
import subprocess
import yaml


def read_locked_paths(mapping_path: Path) -> list:
    """
    Read locked_paths from mapping.yaml.

    :param mapping_path: Path to mapping.yaml
    :type mapping_path: Path
    :return: List of locked paths
    :rtype: list
    :raises FileNotFoundError: If mapping.yaml does not exist
    """
    if not mapping_path.exists():
        raise FileNotFoundError(f"{mapping_path} not found")

    with mapping_path.open("r", encoding="utf-8") as file:
        data = yaml.safe_load(file)

    return data.get("locked_paths", [])


def collect_source_files(locked_paths: list) -> list:
    """
    Collect .h, .cpp, and .ui files from locked_paths using glob.

    :param locked_paths: List of glob patterns
    :type locked_paths: list
    :return: List of source files
    :rtype: list
    """
    exts = {".h", ".cpp", ".ui"}
    files = (
        Path(file).resolve()
        for pattern in locked_paths
        for file in Path.cwd().glob(pattern)
    )
    return [
        str(file)
        for file in files
        if file.is_file() and file.suffix in exts and file.name.startswith("ng")
    ]


def run_lupdate(source_files: list, ts_path: Path) -> None:
    """
    Run lupdate on the collected source files.

    :param source_files: List of source files
    :type source_files: list
    :param ts_path: Path to output .ts file
    :type ts_path: Path
    :raises RuntimeError: If lupdate fails
    """
    if not source_files:
        print("No source files found for translation.")
        return

    ts_path.parent.mkdir(parents=True, exist_ok=True)
    cmd = ["lupdate", *source_files, "-ts", str(ts_path)]
    result = subprocess.run(cmd, capture_output=True, text=True)
    if result.returncode != 0:
        raise RuntimeError(f"lupdate failed: {result.stderr.strip()}")


def main() -> None:
    """
    Main entry point.
    """
    mapping_path = Path("opt/mapping.yaml")
    ts_path = Path("i18n/ngqgis_ru.ts")

    try:
        locked_paths = read_locked_paths(mapping_path)
        source_files = collect_source_files(locked_paths)
        run_lupdate(source_files, ts_path)
        print(f"Translation file updated: {ts_path}")

    except Exception as exc:
        print(f"Error: {exc}", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
