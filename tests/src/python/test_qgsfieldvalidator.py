# -*- coding: utf-8 -*-
"""QGIS Unit tests for QgsFieldValidator.

.. note:: This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
"""
__author__ = 'Alessandro Pasotti'
__date__ = '31/01/2018'
__copyright__ = 'Copyright 2018, The QGIS Project'

import qgis  # NOQA
import tempfile
import os
import shutil

from qgis.PyQt.QtCore import QVariant, QLocale
from qgis.PyQt.QtGui import QValidator
from qgis.core import QgsVectorLayer
from qgis.gui import QgsFieldValidator
from qgis.testing import start_app, unittest
from utilities import unitTestDataPath

TEST_DATA_DIR = unitTestDataPath()

start_app()


class TestQgsFieldValidator(unittest.TestCase):

    def setUp(self):
        """Run before each test."""
        testPath = TEST_DATA_DIR + '/' + 'bug_17878.gpkg'
        # Copy it
        tempdir = tempfile.mkdtemp()
        testPathCopy = os.path.join(tempdir, 'bug_17878.gpkg')
        shutil.copy(testPath, testPathCopy)
        self.vl = QgsVectorLayer(testPathCopy + '|layername=bug_17878', "test_data", "ogr")
        assert self.vl.isValid()

    def tearDown(self):
        """Run after each test."""
        pass

    def _fld_checker(self, field):
        """
        Expected results from validate
        QValidator::Invalid 0 The string is clearly invalid.
        QValidator::Intermediate 1 The string is a plausible intermediate value.
        QValidator::Acceptable 2 The string is acceptable as a final result; i.e. it is valid.
        """
        DECIMAL_SEPARATOR = QLocale().decimalPoint()
        OTHER_SEPARATOR = ',' if DECIMAL_SEPARATOR == '.' else '.'

        validator = QgsFieldValidator(None, field, '0.0', '')

        def _test(value, expected):
            ret = validator.validate(value, 0)
            self.assertEqual(ret[0], expected, "%s != %s" % (ret[0], expected))
            if value:
                self.assertEqual(validator.validate('-' + value, 0)[0], expected, '-' + value)

        # Valid
        _test('0.1234', QValidator.Acceptable)

        # Apparently we accept comma only when locale say so
        if DECIMAL_SEPARATOR != '.':
            _test('0,1234', QValidator.Acceptable)

        # If precision is > 0, regexp validator is used (and it does not support sci notation)
        if field.precision() == 0:
            _test('12345.1234e+123', QValidator.Acceptable)
            _test('12345.1234e-123', QValidator.Acceptable)
            if DECIMAL_SEPARATOR != '.':
                _test('12345,1234e+123', QValidator.Acceptable)
                _test('12345,1234e-123', QValidator.Acceptable)
            _test('', QValidator.Acceptable)

            # Out of range
            _test('12345.1234e+823', QValidator.Intermediate)
            _test('12345.1234e-823', QValidator.Intermediate)
            if DECIMAL_SEPARATOR != '.':
                _test('12345,1234e+823', QValidator.Intermediate)
                _test('12345,1234e-823', QValidator.Intermediate)

        # Invalid
        _test('12345-1234', QValidator.Invalid)
        _test('onetwothree', QValidator.Invalid)

        int_field = self.vl.fields()[self.vl.fields().indexFromName('int_field')]
        self.assertEqual(int_field.precision(), 0)  # this is what the provider reports :(
        self.assertEqual(int_field.length(), 0)  # not set
        self.assertEqual(int_field.type(), QVariant.Int)

        validator = QgsFieldValidator(None, int_field, '0', '')

        # Valid
        _test('0', QValidator.Acceptable)
        _test('1234', QValidator.Acceptable)
        _test('', QValidator.Acceptable)

        # Invalid
        _test('12345-1234', QValidator.Invalid)
        _test('12345%s1234' % DECIMAL_SEPARATOR, QValidator.Invalid)
        _test('onetwothree', QValidator.Invalid)

    def test_doubleValidator(self):
        """Test the double with default (system) locale"""
        field = self.vl.fields()[self.vl.fields().indexFromName('double_field')]
        self.assertEqual(field.precision(), 0)  # this is what the provider reports :(
        self.assertEqual(field.length(), 0)  # not set
        self.assertEqual(field.type(), QVariant.Double)
        self._fld_checker(field)

    def test_doubleValidatorCommaLocale(self):
        """Test the double with german locale"""
        QLocale.setDefault(QLocale(QLocale.German, QLocale.Germany))
        assert QLocale().decimalPoint() == ','
        field = self.vl.fields()[self.vl.fields().indexFromName('double_field')]
        self._fld_checker(field)

    def test_doubleValidatorDotLocale(self):
        """Test the double with english locale"""
        QLocale.setDefault(QLocale(QLocale.English))
        assert QLocale().decimalPoint() == '.'
        field = self.vl.fields()[self.vl.fields().indexFromName('double_field')]
        self._fld_checker(field)

    def test_precision(self):
        """Test different precision"""
        QLocale.setDefault(QLocale(QLocale.English))
        assert QLocale().decimalPoint() == '.'
        field = self.vl.fields()[self.vl.fields().indexFromName('double_field')]
        field.setPrecision(4)
        self._fld_checker(field)


if __name__ == '__main__':
    unittest.main()
