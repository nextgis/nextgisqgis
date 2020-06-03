#!/usr/bin/env python
# -*- coding: utf-8 -*-
################################################################################
##
## Project: NextGIS Borsch build system
## Author: Dmitry Baryshnikov <dmitry.baryshnikov@nextgis.com>
##
## Copyright (c) 2018 NextGIS <info@nextgis.com>
## License: GPL v.2
##
## Purpose: Download qgis plugin archives for lauchpad ppa script
################################################################################

import os
import urllib
import subprocess
import tempfile

plugins = [
    "QuickMapServices",
    "QTiles",
    "NextGIS Connect"
]

# Get values
qgis_major = "0"
qgis_minor = "0"

utilfile = os.path.join(os.getcwd(), 'cmake', 'util.cmake')

def extract_value(text):
    return text.replace(")", "").strip()

with open(utilfile) as f:
    for line in f:
        if "set(QGIS_MAJOR" in line:
            qgis_major = extract_value(line.replace("set(QGIS_MAJOR", ""))
        elif "set(QGIS_MINOR" in line:
            qgis_minor = extract_value(line.replace("set(QGIS_MINOR", ""))

qgis_version = '{}.{}'.format(qgis_major, qgis_minor)

print 'QGIS sources version: ' + qgis_version

metadata_xml_urls = [
    'https://plugins.qgis.org/plugins/plugins.xml?qgis=' + qgis_version,
    'https://rm.nextgis.com/api/repo/1/qgis_xml?qgis=' + qgis_version
]

# Create repos dir
counter = 0
repos_dir = os.path.join(tempfile.gettempdir(), 'repos')
if not os.path.exists(repos_dir):
    os.makedirs(repos_dir)

print 'Get metadata'
for metadata_xml_url in metadata_xml_urls:
    urllib.urlretrieve(metadata_xml_url, os.path.join(repos_dir, str(counter) + ".repo.xml"))
    counter += 1

print 'Get plugin archives'
for plugin in plugins:
    plugin_name = plugin.replace(' ', '_')
    package_details = subprocess.check_output(["python", os.path.join(os.getcwd(), 'scripts', 'process_repo_xml.py'), plugin, repos_dir])
    package_url = package_details.split(';')[0]
    if package_url:
        urllib.urlretrieve(package_url, os.path.join(os.getcwd(), 'python', 'plugins', plugin_name + '.zip'))
