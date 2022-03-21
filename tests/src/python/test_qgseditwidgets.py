# -*- coding: utf-8 -*-
"""QGIS Unit tests for edit widgets.

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""
__author__ = 'Matthias Kuhn'
__date__ = '20/05/2015'
__copyright__ = 'Copyright 2015, The QGIS Project'

import qgis  # NOQA

from qgis.core import (QgsProject, QgsFeature, QgsGeometry, QgsPointXY, QgsVectorLayer, NULL, QgsField)
from qgis.gui import QgsGui

from qgis.testing import start_app, unittest
from qgis.PyQt.QtCore import Qt, QVariant
from qgis.PyQt.QtWidgets import QTextEdit, QTableWidgetItem

start_app()


class TestQgsTextEditWidget(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        QgsGui.editorWidgetRegistry().initEditors()

    def createLayerWithOnePoint(self):
        self.layer = QgsVectorLayer("Point?field=fldtxt:string&field=fldint:integer",
                                    "addfeat", "memory")
        pr = self.layer.dataProvider()
        f = QgsFeature()
        f.setAttributes(["test", 123])
        f.setGeometry(QgsGeometry.fromPointXY(QgsPointXY(100, 200)))
        self.assertTrue(pr.addFeatures([f]))
        self.assertEqual(self.layer.featureCount(), 1)
        return self.layer

    def doAttributeTest(self, idx, expected):
        reg = QgsGui.editorWidgetRegistry()
        configWdg = reg.createConfigWidget('TextEdit', self.layer, idx, None)
        config = configWdg.config()
        editwidget = reg.create('TextEdit', self.layer, idx, config, None, None)

        editwidget.setValues('value', [])
        self.assertEqual(editwidget.value(), expected[0])

        editwidget.setValues(123, [])
        self.assertEqual(editwidget.value(), expected[1])

        editwidget.setValues(None, [])
        self.assertEqual(editwidget.value(), expected[2])

        editwidget.setValues(NULL, [])
        self.assertEqual(editwidget.value(), expected[3])

        editwidget.setValues(float('nan'), [])
        self.assertEqual(editwidget.value(), expected[4])

    def test_SetValue(self):
        self.createLayerWithOnePoint()

        self.doAttributeTest(0, ['value', '123', NULL, NULL, NULL])
        self.doAttributeTest(1, [NULL, 123, NULL, NULL, NULL])

    def testStringWithMaxLen(self):
        """ tests that text edit wrappers correctly handle string fields with a maximum length """
        layer = QgsVectorLayer("none?field=fldint:integer", "layer", "memory")
        self.assertTrue(layer.isValid())
        layer.dataProvider().addAttributes([QgsField('max', QVariant.String, 'string', 10),
                                            QgsField('nomax', QVariant.String, 'string', 0)])
        layer.updateFields()
        QgsProject.instance().addMapLayer(layer)

        reg = QgsGui.editorWidgetRegistry()
        config = {'IsMultiline': 'True'}

        # first test for field without character limit
        editor = QTextEdit()
        editor.setPlainText('this_is_a_long_string')
        w = reg.create('TextEdit', layer, 2, config, editor, None)
        self.assertEqual(w.value(), 'this_is_a_long_string')

        # next test for field with character limit
        editor = QTextEdit()
        editor.setPlainText('this_is_a_long_string')
        w = reg.create('TextEdit', layer, 1, config, editor, None)

        self.assertEqual(w.value(), 'this_is_a_')

        QgsProject.instance().removeAllMapLayers()

    def test_indeterminate_state(self):
        """
        Test the indeterminate state for the wrapper
        """
        layer = QgsVectorLayer("none?field=fld:string", "layer", "memory")
        reg = QgsGui.editorWidgetRegistry()
        configWdg = reg.createConfigWidget('TextEdit', layer, 0, None)
        config = configWdg.config()
        editwidget = reg.create('TextEdit', layer, 0, config, None, None)

        editwidget.setValues('value', [])
        self.assertEqual(editwidget.value(), 'value')
        editwidget.showIndeterminateState()
        self.assertFalse(editwidget.value())
        self.assertFalse(editwidget.widget().toPlainText())


class TestQgsValueRelationWidget(unittest.TestCase):

    def test_enableDisable(self):
        reg = QgsGui.editorWidgetRegistry()
        layer = QgsVectorLayer("none?field=number:integer", "layer", "memory")
        wrapper = reg.create('ValueRelation', layer, 0, {}, None, None)

        widget = wrapper.widget()

        self.assertTrue(widget.isEnabled())
        wrapper.setEnabled(False)
        self.assertFalse(widget.isEnabled())
        wrapper.setEnabled(True)
        self.assertTrue(widget.isEnabled())

    def test_enableDisableOnTableWidget(self):
        reg = QgsGui.editorWidgetRegistry()
        layer = QgsVectorLayer("none?field=number:integer", "layer", "memory")
        wrapper = reg.create('ValueRelation', layer, 0, {'AllowMulti': 'True'}, None, None)

        widget = wrapper.widget()
        item = QTableWidgetItem('first item')
        widget.setItem(0, 0, item)

        # does not change the state the whole widget but the single items instead
        wrapper.setEnabled(False)
        # widget still true, but items false
        self.assertTrue(widget.isEnabled())
        self.assertNotEqual(widget.item(0, 0).flags(), widget.item(0, 0).flags() | Qt.ItemIsEnabled)
        wrapper.setEnabled(True)
        self.assertTrue(widget.isEnabled())
        self.assertEqual(widget.item(0, 0).flags(), widget.item(0, 0).flags() | Qt.ItemIsEnabled)


class TestQgsValueMapEditWidget(unittest.TestCase):
    VALUEMAP_NULL_TEXT = "{2839923C-8B7D-419E-B84B-CA2FE9B80EC7}"

    def test_ValueMap_set_get(self):
        layer = QgsVectorLayer("none?field=number:integer", "layer", "memory")
        self.assertTrue(layer.isValid())
        QgsProject.instance().addMapLayer(layer)
        reg = QgsGui.editorWidgetRegistry()
        configWdg = reg.createConfigWidget('ValueMap', layer, 0, None)

        config = {'map': [{'two': '2'}, {'twoandhalf': '2.5'}, {'NULL text': 'NULL'}, {'nothing': self.VALUEMAP_NULL_TEXT}]}

        # Set a configuration containing values and NULL and check if it
        # is returned intact.
        configWdg.setConfig(config)
        self.assertEqual(configWdg.config(), config)

        QgsProject.instance().removeAllMapLayers()


class TestQgsUuidWidget(unittest.TestCase):

    def test_create_uuid(self):
        layer = QgsVectorLayer("none?field=text_no_limit:text(0)&field=text_limit:text(10)", "layer", "memory")
        self.assertTrue(layer.isValid())
        QgsProject.instance().addMapLayer(layer)

        # unlimited length text field
        wrapper = QgsGui.editorWidgetRegistry().create('UuidGenerator', layer, 0, {}, None, None)
        _ = wrapper.widget()
        feature = QgsFeature(layer.fields())
        wrapper.setFeature(feature)
        val = wrapper.value()
        # we can't directly check the result, as it will be random, so just check it's general properties
        self.assertEqual(len(val), 38)
        self.assertEqual(val[0], '{')
        self.assertEqual(val[-1], '}')

        # limited length text field, value must be truncated
        wrapper = QgsGui.editorWidgetRegistry().create('UuidGenerator', layer, 1, {}, None, None)
        _ = wrapper.widget()
        feature = QgsFeature(layer.fields())
        wrapper.setFeature(feature)
        val = wrapper.value()
        # we can't directly check the result, as it will be random, so just check it's general properties
        self.assertEqual(len(val), 10)
        self.assertNotEqual(val[0], '{')
        self.assertNotEqual(val[-1], '}')
        with self.assertRaises(ValueError):
            val.index('-')

        QgsProject.instance().removeAllMapLayers()


if __name__ == "__main__":
    unittest.main()
