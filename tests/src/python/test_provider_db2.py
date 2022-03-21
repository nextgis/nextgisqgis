# -*- coding: utf-8 -*-
"""QGIS Unit tests for the DB2 provider.

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""
__author__ = 'David Adler'
__date__ = '2016-03-01'
__copyright__ = 'Copyright 2016, The QGIS Project'

import qgis  # NOQA

import os

from qgis.core import QgsVectorLayer

from PyQt4.QtCore import QgsSettings

from utilities import unitTestDataPath
from qgis.testing import start_app, unittest
from providertestbase import ProviderTestCase

start_app()
TEST_DATA_DIR = unitTestDataPath()


class TestPyQgsDb2Provider(unittest.TestCase, ProviderTestCase):

    @classmethod
    def setUpClass(cls):
        """Run before all tests"""
        cls.dbconn = "dbname='ostest' driver='IBM DB2 ODBC DRIVER' host=dadler.dynalias.org port=50000 user='osuser' password='osuserpw'"
        if 'QGIS_DB2_DB' in os.environ:
            cls.dbconn = os.environ['QGIS_DB2TEST_DB']
        # Create test layer
        cls.vl = QgsVectorLayer(cls.dbconn + ' srid=4326 type=Point  table="QGIS_TEST"."SOMEDATA" (GEOM) sql=', 'test', 'DB2')
        assert(cls.vl.isValid())
        cls.source = cls.vl.dataProvider()
        cls.poly_vl = QgsVectorLayer(
            cls.dbconn + ' srid=4326 type=POLYGON table="QGIS_TEST"."SOME_POLY_DATA" (geom) sql=', 'test', 'DB2')
        assert(cls.poly_vl.isValid())
        cls.poly_provider = cls.poly_vl.dataProvider()

    @classmethod
    def tearDownClass(cls):
        """Run after all tests"""

    def setUp(self):
        print(("starting " + self._testMethodName))

    def getSubsetString(self):
        """Individual providers may need to override this depending on their subset string formats"""
        return 'cnt > 100 and cnt < 410'

    def enableCompiler(self):
        QgsSettings().setValue('/qgis/compileExpressions', True)
        return True

    def disableCompiler(self):
        QgsSettings().setValue('/qgis/compileExpressions', False)


if __name__ == '__main__':
    unittest.main()
