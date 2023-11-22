import os
import re
import argparse

organize_file = 'folders.csv'

parser = argparse.ArgumentParser(description="Create existing patched files list")
parser.add_argument("--patch_dir", help="Patch files directory", required=True)
args = parser.parse_args()

patch_dir = args.patch_dir

subpaths = set()

pattern = re.compile(r"--- a/(.+?)(\t|\s|$)")

for subpath in os.listdir(patch_dir):
    with open(os.path.join(patch_dir, subpath), "r") as file:
        first_line = file.readline()
        match = pattern.search(first_line)
        if match:
            subpath = match.group(1)
            subpaths.add(subpath)

subpaths = sorted(subpaths)

for filename in subpaths:
    print(filename);
