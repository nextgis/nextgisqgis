# -*- coding: utf-8 -*-
"""QGIS Unit tests for QgsLabelObstacleSettings

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""
__author__ = 'Nyall Dawson'
__date__ = '2019-12-07'
__copyright__ = 'Copyright 2019, The QGIS Project'

import qgis  # NOQA

from qgis.core import (QgsProperty,
                       QgsPropertyCollection,
                       QgsPalLayerSettings,
                       QgsLabelObstacleSettings,
                       QgsExpressionContext,
                       QgsExpressionContextScope,
                       QgsGeometry)

from qgis.testing import unittest, start_app

start_app()


class TestQgsLabelObstacleSettings(unittest.TestCase):

    def test_obstacle_settings(self):
        """
        Test obstacle settings
        """
        settings = QgsLabelObstacleSettings()
        settings.setIsObstacle(True)
        self.assertTrue(settings.isObstacle())
        settings.setIsObstacle(False)
        self.assertFalse(settings.isObstacle())

        settings.setFactor(0.1)
        self.assertEqual(settings.factor(), 0.1)

        settings.setType(QgsLabelObstacleSettings.PolygonWhole)
        self.assertEqual(settings.type(), QgsLabelObstacleSettings.PolygonWhole)

        # check that compatibility code works
        pal_settings = QgsPalLayerSettings()
        pal_settings.obstacle = True
        self.assertTrue(pal_settings.obstacle)
        self.assertTrue(pal_settings.obstacleSettings().isObstacle())
        pal_settings.obstacle = False
        self.assertFalse(pal_settings.obstacle)
        self.assertFalse(pal_settings.obstacleSettings().isObstacle())

        pal_settings.obstacleFactor = 0.2
        self.assertEqual(pal_settings.obstacleFactor, 0.2)
        self.assertEqual(pal_settings.obstacleSettings().factor(), 0.2)

        pal_settings.obstacleType = QgsPalLayerSettings.PolygonWhole
        self.assertEqual(pal_settings.obstacleType, QgsPalLayerSettings.PolygonWhole)
        self.assertEqual(pal_settings.obstacleSettings().type(), QgsLabelObstacleSettings.PolygonWhole)

    def testUpdateDataDefinedProps(self):
        settings = QgsLabelObstacleSettings()
        settings.setFactor(0.1)
        self.assertEqual(settings.factor(), 0.1)

        props = QgsPropertyCollection()
        props.setProperty(QgsPalLayerSettings.ObstacleFactor, QgsProperty.fromExpression('@factor'))
        context = QgsExpressionContext()
        scope = QgsExpressionContextScope()
        scope.setVariable('factor', 9)
        context.appendScope(scope)
        settings.updateDataDefinedProperties(props, context)
        self.assertAlmostEqual(settings.factor(), 1.8, 3)

    def testObstacleGeom(self):
        settings = QgsLabelObstacleSettings()
        self.assertTrue(settings.obstacleGeometry().isNull())
        settings.setObstacleGeometry(QgsGeometry.fromWkt('LineString( 0 0, 1 1)'))
        self.assertEqual(settings.obstacleGeometry().asWkt(), 'LineString (0 0, 1 1)')


if __name__ == '__main__':
    unittest.main()
