# -*- coding: utf-8 -*-

"""
***************************************************************************
    qgssettingsentry.py
    ---------------------
    Date                 : April 2021
    Copyright            : (C) 2021 by Damiano Lombardi
    Email                : damiano@opengis.ch
***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************
"""

from .metaenum import metaEnumFromValue
from qgis.core import QgsSettings, QgsSettingsEntryBase, QgsLogger
import qgis  # required to get base class of enums


class PyQgsSettingsEntryEnumFlag(QgsSettingsEntryBase):
    """
    class PyQgsSettingsEntryEnumFlag
    An enum settings entry.
    since QGIS 3.20
    """

    def __init__(self, key, pluginName, defaultValue, description=str()):
        """
        Constructor for PyQgsSettingsEntryEnumFlag.
        :param key: argument specifies the final part of the settings key.
        :param pluginName: argument is inserted in the key after the section.
        :param defaultValue: argument specifies the default value for the settings entry.
        :param description: argument specifies a description for the settings entry.
        """

        defaultValueStr = str()
        self.__metaEnum = metaEnumFromValue(defaultValue)
        if self.__metaEnum is None or not self.__metaEnum.isValid():
            QgsLogger.debug("Invalid metaenum. Enum/Flag probably misses Q_ENUM/Q_FLAG declaration. Settings key: '{0}'".format(self.key()))
        else:
            if self.__metaEnum.isFlag():
                defaultValueStr = self.__metaEnum.valueToKeys(defaultValue)
            else:
                defaultValueStr = self.__metaEnum.valueToKey(defaultValue)
            self.__enumFlagClass = defaultValue.__class__

        super().__init__(key, pluginName, defaultValueStr, description)

    def value(self, dynamicKeyPart=None, useDefaultValueOverride=False, defaultValueOverride=None):
        """
        Get settings value.
        :param dynamicKeyPart: argument specifies the dynamic part of the settings key.
        :param useDefaultValueOverride: argument specifies if defaultValueOverride should be used.
        :param defaultValueOverride: argument if valid is used instead of the normal default value.
        """

        defaultValue = self.defaultValue()
        if useDefaultValueOverride:
            defaultValue = defaultValueOverride

        if self.__metaEnum.isFlag():
            return QgsSettings().flagValue(self.key(dynamicKeyPart),
                                           defaultValue,
                                           self.section())
        else:
            return QgsSettings().enumValue(self.key(dynamicKeyPart),
                                           defaultValue,
                                           self.section())

    def defaultValue(self):
        """
        Get settings default value.
        """

        if self.__metaEnum is None or not self.__metaEnum.isValid():
            QgsLogger.debug("Invalid metaenum. Enum/Flag probably misses Q_ENUM/Q_FLAG declaration. Settings key: '{0}'".format(self.key()))
            return -1

        defaultValueString = self.defaultValueAsVariant()
        if self.__metaEnum.isFlag():
            (defaultValue, ok) = self.__metaEnum.keysToValue(defaultValueString)
        else:
            (defaultValue, ok) = self.__metaEnum.keyToValue(defaultValueString)
        if not ok:
            QgsLogger.debug("Invalid enum/flag key/s '{0}'.".format(self.defaultValueAsVariant()))
            return -1

        # cast to the enum class
        defaultValue = self.__enumFlagClass(defaultValue)
        return defaultValue

    def setValue(self, value, dynamicKeyPart=None):
        """
        Set settings value.
        :param dynamicKeyPart: argument specifies the dynamic part of the settings key.
        """

        if self.__metaEnum is None or not self.__metaEnum.isValid():
            QgsLogger.debug("Invalid metaenum. Enum/Flag probably misses Q_ENUM/Q_FLAG declaration. Settings key: '{0}'".format(self.key()))
            return False

        enumFlagKey = str()
        if self.__metaEnum.isFlag():
            enumFlagKey = self.__metaEnum.valueToKeys(value)
        else:
            enumFlagKey = self.__metaEnum.valueToKey(value)
        if not enumFlagKey:
            QgsLogger.debug("Invalid enum/flag value '{0}'.".format(value))
            return False

        return super().setVariantValue(enumFlagKey, dynamicKeyPart)

    def settingsType(self):
        """
        Get the settings entry type.
        """

        return self.SettingsType.EnumFlag
