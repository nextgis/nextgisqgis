#!/usr/bin/env python
# -*- coding: utf-8 -*-

import xml.etree.ElementTree as ET
import sys
import os
from distutils.version import LooseVersion

# arg[1] plugin name
# arg[2] path to xml files

plugin_name = sys.argv[1]
repo_path = sys.argv[2]

output_url = ''
version = '0.0.0'


# list all xml files
for repo_xml in os.listdir(repo_path):
    try:
        tree = ET.parse(os.path.join(repo_path, repo_xml))
        root = tree.getroot()
        for pyqgis_plugin in root.findall('pyqgis_plugin'):
            if plugin_name == pyqgis_plugin.get('name'):
                currentVersion = pyqgis_plugin.get('version').replace('-', '.')
                if LooseVersion(currentVersion) > LooseVersion(version):
                    version = currentVersion
                    output_url = pyqgis_plugin.find('download_url').text
    #                if not output_url.endswith('.zip'):
    #                    output_url += pyqgis_plugin.find('file_name').text
    except:
        pass

print output_url + ';' + version
