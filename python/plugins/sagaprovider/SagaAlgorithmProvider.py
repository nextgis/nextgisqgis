# -*- coding: utf-8 -*-

"""
***************************************************************************
    SagaAlgorithmProvider.py
    ---------------------
    Date                 : August 2012
    Copyright            : (C) 2012 by Victor Olaya
    Email                : volayaf at gmail dot com
***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************
"""

__author__ = 'Victor Olaya'
__date__ = 'August 2012'
__copyright__ = '(C) 2012, Victor Olaya'

import os
from qgis.PyQt.QtGui import QIcon
from qgis.PyQt.QtCore import QCoreApplication
from qgis.core import (Qgis,
                       QgsProcessingProvider,
                       QgsProcessingUtils,
                       QgsApplication,
                       QgsMessageLog,
                       QgsRuntimeProfiler)
from processing.core.ProcessingConfig import ProcessingConfig, Setting
from processing.tools.system import isWindows, isMac

from .SagaAlgorithm import SagaAlgorithm
from .SplitRGBBands import SplitRGBBands
from . import SagaUtils

pluginPath = os.path.normpath(os.path.join(
    os.path.split(os.path.dirname(__file__))[0], os.pardir))

REQUIRED_VERSION = '2.3.'
BETA_SUPPORT_VERSION = '7.'


class SagaAlgorithmProvider(QgsProcessingProvider):

    def __init__(self):
        super().__init__()
        self.algs = []

    def load(self):
        with QgsRuntimeProfiler.profile('SAGA Provider'):
            ProcessingConfig.settingIcons[self.name()] = self.icon()
            ProcessingConfig.addSetting(Setting("SAGA",
                                                SagaUtils.SAGA_IMPORT_EXPORT_OPTIMIZATION,
                                                self.tr('Enable SAGA Import/Export optimizations'), False))
            ProcessingConfig.addSetting(Setting("SAGA",
                                                SagaUtils.SAGA_LOG_COMMANDS,
                                                self.tr('Log execution commands'), True))
            ProcessingConfig.addSetting(Setting("SAGA",
                                                SagaUtils.SAGA_LOG_CONSOLE,
                                                self.tr('Log console output'), True))
            ProcessingConfig.readSettings()
            self.refreshAlgorithms()

        return True

    def unload(self):
        ProcessingConfig.removeSetting(SagaUtils.SAGA_IMPORT_EXPORT_OPTIMIZATION)
        ProcessingConfig.removeSetting(SagaUtils.SAGA_LOG_CONSOLE)
        ProcessingConfig.removeSetting(SagaUtils.SAGA_LOG_COMMANDS)

    def canBeActivated(self):
        version = SagaUtils.getInstalledVersion(True)
        return bool(
            version is not None
            and (
                version.startswith(REQUIRED_VERSION)
                or version.startswith(BETA_SUPPORT_VERSION)
            )
        )

    def warningMessage(self):
        version = SagaUtils.getInstalledVersion(True)
        if version is not None and version.startswith(BETA_SUPPORT_VERSION):
            return self.tr('SAGA version {} is not officially supported - algorithms may encounter issues').format(version)
        return ''

    def loadAlgorithms(self):
        version = SagaUtils.getInstalledVersion(True)
        if version is None:
            QgsMessageLog.logMessage(self.tr('Problem with SAGA installation: SAGA was not found or is not correctly installed'),
                                     self.tr('Processing'), Qgis.Critical)
            return

        if not version.startswith(REQUIRED_VERSION) and not version.startswith(BETA_SUPPORT_VERSION):
            QgsMessageLog.logMessage(self.tr('Problem with SAGA installation: unsupported SAGA version (found: {}, required: {}).').format(version, REQUIRED_VERSION),
                                     self.tr('Processing'),
                                     Qgis.Critical)
            return

        self.algs = []
        folder = SagaUtils.sagaDescriptionPath()
        for descriptionFile in os.listdir(folder):
            if descriptionFile.endswith('txt'):
                try:
                    alg = SagaAlgorithm(os.path.join(folder, descriptionFile))
                    if alg.name().strip() != '':
                        self.algs.append(alg)
                    else:
                        QgsMessageLog.logMessage(self.tr('Could not open SAGA algorithm: {}'.format(descriptionFile)),
                                                 self.tr('Processing'), Qgis.Critical)
                except Exception as e:
                    QgsMessageLog.logMessage(self.tr('Could not open SAGA algorithm: {}\n{}'.format(descriptionFile, str(e))),
                                             self.tr('Processing'), Qgis.Critical)

        self.algs.append(SplitRGBBands())
        for a in self.algs:
            self.addAlgorithm(a)

    def name(self):
        return 'SAGA'

    def longName(self):
        version = SagaUtils.getInstalledVersion()
        return 'SAGA ({})'.format(version) if version is not None else 'SAGA'

    def id(self):
        return 'saga'

    def defaultVectorFileExtension(self, hasGeometry=True):
        return 'shp' if hasGeometry else 'dbf'

    def defaultRasterFileExtension(self):
        return 'sdat'

    def supportedOutputRasterLayerExtensions(self):
        return ['sdat']

    def supportedOutputVectorLayerExtensions(self):
        return ['shp', 'dbf']

    def supportedOutputTableExtensions(self):
        return ['dbf']

    def flags(self):
        # push users towards alternative algorithms instead, SAGA algorithms should only be used by experienced
        # users who understand and can workaround the frequent issues encountered here
        return QgsProcessingProvider.FlagDeemphasiseSearchResults

    def supportsNonFileBasedOutput(self):
        """
        SAGA Provider doesn't support non file based outputs
        """
        return False

    def icon(self):
        return QgsApplication.getThemeIcon("/providerSaga.svg")

    def tr(self, string, context=''):
        if context == '':
            context = 'SagaAlgorithmProvider'
        return QCoreApplication.translate(context, string)
