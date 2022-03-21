# -*- coding: utf-8 -*-
"""QGIS Unit tests for OGR GeoPackage QgsProviderConnectionModel.

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

"""
__author__ = 'Nyall Dawson'
__date__ = '07/08/2020'
__copyright__ = 'Copyright 2019, The QGIS Project'
# This will get replaced with a git SHA1 when you do a git archive
__revision__ = '6b44a42058d8f4d3f994b915f72f08b6a3ab474d'

import os
import shutil
import tempfile
from qgis.core import (
    QgsVectorLayer,
    QgsProviderRegistry,
    QgsProviderConnectionModel,
)
from qgis.PyQt.QtCore import (
    QModelIndex,
    Qt,
    QCoreApplication
)
from qgis.testing import unittest
from utilities import unitTestDataPath, start_app

TEST_DATA_DIR = unitTestDataPath()


class TestPyQgsProviderConnectionModel(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Run before all tests"""
        QCoreApplication.setOrganizationName("QGIS_Test")
        QCoreApplication.setOrganizationDomain(cls.__name__)
        QCoreApplication.setApplicationName(cls.__name__)
        start_app()

        gpkg_original_path = '{}/qgis_server/test_project_wms_grouped_layers.gpkg'.format(TEST_DATA_DIR)
        cls.basetestpath = tempfile.mkdtemp()
        cls.gpkg_path = '{}/test_gpkg.gpkg'.format(cls.basetestpath)
        shutil.copy(gpkg_original_path, cls.gpkg_path)
        vl = QgsVectorLayer('{}|layername=cdb_lines'.format(cls.gpkg_path), 'test', 'ogr')
        assert vl.isValid()

        gpkg2_original_path = '{}/points_gpkg.gpkg'.format(TEST_DATA_DIR)
        cls.gpkg_path2 = '{}/test_gpkg2.gpkg'.format(cls.basetestpath)
        shutil.copy(gpkg2_original_path, cls.gpkg_path2)
        vl = QgsVectorLayer('{}'.format(cls.gpkg_path2), 'test', 'ogr')
        assert vl.isValid()

    @classmethod
    def tearDownClass(cls):
        """Run after all tests"""
        os.unlink(cls.gpkg_path)
        os.unlink(cls.gpkg_path2)

    def test_model(self):
        """Test model functionality"""

        md = QgsProviderRegistry.instance().providerMetadata('ogr')
        conn = md.createConnection(self.gpkg_path, {})
        md.saveConnection(conn, 'qgis_test1')

        model = QgsProviderConnectionModel('ogr')
        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.columnCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConfiguration), {})

        md.saveConnection(conn, 'qgis_test1')
        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')

        conn2 = md.createConnection(self.gpkg_path2, {})
        md.saveConnection(conn2, 'qgis_test2')
        self.assertEqual(model.rowCount(), 2)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path)
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path2)
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test2')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path2)

        md.deleteConnection('qgis_test1')
        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')

        md.deleteConnection('qgis_test2')

    def test_model_allow_empty(self):
        """Test model with empty entry"""
        model = QgsProviderConnectionModel('ogr')
        self.assertEqual(model.rowCount(), 0)
        model.setAllowEmptyConnection(True)
        self.assertEqual(model.rowCount(), 1)
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole))
        self.assertTrue(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        md = QgsProviderRegistry.instance().providerMetadata('ogr')
        conn = md.createConnection(self.gpkg_path, {})
        md.saveConnection(conn, 'qgis_test1')

        model.setAllowEmptyConnection(False)
        model.setAllowEmptyConnection(False)

        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.columnCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test1')
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConfiguration), {})
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))

        model.setAllowEmptyConnection(True)
        model.setAllowEmptyConnection(True)
        self.assertEqual(model.rowCount(), 2)
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole))
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.ToolTipRole))
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName))
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri))
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleConfiguration))
        self.assertTrue(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path)
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test1')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path)
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleConfiguration), {})
        self.assertFalse(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))

        md.saveConnection(conn, 'qgis_test1')
        self.assertEqual(model.rowCount(), 2)
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole))
        self.assertTrue(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertFalse(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))

        model.setAllowEmptyConnection(False)
        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        model.setAllowEmptyConnection(True)

        conn2 = md.createConnection(self.gpkg_path2, {})
        md.saveConnection(conn2, 'qgis_test2')
        self.assertEqual(model.rowCount(), 3)
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole))
        self.assertTrue(model.data(model.index(0, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path)
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test1')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path)
        self.assertFalse(model.data(model.index(1, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))
        self.assertEqual(model.data(model.index(2, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')
        self.assertEqual(model.data(model.index(2, 0, QModelIndex()), Qt.ToolTipRole), self.gpkg_path2)
        self.assertEqual(model.data(model.index(2, 0, QModelIndex()), QgsProviderConnectionModel.RoleConnectionName), 'qgis_test2')
        self.assertEqual(model.data(model.index(2, 0, QModelIndex()), QgsProviderConnectionModel.RoleUri), self.gpkg_path2)
        self.assertFalse(model.data(model.index(2, 0, QModelIndex()), QgsProviderConnectionModel.RoleEmpty))

        model.setAllowEmptyConnection(False)
        self.assertEqual(model.rowCount(), 2)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test1')
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')
        model.setAllowEmptyConnection(True)

        md.deleteConnection('qgis_test1')
        self.assertEqual(model.rowCount(), 2)
        self.assertFalse(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole))
        self.assertEqual(model.data(model.index(1, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')

        model.setAllowEmptyConnection(False)
        self.assertEqual(model.rowCount(), 1)
        self.assertEqual(model.data(model.index(0, 0, QModelIndex()), Qt.DisplayRole), 'qgis_test2')


if __name__ == '__main__':
    unittest.main()
