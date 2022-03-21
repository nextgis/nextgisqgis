# -*- coding: utf-8 -*-

# Example:
# python create_patch.py --src_dir <some dir> --dst_dir <some dir> --subpath <some subpath> 

import argparse
import os
import subprocess

def run_shell(args):
    print('calling {}'.format(" ".join(args)))
    # return subprocess.check_call(args, shell=False)

    p = subprocess.Popen(args, shell=False, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    output, _ = p.communicate()

    return output

def create_name(pathlist):
    name = pathlist[-1]
    if len(pathlist) > 2:
        name = pathlist[-2] + '_' + name
    if len(pathlist) > 3:
        name = pathlist[-3] + '_' + name

    return '{}.patch'.format(name)

parser = argparse.ArgumentParser(description='Create patch from two files')
parser.add_argument('--src_dir', help='Source directory', required=True)
parser.add_argument('--dst_dir', help='Destination directory', required=True)
parser.add_argument('--subpath', help='Subpath inside directory', required=True)
parser.add_argument('--version', action='version', version='%(prog)s 1.0')

args = parser.parse_args()

src_full_path = os.path.join(args.src_dir, args.subpath)
dst_full_path = os.path.join(args.dst_dir, args.subpath)

if os.path.exists(src_full_path) == False:
    exit('Path {} not exists'.format(src_full_path))

if os.path.exists(dst_full_path) == False:
    exit('Path {} not exists'.format(src_full_path))

path = os.path.normpath(args.subpath)
partlist = path.split(os.sep)

output = os.path.join(args.dst_dir, 'opt', 'patches', create_name(partlist))

print('Patch path is: ' + output)

out = run_shell(("diff", "-u", src_full_path, dst_full_path))
out = out.replace(args.src_dir, 'a')
out = out.replace(args.dst_dir, 'b')

with open(output, "w") as file:
    file.write(out)
