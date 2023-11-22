# -*- coding: utf-8 -*-

# Example:
# python3 create_patch_batch.py --src_dir <some dir> --dst_dir <some dir>
# 

import argparse
import os
import subprocess

subpaths = [
  "src/analysis/processing/qgsnativealgorithms.cpp",
  "src/app/browser/qgsinbuiltdataitemproviders.cpp",
  "src/app/layers/qgsapplayerhandling.cpp",
  "src/app/qgisapp.h",
  "src/app/qgslayertreeviewindicatorprovider.cpp",
  "src/app/qgsmaptoolselectutils.cpp",
  "src/core/browser/qgsfilebaseddataitemprovider.cpp",
  "src/core/providers/qgsproviderregistry.cpp",
  "src/core/qgsapplication.cpp",
  "src/core/qgsapplication.h",
  "src/core/raster/qgsexiftools.cpp",
  "src/core/settings/qgssettingsregistrycore.cpp",
  "src/gui/processing/qgsprocessingmultipleselectiondialog.cpp",
  "src/gui/qgsgui.cpp",
  "src/gui/qgsmanageconnectionsdialog.cpp",
  "src/gui/qgsmanageconnectionsdialog.h",
  "src/gui/qgsqueryresultwidget.cpp",
  "src/providers/wms/qgswmsprovider.cpp",
  "python/core/auto_generated/symbology/qgssymbollayer.sip.in",
  "python/core/auto_additions/qgsarcgisrestutils.py",
  "python/core/auto_generated/processing/qgsprocessingutils.sip.in",
  "python/core/core_auto.sip",
  "python/core/auto_additions/qgis.py",
  "python/core/auto_additions/qgsmapboxglstyleconverter.py",
  "python/plugins/processing/ProcessingPlugin.py",
  "python/gui/gui_auto.sip",
  "python/gui/gui.sip.in",
  "src/3d/qgspointcloudlayer3drenderer.cpp",
  "src/test/qgstest.h"
]

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

parser = argparse.ArgumentParser(description='Create patch from two files in batched mode')
parser.add_argument('--src_dir', help='Source directory', required=True)
parser.add_argument('--dst_dir', help='Destination directory', required=True)
parser.add_argument('--version', action='version', version='%(prog)s 1.0')

args = parser.parse_args()

for subpath in subpaths:
    src_full_path = os.path.join(args.src_dir, subpath)
    dst_full_path = os.path.join(args.dst_dir, subpath)

    if os.path.exists(src_full_path) == False:
        exit('Path {} not exists'.format(src_full_path))

    if os.path.exists(dst_full_path) == False:
        exit('Path {} not exists'.format(src_full_path))

    path = os.path.normpath(subpath)
    partlist = path.split(os.sep)

    output = os.path.join(args.dst_dir, 'opt', 'patches', create_name(partlist))

    print('Patch path is: ' + output)

    out = run_shell(("diff", "-u", src_full_path, dst_full_path))
    out = out.replace(args.src_dir.encode(), 'a'.encode())
    out = out.replace(args.dst_dir.encode(), 'b'.encode())

    with open(output, "w") as file:
        file.write(out.decode('utf8'))
