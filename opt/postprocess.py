#!/usr/bin/env python3
# -*- coding: utf-8 -*-
################################################################################
##
## Project: NextGIS Borsch build system
## Author: Dmitry Baryshnikov <dmitry.baryshnikov@nextgis.com>
##
## Copyright (c) 2017-2022 NextGIS <info@nextgis.com>
## License: GPL v.2
##
## Purpose: Post processing script
################################################################################

import fileinput
import os
import sys
import shutil
import subprocess

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

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKGREEN = '\033[92m'
    OKGRAY = '\033[0;37m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    DGRAY='\033[1;30m'
    LRED='\033[1;31m'
    LGREEN='\033[1;32m'
    LYELLOW='\033[1;33m'
    LBLUE='\033[1;34m'
    LMAGENTA='\033[1;35m'
    LCYAN='\033[1;36m'
    WHITE='\033[1;37m'

def extract_value(text):
    val_text = text.split("\"")
    return val_text[1]

def color_print(text, bold, color):
    if sys.platform == 'win32':
        print (text)
    else:
        out_text = ''
        if bold:
            out_text += bcolors.BOLD
        if color == 'GREEN':
            out_text += bcolors.OKGREEN
        elif color == 'LGREEN':
            out_text += bcolors.LGREEN
        elif color == 'LYELLOW':
            out_text += bcolors.LYELLOW
        elif color == 'LMAGENTA':
            out_text += bcolors.LMAGENTA
        elif color == 'LCYAN':
            out_text += bcolors.LCYAN
        elif color == 'LRED':
            out_text += bcolors.LRED
        elif color == 'LBLUE':
            out_text += bcolors.LBLUE
        elif color == 'DGRAY':
            out_text += bcolors.DGRAY
        elif color == 'OKGRAY':
            out_text += bcolors.OKGRAY
        else:
            out_text += bcolors.OKGRAY
        out_text += text + bcolors.ENDC
        print (out_text)

with open(cmake_src_path) as f:
    for line in f:
        if "SET(CPACK_PACKAGE_VERSION_MAJOR" in line.upper():
            qgis_major = extract_value(line)
            qgis_major_get = True
        elif "SET(CPACK_PACKAGE_VERSION_MINOR" in line.upper():
            qgis_minor = extract_value(line)
            qgis_minor_get = True
        elif "SET(CPACK_PACKAGE_VERSION_PATCH" in line.upper():
            qgis_patch = extract_value(line)
            qgis_patch_get = True
        elif "SET(RELEASE_NAME" in line.upper():
            qgis_name = extract_value(line)
            qgis_name_get = True

        if qgis_major_get and qgis_minor_get and qgis_patch_get and qgis_name_get:
            break

for line in fileinput.input(utilfile, inplace = 1):
    if "set(QGIS_MAJOR " in line:
        print ("    set(QGIS_MAJOR " + qgis_major + ")")
    elif "set(QGIS_MINOR " in line:
        print ("    set(QGIS_MINOR " + qgis_minor + ")")
    elif "set(QGIS_PATCH " in line:
        print ("    set(QGIS_PATCH " + qgis_patch + ")")
    elif "set(QGIS_NAME " in line:
        print ("    set(QGIS_NAME \"" + qgis_name + "\")")
    elif "set(VERSION_PATCH " in line:
        print ("    set(VERSION_PATCH 0)")
    else:
        print (line),

# overwrite files
ovr_path = os.path.join(os.getcwd(), 'overwrite')
if os.path.exists(ovr_path):
    dst_path = os.path.abspath(os.path.join(os.getcwd(), os.pardir))
    for dirname, dirnames, filenames in os.walk(ovr_path):
        for filename in filenames:
            src_file = os.path.join(ovr_path, dirname, filename)
            dst_file = src_file.replace(ovr_path, dst_path)
            if not filename.startswith("."):
                color_print("Overwrite " + dst_file, False, 'LRED')
                shutil.copyfile(src_file, dst_file)

# patch files
patches_path = os.path.join(os.getcwd(), 'patches')
if os.path.exists(patches_path):
    for dirname, dirnames, filenames in os.walk(patches_path):
        for patch in filenames:
            color_print("Patch " + patch, False, 'LRED')
            subprocess.call(['git', 'apply', '--ignore-whitespace', os.path.join(patches_path, patch)], cwd = "../")
