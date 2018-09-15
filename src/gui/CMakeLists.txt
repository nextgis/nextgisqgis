################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2018, NextGIS <info@nextgis.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
################################################################################

set(QGIS_GUI_SRCS
  raster/qgsmultibandcolorrendererwidget.cpp
  raster/qgspalettedrendererwidget.cpp
  raster/qgsrasterhistogramwidget.cpp
  raster/qgsrasterminmaxwidget.cpp
  raster/qgsrasterrendererwidget.cpp
  raster/qgssinglebandgrayrendererwidget.cpp
  raster/qgssinglebandpseudocolorrendererwidget.cpp
  raster/qgsrendererrasterpropertieswidget.cpp
  raster/qgsrastertransparencywidget.cpp
  raster/qgshillshaderendererwidget.cpp
  raster/qwt5_histogram_item.cpp

  symbology-ng/qgs25drendererwidget.cpp
  symbology-ng/characterwidget.cpp
  symbology-ng/qgsarrowsymbollayerwidget.cpp
  symbology-ng/qgsbrushstylecombobox.cpp
  symbology-ng/qgscategorizedsymbolrendererv2widget.cpp
  symbology-ng/qgscolorrampcombobox.cpp
  symbology-ng/qgscptcitycolorrampv2dialog.cpp
  symbology-ng/qgsdashspacedialog.cpp
  symbology-ng/qgsdatadefinedsymboldialog.cpp
  symbology-ng/qgsellipsesymbollayerv2widget.cpp
  symbology-ng/qgsgraduatedhistogramwidget.cpp
  symbology-ng/qgsgraduatedsymbolrendererv2widget.cpp
  symbology-ng/qgsheatmaprendererwidget.cpp
  symbology-ng/qgsinvertedpolygonrendererwidget.cpp
  symbology-ng/qgslayerpropertieswidget.cpp
  symbology-ng/qgsnullsymbolrendererwidget.cpp
  symbology-ng/qgspenstylecombobox.cpp
  symbology-ng/qgspointdisplacementrendererwidget.cpp
  symbology-ng/qgsrendererv2propertiesdialog.cpp
  symbology-ng/qgsrendererv2widget.cpp
  symbology-ng/qgsrulebasedrendererv2widget.cpp
  symbology-ng/qgssinglesymbolrendererv2widget.cpp
  symbology-ng/qgssizescalewidget.cpp
  symbology-ng/qgssmartgroupeditordialog.cpp
  symbology-ng/qgsstylev2exportimportdialog.cpp
  symbology-ng/qgsstylev2groupselectiondialog.cpp
  symbology-ng/qgsstylev2managerdialog.cpp
  symbology-ng/qgssvgselectorwidget.cpp
  symbology-ng/qgssymbollayerv2widget.cpp
  symbology-ng/qgssymbollevelsv2dialog.cpp
  symbology-ng/qgssymbolslistwidget.cpp
  symbology-ng/qgssymbolv2selectordialog.cpp
  symbology-ng/qgsvectorcolorbrewercolorrampv2dialog.cpp
  symbology-ng/qgsvectorfieldsymbollayerwidget.cpp
  symbology-ng/qgsvectorgradientcolorrampv2dialog.cpp
  symbology-ng/qgsvectorrandomcolorrampv2dialog.cpp

  effects/qgseffectdrawmodecombobox.cpp
  effects/qgseffectstackpropertieswidget.cpp
  effects/qgspainteffectpropertieswidget.cpp
  effects/qgspainteffectwidget.cpp

  attributetable/qgsattributetabledelegate.cpp
  attributetable/qgsattributetablefiltermodel.cpp
  attributetable/qgsattributetablemodel.cpp
  attributetable/qgsattributetableview.cpp
  attributetable/qgsdualview.cpp
  attributetable/qgsfeaturelistmodel.cpp
  attributetable/qgsfeaturelistview.cpp
  attributetable/qgsfeaturelistviewdelegate.cpp
  attributetable/qgsfeatureselectionmodel.cpp
  attributetable/qgsfieldconditionalformatwidget.cpp
  attributetable/qgsgenericfeatureselectionmanager.cpp
  attributetable/qgsvectorlayerselectionmanager.cpp
  attributetable/qgsorganizetablecolumnsdialog.cpp

  auth/qgsauthauthoritieseditor.cpp
  auth/qgsauthcertificateinfo.cpp
  auth/qgsauthcertificatemanager.cpp
  auth/qgsauthcerttrustpolicycombobox.cpp
  auth/qgsauthconfigedit.cpp
  auth/qgsauthconfigeditor.cpp
  auth/qgsauthconfigidedit.cpp
  auth/qgsauthconfigselect.cpp
  auth/qgsautheditorwidgets.cpp
  auth/qgsauthguiutils.cpp
  auth/qgsauthidentitieseditor.cpp
  auth/qgsauthimportcertdialog.cpp
  auth/qgsauthimportidentitydialog.cpp
  auth/qgsauthmasterpassresetdialog.cpp
  auth/qgsauthserverseditor.cpp
  auth/qgsauthsslconfigwidget.cpp
  auth/qgsauthsslerrorsdialog.cpp
  auth/qgsauthsslimportdialog.cpp
  auth/qgsauthtrustedcasdialog.cpp

  editorwidgets/core/qgseditorconfigwidget.cpp
  editorwidgets/core/qgseditorwidgetfactory.cpp
  editorwidgets/core/qgseditorwidgetregistry.cpp
  editorwidgets/core/qgseditorwidgetwrapper.cpp
  editorwidgets/core/qgssearchwidgetwrapper.cpp
  editorwidgets/core/qgswidgetwrapper.cpp

  editorwidgets/qgscheckboxconfigdlg.cpp
  editorwidgets/qgscheckboxsearchwidgetwrapper.cpp
  editorwidgets/qgscheckboxwidgetwrapper.cpp
  editorwidgets/qgscheckboxwidgetfactory.cpp
  editorwidgets/qgsclassificationwidgetwrapper.cpp
  editorwidgets/qgsclassificationwidgetwrapperfactory.cpp
  editorwidgets/qgscolorwidgetwrapper.cpp
  editorwidgets/qgscolorwidgetfactory.cpp
  editorwidgets/qgsdatetimeedit.cpp
  editorwidgets/qgsdatetimeeditfactory.cpp
  editorwidgets/qgsdatetimeeditconfig.cpp
  editorwidgets/qgsdatetimeeditwrapper.cpp
  editorwidgets/qgsdatetimesearchwidgetwrapper.cpp
  editorwidgets/qgsdefaultsearchwidgetwrapper.cpp
  editorwidgets/qgsdoublespinbox.cpp
  editorwidgets/qgsdummyconfigdlg.cpp
  editorwidgets/qgsenumerationwidgetwrapper.cpp
  editorwidgets/qgsenumerationwidgetfactory.cpp
  editorwidgets/qgsexternalresourceconfigdlg.cpp
  editorwidgets/qgsexternalresourcewidgetwrapper.cpp
  editorwidgets/qgsexternalresourcewidgetfactory.cpp
  editorwidgets/qgsfilenamewidgetwrapper.cpp
  editorwidgets/qgsfilenamewidgetfactory.cpp
  editorwidgets/qgshiddenwidgetwrapper.cpp
  editorwidgets/qgshiddenwidgetfactory.cpp
  editorwidgets/qgsmultiedittoolbutton.cpp
  editorwidgets/qgsphotoconfigdlg.cpp
  editorwidgets/qgsphotowidgetwrapper.cpp
  editorwidgets/qgsphotowidgetfactory.cpp
  editorwidgets/qgsrangeconfigdlg.cpp
  editorwidgets/qgsrangewidgetwrapper.cpp
  editorwidgets/qgsrangewidgetfactory.cpp
  editorwidgets/qgssearchwidgettoolbutton.cpp
  editorwidgets/qgsspinbox.cpp
  editorwidgets/qgsrelationwidgetwrapper.cpp
  editorwidgets/qgsrelationreferenceconfigdlg.cpp
  editorwidgets/qgsrelationreferencefactory.cpp
  editorwidgets/qgsrelationreferencesearchwidgetwrapper.cpp
  editorwidgets/qgsrelationreferencewidget.cpp
  editorwidgets/qgsrelationreferencewidgetwrapper.cpp
  editorwidgets/qgstexteditconfigdlg.cpp
  editorwidgets/qgstexteditsearchwidgetwrapper.cpp
  editorwidgets/qgstexteditwrapper.cpp
  editorwidgets/qgstexteditwidgetfactory.cpp
  editorwidgets/qgsuniquevaluesconfigdlg.cpp
  editorwidgets/qgsuniquevaluewidgetwrapper.cpp
  editorwidgets/qgsuniquevaluewidgetfactory.cpp
  editorwidgets/qgsuuidwidgetwrapper.cpp
  editorwidgets/qgsuuidwidgetfactory.cpp
  editorwidgets/qgsvaluemapconfigdlg.cpp
  editorwidgets/qgsvaluemapwidgetwrapper.cpp
  editorwidgets/qgsvaluemapwidgetfactory.cpp
  editorwidgets/qgsvaluemapsearchwidgetwrapper.cpp
  editorwidgets/qgsvaluerelationconfigdlg.cpp
  editorwidgets/qgsvaluerelationwidgetwrapper.cpp
  editorwidgets/qgsvaluerelationsearchwidgetwrapper.cpp
  editorwidgets/qgsvaluerelationwidgetfactory.cpp

  layertree/qgscustomlayerorderwidget.cpp
  layertree/qgslayertreeembeddedconfigwidget.cpp
  layertree/qgslayertreeembeddedwidgetregistry.cpp
  layertree/qgslayertreeembeddedwidgetsimpl.cpp
  layertree/qgslayertreemapcanvasbridge.cpp
  layertree/qgslayertreeview.cpp
  layertree/qgslayertreeviewdefaultactions.cpp

  qgisgui.cpp
  qgisinterface.cpp
  qgsactionmenu.cpp
  qgsadvanceddigitizingcanvasitem.cpp
  qgsadvanceddigitizingdockwidget.cpp
  qgsannotationitem.cpp
  qgsattributedialog.cpp
  qgsattributeeditor.cpp
  qgsattributeform.cpp
  qgsattributeformeditorwidget.cpp
  qgsattributeforminterface.cpp
  qgsattributeformlegacyinterface.cpp
  qgsattributetypeloaddialog.cpp
  qgsblendmodecombobox.cpp
  qgsbrowsertreeview.cpp
  qgsbusyindicatordialog.cpp
  qgscharacterselectdialog.cpp
  qgscodeeditor.cpp
  qgscodeeditorcss.cpp
  qgscodeeditorhtml.cpp
  qgscodeeditorpython.cpp
  qgscodeeditorsql.cpp
  qgscollapsiblegroupbox.cpp
  qgscolorbutton.cpp
  qgscolorbuttonv2.cpp
  qgscolordialog.cpp
  qgscolorschemelist.cpp
  qgscolorswatchgrid.cpp
  qgscolorwidgets.cpp
  qgscomposeritemcombobox.cpp
  qgscomposerruler.cpp
  qgscomposerview.cpp
  qgscompoundcolorwidget.cpp
  qgsconfigureshortcutsdialog.cpp
  qgscredentialdialog.cpp
  qgscursors.cpp
  qgsdatadefinedbutton.cpp
  qgsdatumtransformdialog.cpp
  qgsdetaileditemdata.cpp
  qgsdetaileditemdelegate.cpp
  qgsdetaileditemwidget.cpp
  qgsdial.cpp
  qgsdialog.cpp
  qgsdockwidget.cpp
  qgsencodingfiledialog.cpp
  qgserrordialog.cpp
  qgsexpressionbuilderdialog.cpp
  qgsexpressionbuilderwidget.cpp
  qgsexpressionhighlighter.cpp
  qgsexpressionlineedit.cpp
  qgsexpressionselectiondialog.cpp
  qgsextentgroupbox.cpp
  qgsexternalresourcewidget.cpp
  qgsfeatureselectiondlg.cpp
  qgsfieldcombobox.cpp
  qgsfieldexpressionwidget.cpp
  qgsfieldmodel.cpp
  qgsfieldproxymodel.cpp
  qgsfieldvalidator.cpp
  qgsfiledropedit.cpp
  qgsfilewidget.cpp
  qgsfilterlineedit.cpp
  qgsfocuswatcher.cpp
  qgsformannotationitem.cpp
  qgsgenericprojectionselector.cpp
  qgsgeometryrubberband.cpp
  qgsgradientstopeditor.cpp
  qgsgroupwmsdatadialog.cpp
  qgshighlight.cpp
  qgshistogramwidget.cpp
  qgshtmlannotationitem.cpp
  qgsidentifymenu.cpp
  qgslegendfilterbutton.cpp
  qgslegendinterface.cpp
  qgsludialog.cpp
  qgsmanageconnectionsdialog.cpp
  qgsmapcanvas.cpp
  qgsmapcanvasitem.cpp
  qgsmapcanvasmap.cpp
  qgsmapcanvassnapper.cpp
  qgsmapcanvassnappingutils.cpp
  qgsmapcanvastracer.cpp
  qgsmaplayeractionregistry.cpp
  qgsmaplayercombobox.cpp
  qgsmaplayermodel.cpp
  qgsmaplayerconfigwidgetfactory.cpp
  qgsmaplayerproxymodel.cpp
  qgsmaplayerstylemanagerwidget.cpp
  qgsmapmouseevent.cpp
  qgsmapoverviewcanvas.cpp
  qgsmaptip.cpp
  qgsmaptool.cpp
  qgsmaptooladvanceddigitizing.cpp
  qgsmaptoolcapture.cpp
  qgsmaptooledit.cpp
  qgsmaptoolemitpoint.cpp
  qgsmaptoolidentify.cpp
  qgsmaptoolidentifyfeature.cpp
  qgsmaptoolpan.cpp
  qgsmaptoolzoom.cpp
  qgsmaplayerconfigwidget.cpp
  qgsmessagebar.cpp
  qgsmessagebaritem.cpp
  qgsmessagelogviewer.cpp
  qgsmessageviewer.cpp
  qgsnewhttpconnection.cpp
  qgsnewmemorylayerdialog.cpp
  qgsnewnamedialog.cpp
  qgsnewvectorlayerdialog.cpp
  qgsnewgeopackagelayerdialog.cpp
  qgsnumericsortlistviewitem.cpp
  qgsoptionsdialogbase.cpp
  qgsorderbydialog.cpp
  qgsowssourceselect.cpp
  qgssourceselectdialog.cpp
  qgspanelwidget.cpp
  qgspanelwidgetstack.cpp
  qgspixmaplabel.cpp
  qgspluginmanagerinterface.cpp
  qgsprevieweffect.cpp
  qgsprojectbadlayerguihandler.cpp
  qgsprojectionselectionwidget.cpp
  qgsprojectionselector.cpp
  qgsquerybuilder.cpp
  qgsrasterformatsaveoptionswidget.cpp
  qgsrasterlayersaveasdialog.cpp
  qgsrasterpyramidsoptionswidget.cpp
  qgsrelationeditorwidget.cpp
  qgsrubberband.cpp
  qgsscalecombobox.cpp
  qgsscalerangewidget.cpp
  qgsscalevisibilitydialog.cpp
  qgsscalewidget.cpp
  qgssearchquerybuilder.cpp
  qgsshortcutsmanager.cpp
  qgsslider.cpp
  qgssublayersdialog.cpp
  qgssqlcomposerdialog.cpp
  qgssvgannotationitem.cpp
  qgstabwidget.cpp
  qgstablewidgetitem.cpp
  qgstextannotationitem.cpp
  qgstrackedvectorlayertools.cpp
  qgsunitselectionwidget.cpp
  qgsuserinputdockwidget.cpp
  qgsvariableeditorwidget.cpp
  qgsvertexmarker.cpp
  qgsfiledownloader.cpp
)

if(WITH_QTWEBKIT)
    set(QGIS_GUI_SRCS ${QGIS_GUI_SRCS}
        editorwidgets/qgswebviewconfigdlg.cpp
        editorwidgets/qgswebviewwidgetfactory.cpp
        editorwidgets/qgswebviewwidgetwrapper.cpp
    )
endif()

set(QGIS_GUI_MOC_HDRS
  qgisinterface.h
  qgsactionmenu.h
  qgsadvanceddigitizingdockwidget.h
  qgsattributedialog.h
  qgsattributeeditor.h
  qgsattributeform.h
  qgsattributeformeditorwidget.h
  qgsattributetypeloaddialog.h
  qgsblendmodecombobox.h
  qgsbrowsertreeview.h
  qgsbusyindicatordialog.h
  qgscharacterselectdialog.h
  qgscodeeditor.h
  qgscodeeditorcss.h
  qgscodeeditorhtml.h
  qgscodeeditorpython.h
  qgscodeeditorsql.h
  qgscollapsiblegroupbox.h
  qgscolorbutton.h
  qgscolorbuttonv2.h
  qgscolordialog.h
  qgscolorschemelist.h
  qgscolorswatchgrid.h
  qgscolorwidgets.h
  qgscomposeritemcombobox.h
  qgscomposerruler.h
  qgscomposerview.h
  qgscompoundcolorwidget.h
  qgsconfigureshortcutsdialog.h
  qgscredentialdialog.h
  qgsdatadefinedbutton.h
  qgsdatumtransformdialog.h
  qgsdetaileditemdelegate.h
  qgsdetaileditemwidget.h
  qgsdial.h
  qgsdialog.h
  qgsdockwidget.h
  qgsencodingfiledialog.h
  qgserrordialog.h
  qgsexpressionbuilderdialog.h
  qgsexpressionbuilderwidget.h
  qgsexpressionhighlighter.h
  qgsexpressionlineedit.h
  qgsexpressionselectiondialog.h
  qgsextentgroupbox.h
  qgsexternalresourcewidget.h
  qgsfeatureselectiondlg.h
  qgsfieldcombobox.h
  qgsfieldexpressionwidget.h
  qgsfieldmodel.h
  qgsfieldproxymodel.h
  qgsfieldvalidator.h
  qgsfiledropedit.h
  qgsfilewidget.h
  qgsfilterlineedit.h
  qgsfocuswatcher.h
  qgsformannotationitem.h
  qgsgenericprojectionselector.h
  qgsgradientstopeditor.h
  qgsgroupwmsdatadialog.h
  qgshistogramwidget.h
  qgshtmlannotationitem.h
  qgsidentifymenu.h
  qgslegendfilterbutton.h
  qgslegendinterface.h
  qgslonglongvalidator.h
  qgsludialog.h
  qgsmanageconnectionsdialog.h
  qgsmapcanvas.h
  qgsmapcanvassnappingutils.h
  qgsmapcanvastracer.h
  qgsmaplayeractionregistry.h
  qgsmaplayercombobox.h
  qgsmaplayermodel.h
  qgsmaplayerproxymodel.h
  qgsmaplayerstylemanagerwidget.h
  qgsmapoverviewcanvas.h
  qgsmaptip.h
  qgsmaptool.h
  qgsmaptooladvanceddigitizing.h
  qgsmaptoolcapture.h
  qgsmaptooledit.h
  qgsmaptoolemitpoint.h
  qgsmaptoolidentify.h
  qgsmaptoolidentifyfeature.h
  qgsmaptoolpan.h
  qgsmaptoolzoom.h
  qgsmaplayerconfigwidget.h
  qgsmessagebar.h
  qgsmessagebaritem.h
  qgsmessagelogviewer.h
  qgsmessageviewer.h
  qgsnewhttpconnection.h
  qgsnewmemorylayerdialog.h
  qgsnewnamedialog.h
  qgsnewvectorlayerdialog.h
  qgsnewgeopackagelayerdialog.h
  qgsoptionsdialogbase.h
  qgsorderbydialog.h
  qgsowssourceselect.h
  qgssourceselectdialog.h
  qgspanelwidget.h
  qgspanelwidgetstack.h
  qgspixmaplabel.h
  qgspluginmanagerinterface.h
  qgsprevieweffect.h
  qgsprojectbadlayerguihandler.h
  qgsprojectionselectionwidget.h
  qgsprojectionselector.h
  qgsquerybuilder.h
  qgsrasterformatsaveoptionswidget.h
  qgsrasterlayersaveasdialog.h
  qgsrasterpyramidsoptionswidget.h
  qgsrelationeditorwidget.h
  qgsscalecombobox.h
  qgsscalerangewidget.h
  qgsscalevisibilitydialog.h
  qgsscalewidget.h
  qgssearchquerybuilder.h
  qgsshortcutsmanager.h
  qgsslider.h
  qgssqlcomposerdialog.h
  qgssublayersdialog.h
  qgstabwidget.h
  qgsunitselectionwidget.h
  qgsuserinputdockwidget.h
  qgsvariableeditorwidget.h
  qgsfiledownloader.h

  raster/qgsmultibandcolorrendererwidget.h
  raster/qgspalettedrendererwidget.h
  raster/qgsrasterhistogramwidget.h
  raster/qgsrasterminmaxwidget.h
  raster/qgsrasterrendererwidget.h
  raster/qgssinglebandgrayrendererwidget.h
  raster/qgssinglebandpseudocolorrendererwidget.h
  raster/qgsrendererrasterpropertieswidget.h
  raster/qgsrastertransparencywidget.h
  raster/qgshillshaderendererwidget.h


  symbology-ng/qgs25drendererwidget.h
  symbology-ng/characterwidget.h
  symbology-ng/qgsarrowsymbollayerwidget.h
  symbology-ng/qgsbrushstylecombobox.h
  symbology-ng/qgscategorizedsymbolrendererv2widget.h
  symbology-ng/qgscolorrampcombobox.h
  symbology-ng/qgscptcitycolorrampv2dialog.h
  symbology-ng/qgsdashspacedialog.h
  symbology-ng/qgsdatadefinedsymboldialog.h
  symbology-ng/qgsellipsesymbollayerv2widget.h
  symbology-ng/qgsgraduatedhistogramwidget.h
  symbology-ng/qgsgraduatedsymbolrendererv2widget.h
  symbology-ng/qgsheatmaprendererwidget.h
  symbology-ng/qgsinvertedpolygonrendererwidget.h
  symbology-ng/qgslayerpropertieswidget.h
  symbology-ng/qgsnullsymbolrendererwidget.h
  symbology-ng/qgspenstylecombobox.h
  symbology-ng/qgspointdisplacementrendererwidget.h
  symbology-ng/qgsrendererv2propertiesdialog.h
  symbology-ng/qgsrendererv2widget.h
  symbology-ng/qgsrulebasedrendererv2widget.h
  symbology-ng/qgssinglesymbolrendererv2widget.h
  symbology-ng/qgssizescalewidget.h
  symbology-ng/qgssmartgroupeditordialog.h
  symbology-ng/qgsstylev2exportimportdialog.h
  symbology-ng/qgsstylev2groupselectiondialog.h
  symbology-ng/qgsstylev2managerdialog.h
  symbology-ng/qgssvgselectorwidget.h
  symbology-ng/qgssymbollayerv2widget.h
  symbology-ng/qgssymbollevelsv2dialog.h
  symbology-ng/qgssymbolslistwidget.h
  symbology-ng/qgssymbolv2selectordialog.h
  symbology-ng/qgsvectorcolorbrewercolorrampv2dialog.h
  symbology-ng/qgsvectorfieldsymbollayerwidget.h
  symbology-ng/qgsvectorgradientcolorrampv2dialog.h
  symbology-ng/qgsvectorrandomcolorrampv2dialog.h

  attributetable/qgsattributetabledelegate.h
  attributetable/qgsattributetablefiltermodel.h
  attributetable/qgsattributetablemodel.h
  attributetable/qgsattributetableview.h
  attributetable/qgsdualview.h
  attributetable/qgsfeaturelistmodel.h
  attributetable/qgsfeaturelistview.h
  attributetable/qgsfeaturelistviewdelegate.h
  attributetable/qgsfeatureselectionmodel.h
  attributetable/qgsfieldconditionalformatwidget.h
  attributetable/qgsgenericfeatureselectionmanager.h
  attributetable/qgsifeatureselectionmanager.h
  attributetable/qgsvectorlayerselectionmanager.h
  attributetable/qgsorganizetablecolumnsdialog.h

  auth/qgsauthauthoritieseditor.h
  auth/qgsauthcertificateinfo.h
  auth/qgsauthcertificatemanager.h
  auth/qgsauthcerttrustpolicycombobox.h
  auth/qgsauthconfigedit.h
  auth/qgsauthconfigeditor.h
  auth/qgsauthconfigidedit.h
  auth/qgsauthconfigselect.h
  auth/qgsautheditorwidgets.h
  auth/qgsauthidentitieseditor.h
  auth/qgsauthimportcertdialog.h
  auth/qgsauthimportidentitydialog.h
  auth/qgsauthmasterpassresetdialog.h
  auth/qgsauthmethodedit.h
  auth/qgsauthserverseditor.h
  auth/qgsauthsslconfigwidget.h
  auth/qgsauthsslerrorsdialog.h
  auth/qgsauthsslimportdialog.h
  auth/qgsauthtrustedcasdialog.h

  effects/qgseffectdrawmodecombobox.h
  effects/qgseffectstackpropertieswidget.h
  effects/qgspainteffectpropertieswidget.h
  effects/qgspainteffectwidget.h

  editorwidgets/core/qgseditorconfigwidget.h
  editorwidgets/core/qgseditorwidgetregistry.h
  editorwidgets/core/qgseditorwidgetwrapper.h
  editorwidgets/core/qgssearchwidgetwrapper.h
  editorwidgets/core/qgswidgetwrapper.h

  editorwidgets/qgscheckboxconfigdlg.h
  editorwidgets/qgscheckboxsearchwidgetwrapper.h
  editorwidgets/qgscheckboxwidgetwrapper.h
  editorwidgets/qgsclassificationwidgetwrapper.h
  editorwidgets/qgscolorwidgetwrapper.h
  editorwidgets/qgsdatetimeedit.h
  editorwidgets/qgsdatetimeeditconfig.h
  editorwidgets/qgsdatetimesearchwidgetwrapper.h
  editorwidgets/qgsdatetimeeditwrapper.h
  editorwidgets/qgsdefaultsearchwidgetwrapper.h
  editorwidgets/qgsdoublespinbox.h
  editorwidgets/qgsdummyconfigdlg.h
  editorwidgets/qgsenumerationwidgetwrapper.h
  editorwidgets/qgsexternalresourceconfigdlg.h
  editorwidgets/qgsexternalresourcewidgetwrapper.h
  editorwidgets/qgsfilenamewidgetwrapper.h
  editorwidgets/qgshiddenwidgetwrapper.h
  editorwidgets/qgsmultiedittoolbutton.h
  editorwidgets/qgsphotoconfigdlg.h
  editorwidgets/qgsphotowidgetwrapper.h
  editorwidgets/qgsrangeconfigdlg.h
  editorwidgets/qgsrangewidgetwrapper.h
  editorwidgets/qgsrelationreferenceconfigdlg.h
  editorwidgets/qgsrelationreferencesearchwidgetwrapper.h
  editorwidgets/qgsrelationreferencewidget.h
  editorwidgets/qgsrelationreferencewidgetwrapper.h
  editorwidgets/qgsrelationwidgetwrapper.h
  editorwidgets/qgssearchwidgettoolbutton.h
  editorwidgets/qgsspinbox.h
  editorwidgets/qgstexteditconfigdlg.h
  editorwidgets/qgstexteditwrapper.h
  editorwidgets/qgstexteditsearchwidgetwrapper.h
  editorwidgets/qgsuniquevaluesconfigdlg.h
  editorwidgets/qgsuniquevaluewidgetwrapper.h
  editorwidgets/qgsuuidwidgetwrapper.h
  editorwidgets/qgsvaluemapconfigdlg.h
  editorwidgets/qgsvaluemapsearchwidgetwrapper.h
  editorwidgets/qgsvaluemapwidgetwrapper.h
  editorwidgets/qgsvaluerelationconfigdlg.h
  editorwidgets/qgsvaluerelationsearchwidgetwrapper.h
  editorwidgets/qgsvaluerelationwidgetwrapper.h

  layertree/qgscustomlayerorderwidget.h
  layertree/qgslayertreeembeddedconfigwidget.h
  layertree/qgslayertreeembeddedwidgetsimpl.h
  layertree/qgslayertreemapcanvasbridge.h
  layertree/qgslayertreeview.h
  layertree/qgslayertreeviewdefaultactions.h
)

if(WITH_QTWEBKIT)
    set(QGIS_GUI_MOC_HDRS ${QGIS_GUI_MOC_HDRS}
        editorwidgets/qgswebviewconfigdlg.h
        editorwidgets/qgswebviewwidgetwrapper.h
    )
endif()

if(NOT PREPARE_ONLY)
    QT4_WRAP_CPP(QGIS_GUI_MOC_SRCS ${QGIS_GUI_MOC_HDRS})
endif()

if(MSVC)
  set_source_files_properties(${QGIS_GUI_MOC_SRCS} PROPERTIES COMPILE_FLAGS "/wd4512 /wd4996" )
else()
  set_source_files_properties(${QGIS_GUI_MOC_SRCS} PROPERTIES COMPILE_FLAGS "-Wno-deprecated-declarations" )
endif()

# for installing headers

set(QGIS_GUI_HDRS
  qgisgui.h
  qgsannotationitem.h
  qgsattributeeditorcontext.h
  qgsattributeforminterface.h
  qgsattributeformlegacyinterface.h
  qgscursors.h
  qgsdetaileditemdata.h
  qgshighlight.h
  qgsmapcanvasitem.h
  qgsmapcanvasmap.h
  qgsmapcanvassnapper.h
  qgsmaplayerconfigwidgetfactory.h
  qgsmapmouseevent.h
  qgsnumericsortlistviewitem.h
  qgsrubberband.h
  qgssqlcomposerdialog.h
  qgssvgannotationitem.h
  qgstablewidgetitem.h
  qgstextannotationitem.h
  qgstrackedvectorlayertools.h
  qgsvectorlayertools.h
  qgsvertexmarker.h

  attributetable/qgsfeaturemodel.h

  auth/qgsauthguiutils.h

  editorwidgets/core/qgseditorwidgetfactory.h

  editorwidgets/qgscheckboxwidgetfactory.h
  editorwidgets/qgsclassificationwidgetwrapperfactory.h
  editorwidgets/qgscolorwidgetfactory.h
  editorwidgets/qgsdatetimeeditfactory.h
  editorwidgets/qgsenumerationwidgetfactory.h
  editorwidgets/qgsexternalresourcewidgetfactory.h
  editorwidgets/qgsfilenamewidgetfactory.h
  editorwidgets/qgshiddenwidgetfactory.h
  editorwidgets/qgsphotowidgetfactory.h
  editorwidgets/qgsrangewidgetfactory.h
  editorwidgets/qgsrelationreferencefactory.h
  editorwidgets/qgstexteditwidgetfactory.h
  editorwidgets/qgsuniquevaluewidgetfactory.h
  editorwidgets/qgsuuidwidgetfactory.h
  editorwidgets/qgsvaluemapwidgetfactory.h
  editorwidgets/qgsvaluerelationwidgetfactory.h

  layertree/qgslayertreeembeddedwidgetregistry.h
)

if(WITH_QTWEBKIT)
    set(QGIS_GUI_HDRS ${QGIS_GUI_HDRS}
        editorwidgets/qgswebviewwidgetfactory.h
    )
endif()

set(QGIS_GUI_UI_HDRS
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthauthoritieseditor.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthcertificateinfo.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthcertificatemanager.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigedit.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigeditor.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigidedit.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigselect.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfiguriedit.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsautheditorwidgets.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthidentitieseditor.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthimportcertdialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthimportidentitydialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthmethodplugins.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthserverseditor.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslconfigwidget.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslerrorsdialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslimportdialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslimporterrors.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthtrustedcasdialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgscredentialdialog.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsdetaileditemwidgetbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionbuilderdialogbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionbuilder.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionselectiondialogbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsgenericprojectionselectorbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmessagelogviewer.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmessageviewer.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsowssourceselectbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsprojectionselectorbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsquerybuilderbase.h
    ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgssublayersdialogbase.h
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/symbology-ng
    ${CMAKE_CURRENT_SOURCE_DIR}/attributetable
    ${CMAKE_CURRENT_SOURCE_DIR}/auth
    ${CMAKE_CURRENT_SOURCE_DIR}/editorwidgets
    ${CMAKE_CURRENT_SOURCE_DIR}/editorwidgets/core
    ${CMAKE_CURRENT_SOURCE_DIR}/layertree
    ${CMAKE_CURRENT_SOURCE_DIR}/effects
    ../core
    ../core/auth
    ../core/composer
    ../core/geometry
    ../core/layertree
    ../core/raster
    ../core/symbology-ng
    ../core/effects
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}/../ui
)

# disable deprecation warnings for classes re-exporting deprecated methods
if(MSVC)
  set_source_files_properties(
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgisinterface.cxx
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgsgenericprojectionselector.cxx
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgsprojectionselector.cxx
    PROPERTIES COMPILE_FLAGS "/wd4996")
else()
  set_source_files_properties(
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgisinterface.cxx
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgsgenericprojectionselector.cxx
    ${CMAKE_BINARY_DIR}/src/gui/moc_qgsprojectionselector.cxx
    PROPERTIES COMPILE_FLAGS "-w -Wno-deprecated-declarations")
endif()

set(LIB_NAME ${NG_PREFIX}qgis_gui)

add_library(${LIB_NAME} SHARED ${QGIS_GUI_SRCS} ${QGIS_GUI_MOC_SRCS} ${QGIS_GUI_HDRS} ${QGIS_GUI_MOC_HDRS})

target_compile_definitions(${LIB_NAME} PRIVATE "GUI_EXPORT=${DLLEXPORT}")
target_compile_definitions(${LIB_NAME} INTERFACE "GUI_EXPORT=${DLLIMPORT}")
# set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 11)

set(TARGET_LINK_LIBEX)
if(OSX_FRAMEWORK)

    find_library(CARBON_FRAMEWORK Carbon)
    find_library(COREFOUNDATION_FRAMEWORK CoreFoundation)

    set(TARGET_LINK_LIBEX ${TARGET_LINK_LIBEX} ${CARBON_FRAMEWORK} ${COREFOUNDATION_FRAMEWORK})
endif()

target_link_libraries(${LIB_NAME} PRIVATE
    ${NG_PREFIX}qgis_core
    Qt4::QtUiTools
    ${QWT_LIBRARIES}
    ${QSCINTILLA_LIBRARIES}
    ${TARGET_LINK_LIBEX}
)
# target_link_extlibraries(${LIB_NAME})
# add_dependencies(${LIB_NAME} ${NG_PREFIX}qgis_core)
# set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${LIB_NAME} PARENT_SCOPE)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis2_gui
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_GUI_HDRS};${QGIS_GUI_MOC_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

# make sure that UI files will be processed first
add_dependencies(${LIB_NAME} ui)

if(WIN32)
    add_definitions(-DQWT_DLL)
    add_definitions(-DQSCINTILLA_DLL)
endif()

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
    install(FILES ${QGIS_CORE_HDRS} ${QGIS_CORE_MOC_HDRS} DESTINATION ${INSTALL_INC_DIR})
endif()
