# -*- coding: utf-8 -*-

# Example:
# python3 create_patch_batch.py --src_dir <some dir> --dst_dir <some dir>
# 

import argparse
import os
import subprocess

subpaths = [
    "cmake_templates/qgsconfig.h.in",
    "src/core/geometry/qgsabstractgeometry.h",
    "src/core/geometry/qgsabstractgeometry.cpp",
    "src/core/geometry/qgsgeometry.h",
    "src/core/geometry/qgsgeometry.cpp",
    "src/core/geometry/qgscurvepolygon.cpp",
    "src/core/geometry/qgspoint.cpp",
    "src/core/geometry/qgsmultisurface.cpp",
    "src/core/geometry/qgsmultipolygon.cpp",
    "src/core/geometry/qgsmultipoint.cpp",
    "src/core/geometry/qgsmultilinestring.cpp",
    "src/core/geometry/qgsmulticurve.cpp",
    "src/core/geometry/qgslinestring.cpp",
    "src/core/geometry/qgsgeometryutils.cpp",
    "src/core/geometry/qgsgeometrycollection.cpp",
    "src/core/geometry/qgscompoundcurve.cpp",
    "src/core/geometry/qgscircularstring.cpp",
    "src/core/symbology/qgsellipsesymbollayer.cpp",
    "src/core/symbology/qgsellipsesymbollayer.h",
    "src/core/symbology/qgsfillsymbollayer.cpp",
    "src/core/symbology/qgsfillsymbollayer.h",
    "src/core/symbology/qgslinesymbollayer.cpp",
    "src/core/symbology/qgslinesymbollayer.h",
    "src/core/symbology/qgsmarkersymbollayer.cpp",
    "src/core/symbology/qgsmarkersymbollayer.h",
    "src/core/symbology/qgssymbollayer.cpp",
    "src/core/symbology/qgssymbollayer.h",
    "src/core/expression/qgsexpressioncontextutils.cpp",
    "src/core/auth/qgsauthcertutils.h",
    "src/core/auth/qgsauthcertutils.cpp",
    "src/core/processing/qgsprocessingregistry.cpp",
    "src/core/processing/qgsprocessingutils.h",
    "src/core/processing/qgsprocessingutils.cpp",
    "src/core/providers/qgsproviderregistry.cpp",
    "src/core/qgsapplication.h",
    "src/core/qgsapplication.cpp",
    "src/core/qgspostgresstringutils.cpp",
    "src/core/qgsjsonutils.h",
    "src/core/qgsjsonutils.cpp",
    "src/core/qgslayerdefinition.cpp",
    "src/core/qgsmaplayerfactory.cpp",
    "src/core/layout/qgslayoutitemmap.cpp",
    "src/core/project/qgsproject.cpp",
    "src/core/pointcloud/qgspointcloudblockrequest.cpp",
    "src/core/labeling/qgspallabeling.cpp",
    "src/core/fieldformatter/qgsvaluerelationfieldformatter.cpp",
    "src/core/settings/qgssettingsregistry.cpp",
    "src/core/settings/qgssettingsregistrycore.cpp",
    "src/core/browser/qgsfilebaseddataitemprovider.cpp",
    "src/core/raster/qgsexiftools.cpp",
    "src/core/proj/qgsprojutils.cpp",
    "src/core/network/qgsnetworkaccessmanager.h",
    "src/core/qgsvectorfilewriter.cpp",
    "src/core/qgsfontutils.cpp",
    "src/gui/editorwidgets/qgstexteditwrapper.cpp",
    "src/gui/processing/qgsprocessingguiregistry.cpp",
    "src/gui/processing/qgsprocessingmeshdatasetwidget.h",
    "src/providers/wfs/qgsoapifcollection.cpp",
    "src/providers/wfs/qgsoapifcollection.h",
    "src/gui/qgsgui.cpp",
    "src/gui/qgsgui.h",
    "src/providers/wms/qgswmsdataitems.cpp",
    "src/providers/wms/qgswmsdataitems.h",
    "src/gui/qgsmaptoolidentify.h",
    "src/gui/qgsmaptoolidentify.cpp",
    "src/gui/qgsproviderguiregistry.cpp",
    "src/gui/qgsbrowserdockwidget_p.cpp",
    "src/gui/editorwidgets/core/qgseditorwidgetregistry.cpp",
    "src/providers/wcs/qgswcsdataitems.cpp",
    "src/providers/wms/qgswmsprovider.cpp",
    "src/providers/spatialite/qgsspatialiteprovider.cpp",
    "src/app/qgsidentifyresultsdialog.cpp",
    "src/app/devtools/networklogger/qgsnetworkloggernode.cpp",
    "src/app/devtools/networklogger/qgsnetworkloggerpanelwidget.cpp",
    "src/providers/postgres/qgspostgresconn.cpp",
    "src/providers/wfs/qgsoapifapirequest.cpp",
    "src/providers/wfs/qgsoapifitemsrequest.cpp",
    "src/providers/wfs/qgsoapiflandingpagerequest.cpp",
    "src/providers/wfs/qgsoapifutils.h",
    "src/providers/wfs/qgsoapifutils.cpp",
    "tests/src/core/testqgsjsonutils.cpp",
    "tests/src/gui/testqgstexteditwrapper.cpp",
    "tests/src/gui/testqgsvaluerelationwidgetwrapper.cpp",
    "src/providers/wfs/qgswfsdataitems.cpp",
    "src/analysis/processing/qgsnativealgorithms.cpp",
    "src/gui/editorwidgets/qgsvaluerelationwidgetwrapper.cpp",
    "src/gui/processing/qgsprocessingalgorithmdialogbase.cpp",
    "src/app/qgisapp.cpp",
    "src/app/qgisapp.h",
    "src/app/layout/qgslayoutdesignerdialog.cpp",
    "src/app/qgisappinterface.cpp",
    "src/app/qgisappinterface.h",
    "src/gui/qgisinterface.h",
    "src/app/qgsidentifyresultsdialog.h",
    "src/app/qgslayerstylingwidget.cpp",
    "src/app/main.cpp",
    "src/app/qgswelcomepage.cpp",
    "src/app/qgswelcomepage.h",
    "src/app/options/qgsoptions.cpp",
    "src/app/qgsprojectlistitemdelegate.cpp", 
    "tests/src/gui/testprocessinggui.cpp",
    "src/native/linux/qgslinuxnative.cpp",
    "tests/src/core/testqgsauthcertutils.cpp",
    "src/app/mainwin.cpp",
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
