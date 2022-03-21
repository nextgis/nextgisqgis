# -*- coding: utf-8 -*-
"""QGIS unit tests for QgsPalLabeling: label rendering output to map canvas

From build dir, run: ctest -R PyQgsPalLabelingCanvas -V

See <qgis-src-dir>/tests/testdata/labeling/README.rst for description.

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""

__author__ = 'Larry Shaffer'
__date__ = '07/09/2013'
__copyright__ = 'Copyright 2013, The QGIS Project'

import qgis  # NOQA

import sys
import os
from qgis.PyQt.QtCore import qDebug, QThreadPool
from qgis.core import QgsVectorLayerSimpleLabeling

from utilities import (
    getTempfilePath,
    renderMapToImage,
    mapSettingsString
)

from test_qgspallabeling_base import TestQgsPalLabeling, runSuite
from test_qgspallabeling_tests import (
    TestPointBase,
    TestLineBase,
    suiteTests
)


class TestCanvasBase(TestQgsPalLabeling):

    layer = None
    """:type: QgsVectorLayer"""

    @classmethod
    def setUpClass(cls):
        if not cls._BaseSetup:
            TestQgsPalLabeling.setUpClass()

    @classmethod
    def tearDownClass(cls):
        TestQgsPalLabeling.tearDownClass()
        cls.removeMapLayer(cls.layer)
        cls.layer = None

    def setUp(self):
        """Run before each test."""
        super(TestCanvasBase, self).setUp()
        self._TestImage = ''
        # ensure per test map settings stay encapsulated
        self._TestMapSettings = self.cloneMapSettings(self._MapSettings)
        self._Mismatch = 0
        self._ColorTol = 0
        self._Mismatches.clear()
        self._ColorTols.clear()

    def checkTest(self, **kwargs):
        self.layer.setLabeling(QgsVectorLayerSimpleLabeling(self.lyr))

        ms = self._MapSettings  # class settings
        settings_type = 'Class'
        if self._TestMapSettings is not None:
            ms = self._TestMapSettings  # per test settings
            settings_type = 'Test'
        if 'PAL_VERBOSE' in os.environ:
            qDebug('MapSettings type: {0}'.format(settings_type))
            qDebug(mapSettingsString(ms))

        img = renderMapToImage(ms, parallel=False)
        self._TestImage = getTempfilePath('png')
        if not img.save(self._TestImage, 'png'):
            os.unlink(self._TestImage)
            raise OSError('Failed to save output from map render job')
        self.saveControlImage(self._TestImage)

        mismatch = 0
        if 'PAL_NO_MISMATCH' not in os.environ:
            # some mismatch expected
            mismatch = self._Mismatch if self._Mismatch else 0
            if self._TestGroup in self._Mismatches:
                mismatch = self._Mismatches[self._TestGroup]
        colortol = 0
        if 'PAL_NO_COLORTOL' not in os.environ:
            colortol = self._ColorTol if self._ColorTol else 0
            if self._TestGroup in self._ColorTols:
                colortol = self._ColorTols[self._TestGroup]
        self.assertTrue(*self.renderCheck(mismatch=mismatch,
                                          colortol=colortol,
                                          imgpath=self._TestImage))


class TestCanvasBasePoint(TestCanvasBase):

    @classmethod
    def setUpClass(cls):
        TestCanvasBase.setUpClass()
        cls.layer = TestQgsPalLabeling.loadFeatureLayer('point')


class TestCanvasPoint(TestCanvasBasePoint, TestPointBase):

    def setUp(self):
        """Run before each test."""
        super(TestCanvasPoint, self).setUp()
        self.configTest('pal_canvas', 'sp')


class TestCanvasBaseLine(TestCanvasBase):

    @classmethod
    def setUpClass(cls):
        TestCanvasBase.setUpClass()
        cls.layer = TestQgsPalLabeling.loadFeatureLayer('line')


class TestCanvasLine(TestCanvasBaseLine, TestLineBase):

    def setUp(self):
        """Run before each test."""
        super(TestCanvasLine, self).setUp()
        self.configTest('pal_canvas_line', 'sp')


if __name__ == '__main__':
    # NOTE: unless PAL_SUITE env var is set all test class methods will be run
    # SEE: test_qgspallabeling_tests.suiteTests() to define suite
    suite = (
        ['TestCanvasPoint.' + t for t in suiteTests()['sp_suite']]
    )
    res = runSuite(sys.modules[__name__], suite)
    sys.exit(not res.wasSuccessful())
