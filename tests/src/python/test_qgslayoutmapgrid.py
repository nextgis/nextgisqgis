# -*- coding: utf-8 -*-
"""QGIS Unit tests for QgsLayoutItemMapGrid.

.. note. This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""
__author__ = '(C) 2017 by Nyall Dawson'
__date__ = '20/10/2017'
__copyright__ = 'Copyright 2012, The QGIS Project'

import qgis  # NOQA

from qgis.PyQt.QtCore import QRectF, QDir
from qgis.PyQt.QtGui import QPainter, QColor
from qgis.PyQt.QtTest import QSignalSpy

from qgis.core import (QgsLayoutItemMap,
                       QgsLayoutItemMapGrid,
                       QgsRectangle,
                       QgsLayout,
                       QgsProperty,
                       QgsLayoutObject,
                       QgsFontUtils,
                       QgsTextFormat,
                       QgsProject,
                       QgsCoordinateReferenceSystem)
from qgis.testing import start_app, unittest
from utilities import unitTestDataPath, getTestFont
from qgslayoutchecker import QgsLayoutChecker

start_app()
TEST_DATA_DIR = unitTestDataPath()


class TestQgsLayoutMapGrid(unittest.TestCase):

    def setUp(self):
        self.report = "<h1>Python QgsLayoutItemMap Tests</h1>\n"

    def tearDown(self):
        report_file_path = "%s/qgistest.html" % QDir.tempPath()
        with open(report_file_path, 'a') as report_file:
            report_file.write(self.report)

    def testGrid(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.setCrs(QgsCoordinateReferenceSystem('EPSG:32633'))
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        self.assertFalse(map.grids().hasEnabledItems())

        """Test that we can create a grid for a map."""
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        self.assertTrue(map.grids().hasEnabledItems())
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(True)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        format = QgsTextFormat.fromQFont(getTestFont('Bold'))
        format.setColor(QColor(255, 0, 0))
        format.setOpacity(150 / 255)
        map.grid().setAnnotationTextFormat(format)
        map.grid().setAnnotationPrecision(0)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Left)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Top)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Bottom)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Bottom)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_grid', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        map.grid().setEnabled(False)
        map.grid().setAnnotationEnabled(False)

        assert myTestResult, myMessage

    def testCrossGrid(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        myRectangle = QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setStyle(QgsLayoutItemMapGrid.Cross)
        map.grid().setCrossLength(2.0)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_crossgrid', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()

        map.grid().setStyle(QgsLayoutItemMapGrid.Solid)
        map.grid().setEnabled(False)
        map.grid().setAnnotationEnabled(False)

        assert myTestResult, myMessage

    def testMarkerGrid(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        myRectangle = QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setStyle(QgsLayoutItemMapGrid.Markers)
        map.grid().setCrossLength(2.0)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.grid().markerSymbol().symbolLayer(0).setStrokeColor(QColor(0, 0, 0))
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_markergrid', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()

        map.grid().setStyle(QgsLayoutItemMapGrid.Solid)
        map.grid().setEnabled(False)
        map.grid().setAnnotationEnabled(False)

        assert myTestResult, myMessage

    def testFrameOnly(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        myRectangle = QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setStyle(QgsLayoutItemMapGrid.FrameAnnotationsOnly)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        map.grid().setFramePenSize(0.5)
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_gridframeonly', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()

        map.grid().setStyle(QgsLayoutItemMapGrid.Solid)
        map.grid().setEnabled(False)
        map.grid().setAnnotationEnabled(False)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.NoFrame)

        assert myTestResult, myMessage

    def testZebraStyle(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        myRectangle = QgsRectangle(785462.375, 3341423.125,
                                   789262.375, 3343323.125)
        map.setExtent(myRectangle)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setGridLineColor(QColor(0, 0, 0))
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        map.grid().setFrameWidth(10)
        map.grid().setFramePenSize(1)
        map.grid().setGridLineWidth(0.5)
        map.grid().setFramePenColor(QColor(255, 100, 0, 200))
        map.grid().setFrameFillColor1(QColor(50, 90, 50, 100))
        map.grid().setFrameFillColor2(QColor(200, 220, 100, 60))
        map.grid().setEnabled(True)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_zebrastyle', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout(0, 100)
        self.report += checker.report()
        assert myTestResult, myMessage

    def testZebraStyleSides(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        myRectangle = QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setGridLineColor(QColor(0, 0, 0))
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        map.grid().setFrameWidth(10)
        map.grid().setFramePenSize(1)
        map.grid().setGridLineWidth(0.5)
        map.grid().setFramePenColor(QColor(0, 0, 0))
        map.grid().setFrameFillColor1(QColor(0, 0, 0))
        map.grid().setFrameFillColor2(QColor(255, 255, 255))
        map.grid().setEnabled(True)

        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameLeft, True)
        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameRight, False)
        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameTop, False)
        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameBottom, False)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_zebrastyle_left', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout(0, 100)
        self.report += checker.report()
        assert myTestResult, myMessage

        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameTop, True)
        map.updateBoundingRect()
        checker = QgsLayoutChecker('composermap_zebrastyle_lefttop', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout(0, 100)
        self.report += checker.report()
        assert myTestResult, myMessage

        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameRight, True)
        map.updateBoundingRect()
        checker = QgsLayoutChecker('composermap_zebrastyle_lefttopright', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout(0, 100)
        self.report += checker.report()
        assert myTestResult, myMessage

        map.grid().setFrameSideFlag(QgsLayoutItemMapGrid.FrameBottom, True)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.NoFrame)

    def testInteriorTicks(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)

        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        myRectangle = QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setBlendMode(QPainter.CompositionMode_SourceOver)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.InteriorTicks)
        map.grid().setFrameWidth(10)
        map.grid().setFramePenSize(1)
        map.grid().setFramePenColor(QColor(0, 0, 0))
        map.grid().setEnabled(True)
        map.grid().setStyle(QgsLayoutItemMapGrid.FrameAnnotationsOnly)
        map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_interiorticks', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout(0, 100)
        self.report += checker.report()
        assert myTestResult, myMessage

    def testAnnotationsVariations(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()

        map_configs = [
            (10, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 0),
            (10, 120, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 3),
            (90, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 0),
            (90, 120, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 3),
            (170, 30, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 0),
            (170, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 3),
            (250, 30, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 0),
            (250, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 3),
        ]

        for x, y, pos, style, dist in map_configs:

            map = QgsLayoutItemMap(layout)
            layout.addLayoutItem(map)
            map.attemptSetSceneRect(QRectF(x, y, 50, 50))
            map.setBackgroundColor(QColor(200, 200, 200))
            map.setExtent(QgsRectangle(5, 5, 15, 15))
            map.setFrameEnabled(True)
            map.grid().setFrameStyle(style)
            map.grid().setFrameWidth(7)
            map.grid().setFramePenSize(1)
            map.grid().setFramePenColor(QColor(255, 0, 0))
            map.grid().setEnabled(True)
            map.grid().setIntervalX(10)
            map.grid().setIntervalY(10)
            map.grid().setAnnotationEnabled(True)
            map.grid().setGridLineColor(QColor(0, 255, 0))
            map.grid().setGridLineWidth(0.5)
            map.grid().setAnnotationFont(getTestFont('Bold', 20))
            map.grid().setAnnotationFontColor(QColor(0, 0, 255, 150))
            map.grid().setAnnotationPrecision(0)
            map.grid().setAnnotationFrameDistance(dist)

            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Left)

            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Vertical, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.BoundaryDirection, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.VerticalDescending, QgsLayoutItemMapGrid.Left)

            map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_annotations_variations', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.assertTrue(myTestResult, myMessage)

    def testAnnotationsVariationsRotated(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()

        map_configs = [
            (10, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 0),
            (10, 120, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 3),
            (90, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 0),
            (90, 120, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 3),
            (170, 30, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 0),
            (170, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, 3),
            (250, 30, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 0),
            (250, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, 3),
        ]

        for x, y, pos, style, dist in map_configs:

            map = QgsLayoutItemMap(layout)
            layout.addLayoutItem(map)
            map.attemptSetSceneRect(QRectF(x, y, 50, 50))
            map.setBackgroundColor(QColor(200, 200, 200))
            map.setExtent(QgsRectangle(5, 5, 15, 15))
            map.setMapRotation(30)
            map.setFrameEnabled(True)
            map.grid().setFrameStyle(style)
            map.grid().setFrameWidth(7)
            map.grid().setFramePenSize(1)
            map.grid().setFramePenColor(QColor(255, 0, 0))
            map.grid().setEnabled(True)
            map.grid().setIntervalX(10)
            map.grid().setIntervalY(10)
            map.grid().setAnnotationEnabled(True)
            map.grid().setGridLineColor(QColor(0, 255, 0))
            map.grid().setGridLineWidth(0.5)
            map.grid().setAnnotationFont(getTestFont('Bold', 20))
            map.grid().setAnnotationFontColor(QColor(0, 0, 255, 150))
            map.grid().setAnnotationPrecision(0)
            map.grid().setAnnotationFrameDistance(dist)
            map.grid().setRotatedTicksEnabled(True)
            map.grid().setRotatedAnnotationsEnabled(True)

            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Left)

            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.AboveTick, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.UnderTick, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.BoundaryDirection, QgsLayoutItemMapGrid.Left)

            map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_annotations_variations_rotated', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.assertTrue(myTestResult, myMessage)

    def testAnnotationsVariationsRotatedThresholds(self):
        """
        Tests various rotated grid threshold settings
        """
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()

        map_configs = [
            (10, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, True, False),
            (10, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, True, False),
            (170, 30, QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.InteriorTicks, False, True),
            (170, 120, QgsLayoutItemMapGrid.InsideMapFrame, QgsLayoutItemMapGrid.ExteriorTicks, False, True),
        ]

        for x, y, pos, style, limit_rot, limit_corners in map_configs:

            map = QgsLayoutItemMap(layout)
            layout.addLayoutItem(map)
            map.attemptSetSceneRect(QRectF(x, y, 100, 50))
            map.setExtent(QgsRectangle(5000000, 800000, 6000000, 1300000))
            map.setBackgroundColor(QColor(200, 200, 200))
            map.setMapRotation(0)
            map.setFrameEnabled(True)
            map.setCrs(QgsCoordinateReferenceSystem.fromEpsgId(2056))
            map.grid().setCrs(QgsCoordinateReferenceSystem.fromEpsgId(4326))
            map.grid().setFrameStyle(style)
            map.grid().setFrameWidth(7)
            map.grid().setFramePenSize(1)
            map.grid().setFramePenColor(QColor(255, 0, 0))
            map.grid().setEnabled(True)
            map.grid().setIntervalX(2)
            map.grid().setIntervalY(2)
            map.grid().setAnnotationEnabled(True)
            map.grid().setGridLineColor(QColor(0, 255, 0))
            map.grid().setGridLineWidth(0.5)
            map.grid().setRotatedTicksLengthMode(QgsLayoutItemMapGrid.NormalizedTicks)
            map.grid().setAnnotationFont(getTestFont('Bold', 15))
            map.grid().setAnnotationFontColor(QColor(0, 0, 255, 150))
            map.grid().setAnnotationPrecision(0)
            map.grid().setAnnotationFrameDistance(2.5)
            map.grid().setRotatedTicksEnabled(True)
            map.grid().setRotatedAnnotationsEnabled(True)

            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationPosition(pos, QgsLayoutItemMapGrid.Left)

            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick, QgsLayoutItemMapGrid.Top)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick, QgsLayoutItemMapGrid.Right)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick, QgsLayoutItemMapGrid.Bottom)
            map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick, QgsLayoutItemMapGrid.Left)

            if limit_rot:
                map.grid().setRotatedAnnotationsMinimumAngle(30)
                map.grid().setRotatedTicksMinimumAngle(30)

            if limit_corners:
                map.grid().setRotatedAnnotationsMarginToCorner(10)
                map.grid().setRotatedTicksMarginToCorner(10)

            map.updateBoundingRect()

        checker = QgsLayoutChecker('composermap_annotations_variations_rotated_thresholds', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.assertTrue(myTestResult, myMessage)

    def testExpressionContext(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        map.setExtent(QgsRectangle(781662.375, 3339523.125, 793062.375, 3345223.125))
        map.setScale(1000)
        layout.addLayoutItem(map)

        # grid expression context should inherit from map, so variables like @map_scale can be used
        context = map.grid().createExpressionContext()
        self.assertAlmostEqual(context.variable('map_scale'), 1000, 5)
        self.assertEqual(context.variable('grid_number'), 0)
        self.assertEqual(context.variable('grid_axis'), 'x')
        self.assertEqual(context.variable('item_uuid'), map.uuid())

    def testDataDefinedEnabled(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(True)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        format = QgsTextFormat.fromQFont(getTestFont('Bold'))
        format.setColor(QColor(255, 0, 0))
        format.setOpacity(150 / 255)
        map.grid().setAnnotationTextFormat(format)
        map.grid().setAnnotationPrecision(0)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Left)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Top)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Bottom)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Bottom)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridEnabled, QgsProperty.fromValue(True))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_grid', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridEnabled, QgsProperty.fromValue(False))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_disabled', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedIntervalOffset(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridIntervalX, QgsProperty.fromValue(1500))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridIntervalY, QgsProperty.fromValue(2500))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridOffsetX, QgsProperty.fromValue(500))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridOffsetY, QgsProperty.fromValue(250))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_intervaloffset', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        self.report += checker.report()
        myTestResult, myMessage = checker.testLayout()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedFrameSize(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        map.grid().setFrameWidth(10)
        map.grid().setFramePenSize(1)
        map.grid().setGridLineWidth(0.5)
        map.grid().setFramePenColor(QColor(0, 0, 0))
        map.grid().setFrameFillColor1(QColor(0, 0, 0))
        map.grid().setFrameFillColor2(QColor(255, 255, 255))
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameSize, QgsProperty.fromValue(20))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameMargin, QgsProperty.fromValue(10))
        map.grid().refresh()

        checker = QgsLayoutChecker(''
                                   'composermap_datadefined_framesizemargin', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedCrossSize(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setStyle(QgsLayoutItemMapGrid.Cross)
        map.grid().setCrossLength(2.0)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridCrossSize, QgsProperty.fromValue(4))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_crosssize', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        self.report += checker.report()
        myTestResult, myMessage = checker.testLayout()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedFrameThickness(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(False)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.Zebra)
        map.grid().setFrameWidth(10)
        map.grid().setFramePenSize(1)
        map.grid().setGridLineWidth(0.5)
        map.grid().setFramePenColor(QColor(0, 0, 0))
        map.grid().setFrameFillColor1(QColor(0, 0, 0))
        map.grid().setFrameFillColor2(QColor(255, 255, 255))
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameLineThickness, QgsProperty.fromValue(4))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_framethickness', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedAnnotationDistance(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(2000)
        map.grid().setIntervalY(2000)
        map.grid().setAnnotationEnabled(True)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)

        format = QgsTextFormat.fromQFont(getTestFont('Bold', 20))
        format.setColor(QColor(255, 0, 0))
        format.setOpacity(150 / 255)
        map.grid().setAnnotationTextFormat(format)

        map.grid().setAnnotationPrecision(0)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Left)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Top)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Bottom)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Bottom)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridLabelDistance, QgsProperty.fromValue(10))
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_annotationdistance', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testDataDefinedTicksAndAnnotationDisplay(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(40, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(0.5, -5.5, 10.5, 0.5)
        map.setExtent(myRectangle)
        map.setMapRotation(45)
        map.grid().setEnabled(True)
        map.grid().setIntervalX(1)
        map.grid().setIntervalY(1)
        map.grid().setAnnotationEnabled(True)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)
        map.grid().setFrameStyle(QgsLayoutItemMapGrid.ExteriorTicks)
        map.grid().setFrameWidth(4)
        map.grid().setFramePenSize(1)
        map.grid().setFramePenColor(QColor(0, 0, 255))
        map.grid().setAnnotationFrameDistance(5)

        format = QgsTextFormat.fromQFont(getTestFont('Bold', 20))
        format.setColor(QColor(255, 0, 0))
        format.setOpacity(150 / 255)
        map.grid().setAnnotationTextFormat(format)
        map.grid().setAnnotationPrecision(0)

        map.grid().setRotatedTicksEnabled(True)
        map.grid().setRotatedAnnotationsEnabled(True)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.OnTick)

        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridAnnotationDisplayLeft, QgsProperty.fromValue("x_only"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridAnnotationDisplayRight, QgsProperty.fromValue("Y_ONLY"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridAnnotationDisplayTop, QgsProperty.fromValue("disabled"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridAnnotationDisplayBottom, QgsProperty.fromValue("ALL"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameDivisionsLeft, QgsProperty.fromValue("X_ONLY"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameDivisionsRight, QgsProperty.fromValue("y_only"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameDivisionsTop, QgsProperty.fromValue("DISABLED"))
        map.grid().dataDefinedProperties().setProperty(QgsLayoutObject.MapGridFrameDivisionsBottom, QgsProperty.fromValue("all"))

        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_datadefined_ticksandannotationdisplay', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testDynamicInterval(self):
        layout = QgsLayout(QgsProject.instance())
        layout.initializeDefaults()
        map = QgsLayoutItemMap(layout)
        map.attemptSetSceneRect(QRectF(20, 20, 200, 100))
        map.setFrameEnabled(True)
        map.setBackgroundColor(QColor(150, 100, 100))
        layout.addLayoutItem(map)
        myRectangle = QgsRectangle(781662.375, 3339523.125,
                                   793062.375, 3345223.125)
        map.setExtent(myRectangle)
        map.grid().setEnabled(True)
        map.grid().setUnits(QgsLayoutItemMapGrid.DynamicPageSizeBased)
        map.grid().setMinimumIntervalWidth(50)
        map.grid().setMaximumIntervalWidth(100)
        map.grid().setAnnotationEnabled(True)
        map.grid().setGridLineColor(QColor(0, 255, 0))
        map.grid().setGridLineWidth(0.5)

        format = QgsTextFormat.fromQFont(getTestFont('Bold', 20))
        format.setColor(QColor(255, 0, 0))
        format.setOpacity(150 / 255)
        map.grid().setAnnotationTextFormat(format)

        map.grid().setAnnotationPrecision(0)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Left)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDisplay(QgsLayoutItemMapGrid.HideAll, QgsLayoutItemMapGrid.Top)
        map.grid().setAnnotationPosition(QgsLayoutItemMapGrid.OutsideMapFrame, QgsLayoutItemMapGrid.Bottom)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Right)
        map.grid().setAnnotationDirection(QgsLayoutItemMapGrid.Horizontal, QgsLayoutItemMapGrid.Bottom)
        map.grid().setBlendMode(QPainter.CompositionMode_Overlay)
        map.updateBoundingRect()

        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_dynamic_5_10', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

        map.setScale(map.scale() * 1.1)

        checker = QgsLayoutChecker('composermap_dynamic_5_10_2', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

        map.setScale(map.scale() * 1.8)

        checker = QgsLayoutChecker('composermap_dynamic_5_10_3', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

        map.grid().setMinimumIntervalWidth(10)
        map.grid().setMaximumIntervalWidth(40)
        map.grid().refresh()

        checker = QgsLayoutChecker('composermap_dynamic_5_10_4', layout)
        checker.setControlPathPrefix("composer_mapgrid")
        myTestResult, myMessage = checker.testLayout()
        self.report += checker.report()
        self.assertTrue(myTestResult, myMessage)

    def testCrsChanged(self):
        """
        Test that the CRS changed signal is emitted in the right circumstances
        """
        p = QgsProject()
        layout = QgsLayout(p)
        p.setCrs(QgsCoordinateReferenceSystem('EPSG:4326'))
        map = QgsLayoutItemMap(layout)

        grid = map.grid()

        spy = QSignalSpy(grid.crsChanged)
        # map grid and map have no explicit crs set, so follows project crs => signal should be emitted
        # when project crs is changed
        p.setCrs(QgsCoordinateReferenceSystem('EPSG:3111'))
        self.assertEqual(len(spy), 1)
        p.setCrs(QgsCoordinateReferenceSystem('EPSG:4326'))
        self.assertEqual(len(spy), 2)
        # set explicit crs on map item
        map.setCrs(QgsCoordinateReferenceSystem('EPSG:28356'))
        self.assertEqual(len(spy), 3)
        map.setCrs(QgsCoordinateReferenceSystem('EPSG:28356'))
        self.assertEqual(len(spy), 3)
        map.setCrs(QgsCoordinateReferenceSystem('EPSG:28355'))
        self.assertEqual(len(spy), 4)
        # should not care about project crs changes anymore..
        p.setCrs(QgsCoordinateReferenceSystem('EPSG:3111'))
        self.assertEqual(len(spy), 4)
        # set back to project crs
        map.setCrs(QgsCoordinateReferenceSystem())
        self.assertEqual(len(spy), 5)

        map.setCrs(QgsCoordinateReferenceSystem('EPSG:28355'))
        self.assertEqual(len(spy), 6)
        # data defined crs
        map.dataDefinedProperties().setProperty(QgsLayoutObject.MapCrs, QgsProperty.fromValue('EPSG:4283'))
        self.assertEqual(len(spy), 6)
        map.refresh()
        self.assertEqual(len(spy), 7)

        # explicit crs for map grid
        grid.setCrs(QgsCoordinateReferenceSystem('EPSG:3857'))
        self.assertEqual(len(spy), 8)
        grid.setCrs(QgsCoordinateReferenceSystem('EPSG:3857'))
        self.assertEqual(len(spy), 8)
        map.dataDefinedProperties().setProperty(QgsLayoutObject.MapCrs, QgsProperty.fromValue('EPSG:3111'))
        map.refresh()
        self.assertEqual(len(spy), 8)
        grid.setCrs(QgsCoordinateReferenceSystem('EPSG:3111'))
        self.assertEqual(len(spy), 9)


if __name__ == '__main__':
    unittest.main()
