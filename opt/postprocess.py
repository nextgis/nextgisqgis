#!/usr/bin/env python
# -*- coding: utf-8 -*-
################################################################################
##
## Project: NextGIS Borsch build system
## Author: Dmitry Baryshnikov <dmitry.baryshnikov@nextgis.com>
##
## Copyright (c) 2017 NextGIS <info@nextgis.com>
## License: GPL v.2
##
## Purpose: Post processing script
################################################################################

import fileinput
import os
import sys

cmake_src_path = os.path.join(sys.argv[1], 'CMakeLists.txt')

if not os.path.exists(cmake_src_path):
    exit('Parse path not exists')

utilfile = os.path.join(os.getcwd(), os.pardir, 'cmake', 'util.cmake')

# Get values
qgis_major = "0"
qgis_minor = "0"
qgis_patch = "0"
qgis_name = "Unknown"

qgis_major_get = False
qgis_minor_get = False
qgis_patch_get = False
qgis_name_get = False

def extract_value(text):
    val_text = text.split("\"")
    return val_text[1]

with open(cmake_src_path) as f:
    for line in f:
        if "SET(CPACK_PACKAGE_VERSION_MAJOR" in line:
            qgis_major = extract_value(line)
            qgis_major_get = True
        elif "SET(CPACK_PACKAGE_VERSION_MINOR" in line:
            qgis_minor = extract_value(line)
            qgis_minor_get = True
        elif "SET(CPACK_PACKAGE_VERSION_PATCH" in line:
            qgis_patch = extract_value(line)
            qgis_patch_get = True
        elif "SET(RELEASE_NAME" in line:
            qgis_name = extract_value(line)
            qgis_name_get = True

        if qgis_major_get and qgis_minor_get and qgis_patch_get and qgis_name_get:
            break

for line in fileinput.input(utilfile, inplace = 1):
    if "set(QGIS_MAJOR " in line:
        print "    set(QGIS_MAJOR " + qgis_major + ")"
    elif "set(QGIS_MINOR " in line:
            print "    set(QGIS_MINOR " + qgis_minor + ")"
    elif "set(QGIS_PATCH " in line:
            print "    set(QGIS_PATCH " + qgis_patch + ")"
    elif "set(QGIS_NAME " in line:
            print "    set(QGIS_NAME \"" + qgis_name + "\")"
    else:
        print line,
