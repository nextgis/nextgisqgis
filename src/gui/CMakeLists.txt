################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2022, NextGIS <info@nextgis.com>
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
  actions/qgsactionmenu.cpp
  actions/qgsmaplayeraction.cpp
  actions/qgsmaplayeractioncontext.cpp
  actions/qgsmaplayeractioncontextgenerator.cpp
  actions/qgsmaplayeractionregistry.cpp

  raster/qgscreaterasterattributetabledialog.cpp
  raster/qgsloadrasterattributetabledialog.cpp
  raster/qgsrasterattributetablewidget.cpp
  raster/qgsrasterattributetabledialog.cpp
  raster/qgsrasterattributetableaddcolumndialog.cpp
  raster/qgsrasterattributetableaddrowdialog.cpp
  raster/qgscolorrampshaderwidget.cpp
  raster/qgsmultibandcolorrendererwidget.cpp
  raster/qgspalettedrendererwidget.cpp
  raster/qgsrasterattributetablemodel.cpp
  raster/qgsrasterbandcombobox.cpp
  raster/qgsrastercontourrendererwidget.cpp
  raster/qgsrasterhistogramwidget.cpp
  raster/qgsrasterlayerproperties.cpp
  raster/qgsrasterlayertemporalpropertieswidget.cpp
  raster/qgsrasterminmaxwidget.cpp
  raster/qgsrasterrendererwidget.cpp
  raster/qgssinglebandgrayrendererwidget.cpp
  raster/qgssinglebandpseudocolorrendererwidget.cpp
  raster/qgsrendererrasterpropertieswidget.cpp
  raster/qgsrastertransparencywidget.cpp
  raster/qgshillshaderendererwidget.cpp
  raster/qgsresamplingutils.cpp

  vector/qgsattributeactiondialog.cpp
  vector/qgsattributeactionpropertiesdialog.cpp
  vector/qgsattributesforminitcode.cpp
  vector/qgsattributesformproperties.cpp
  vector/qgsdiagramproperties.cpp
  vector/qgsfieldcalculator.cpp
  vector/qgsjoindialog.cpp
  vector/qgssourcefieldsproperties.cpp
  vector/qgsvectorlayerlegendwidget.cpp
  vector/qgsvectorlayerproperties.cpp
  vector/qgsvectorlayersavestyledialog.cpp
  vector/qgswmsdimensiondialog.cpp

  symbology/qgs25drendererwidget.cpp
  symbology/characterwidget.cpp
  symbology/qgsarrowsymbollayerwidget.cpp
  symbology/qgsbrushstylecombobox.cpp
  symbology/qgscategorizedsymbolrendererwidget.cpp
  symbology/qgscptcitycolorrampdialog.cpp
  symbology/qgsdashspacedialog.cpp
  symbology/qgsdatadefinedsizelegendwidget.cpp
  symbology/qgsellipsesymbollayerwidget.cpp
  symbology/qgsembeddedsymbolrendererwidget.cpp
  symbology/qgsgraduatedhistogramwidget.cpp
  symbology/qgsgraduatedsymbolrendererwidget.cpp
  symbology/qgsheatmaprendererwidget.cpp
  symbology/qgsinterpolatedlinesymbollayerwidget.cpp
  symbology/qgsinvertedpolygonrendererwidget.cpp
  symbology/qgslayerpropertieswidget.cpp
  symbology/qgsmasksymbollayerwidget.cpp
  symbology/qgsmergedfeaturerendererwidget.cpp
  symbology/qgsnullsymbolrendererwidget.cpp
  symbology/qgspenstylecombobox.cpp
  symbology/qgspointclusterrendererwidget.cpp
  symbology/qgspointdisplacementrendererwidget.cpp
  symbology/qgsrendererpropertiesdialog.cpp
  symbology/qgsrendererwidget.cpp
  symbology/qgsrulebasedrendererwidget.cpp
  symbology/qgssinglesymbolrendererwidget.cpp
  symbology/qgssmartgroupeditordialog.cpp
  symbology/qgsstyleexportimportdialog.cpp
  symbology/qgsstylegroupselectiondialog.cpp
  symbology/qgsstylemanagerdialog.cpp
  symbology/qgsstylesavedialog.cpp
  symbology/qgssvgselectorwidget.cpp
  symbology/qgssymbolanimationsettingswidget.cpp
  symbology/qgssymbollayerwidget.cpp
  symbology/qgssymbollevelsdialog.cpp
  symbology/qgssymbolslistwidget.cpp
  symbology/qgssymbolselectordialog.cpp
  symbology/qgssymbolwidgetcontext.cpp
  symbology/qgsvectorfieldsymbollayerwidget.cpp

  effects/qgseffectdrawmodecombobox.cpp
  effects/qgseffectstackpropertieswidget.cpp
  effects/qgspainteffectpropertieswidget.cpp
  effects/qgspainteffectwidget.cpp

  callouts/qgscalloutwidget.cpp

  attributeformconfig/qgsattributeformcontaineredit.cpp
  attributeformconfig/qgsattributetypedialog.cpp
  attributeformconfig/qgsattributewidgetedit.cpp

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
  attributetable/qgsfeaturefilterwidget.cpp

  annotations/qgsannotationitemcommonpropertieswidget.cpp
  annotations/qgsannotationitemguiregistry.cpp
  annotations/qgsannotationitemwidget.cpp
  annotations/qgsannotationitemwidget_impl.cpp
  annotations/qgscreateannotationitemmaptool.cpp
  annotations/qgscreateannotationitemmaptool_impl.cpp
  annotations/qgsmaptoolmodifyannotation.cpp

  auth/qgsauthauthoritieseditor.cpp
  auth/qgsauthcertificateinfo.cpp
  auth/qgsauthcertificatemanager.cpp
  auth/qgsauthcerttrustpolicycombobox.cpp
  auth/qgsauthconfigedit.cpp
  auth/qgsauthconfigeditor.cpp
  auth/qgsauthconfigidedit.cpp
  auth/qgsauthconfigselect.cpp
  auth/qgsauthsettingswidget.cpp
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

  codeeditors/qgscodeeditor.cpp
  codeeditors/qgscodeeditorcolorscheme.cpp
  codeeditors/qgscodeeditorcolorschemeregistry.cpp
  codeeditors/qgscodeeditorcss.cpp
  codeeditors/qgscodeeditordockwidget.cpp
  codeeditors/qgscodeeditorhistorydialog.cpp
  codeeditors/qgscodeeditorhtml.cpp
  codeeditors/qgscodeeditorjs.cpp
  codeeditors/qgscodeeditorjson.cpp
  codeeditors/qgscodeeditorpython.cpp
  codeeditors/qgscodeeditorr.cpp
  codeeditors/qgscodeeditorshell.cpp
  codeeditors/qgscodeeditorsql.cpp
  codeeditors/qgscodeeditorexpression.cpp

  devtools/qgsdevtoolwidget.cpp
  devtools/qgsdevtoolwidgetfactory.cpp

  editorwidgets/core/qgseditorconfigwidget.cpp
  editorwidgets/core/qgseditorwidgetautoconf.cpp
  editorwidgets/core/qgseditorwidgetfactory.cpp
  editorwidgets/core/qgseditorwidgetregistry.cpp
  editorwidgets/core/qgseditorwidgetwrapper.cpp
  editorwidgets/core/qgssearchwidgetwrapper.cpp
  editorwidgets/core/qgswidgetwrapper.cpp

  editorwidgets/qgsbinarywidgetfactory.cpp
  editorwidgets/qgsbinarywidgetwrapper.cpp
  editorwidgets/qgscheckboxconfigdlg.cpp
  editorwidgets/qgscheckboxsearchwidgetwrapper.cpp
  editorwidgets/qgscheckboxwidgetwrapper.cpp
  editorwidgets/qgscheckboxwidgetfactory.cpp
  editorwidgets/qgsclassificationwidgetwrapper.cpp
  editorwidgets/qgsclassificationwidgetwrapperfactory.cpp
  editorwidgets/qgsactionwidgetwrapper.cpp
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
  # editorwidgets/qgsexternalresourceconfigdlg.cpp
  # editorwidgets/qgsexternalresourcewidgetwrapper.cpp
  # editorwidgets/qgsexternalresourcewidgetfactory.cpp
  editorwidgets/qgsgeometrywidgetfactory.cpp
  editorwidgets/qgsgeometrywidgetwrapper.cpp
  editorwidgets/qgshiddenwidgetwrapper.cpp
  editorwidgets/qgshiddenwidgetfactory.cpp
  editorwidgets/qgshtmlwidgetwrapper.cpp
  editorwidgets/qgskeyvaluewidgetfactory.cpp
  editorwidgets/qgskeyvaluewidgetwrapper.cpp
  editorwidgets/qgsjsoneditconfigdlg.cpp
  editorwidgets/qgsjsoneditwidgetfactory.cpp
  editorwidgets/qgsjsoneditwrapper.cpp
  editorwidgets/qgsjsoneditwidget.cpp
  editorwidgets/qgslistwidgetfactory.cpp
  editorwidgets/qgslistwidgetwrapper.cpp
  editorwidgets/qgslistconfigdlg.cpp
  editorwidgets/qgsmultiedittoolbutton.cpp
  editorwidgets/qgsrangeconfigdlg.cpp
  editorwidgets/qgsrangewidgetwrapper.cpp
  editorwidgets/qgsrangewidgetfactory.cpp
  editorwidgets/qgsrelationaggregatesearchwidgetwrapper.cpp
  editorwidgets/qgssearchwidgettoolbutton.cpp
  editorwidgets/qgsspinbox.cpp
  editorwidgets/qgsrelationwidgetwrapper.cpp
  editorwidgets/qgsrelationreferenceconfigdlg.cpp
  editorwidgets/qgsrelationreferencefactory.cpp
  editorwidgets/qgsrelationreferencesearchwidgetwrapper.cpp
  editorwidgets/qgsrelationreferencewidget.cpp
  editorwidgets/qgsspacerwidgetwrapper.cpp
  editorwidgets/qgsrelationreferencewidgetwrapper.cpp
  editorwidgets/qgstexteditconfigdlg.cpp
  editorwidgets/qgstexteditsearchwidgetwrapper.cpp
  editorwidgets/qgstexteditwrapper.cpp
  editorwidgets/qgstexteditwidgetfactory.cpp
  editorwidgets/qgstextwidgetwrapper.cpp
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

  elevation/qgselevationprofilecanvas.cpp
  elevation/qgselevationprofilelayertreeview.cpp

  # history/qgshistoryentry.cpp
  # history/qgshistoryentrymodel.cpp
  # history/qgshistoryentrynode.cpp
  # history/qgshistoryprovider.cpp
  # history/qgshistoryproviderregistry.cpp
  # history/qgshistorywidget.cpp
  # history/qgshistorywidgetcontext.cpp

  labeling/qgslabelengineconfigdialog.cpp
  labeling/qgslabelinggui.cpp
  labeling/qgslabelingwidget.cpp
  labeling/qgslabellineanchorwidget.cpp
  labeling/qgslabelobstaclesettingswidget.cpp
  labeling/qgslabelsettingswidgetbase.cpp
  labeling/qgsrulebasedlabelingwidget.cpp

  layertree/qgscustomlayerorderwidget.cpp
  layertree/qgslayertreeembeddedconfigwidget.cpp
  layertree/qgslayertreeembeddedwidgetregistry.cpp
  layertree/qgslayertreeembeddedwidgetsimpl.cpp
  layertree/qgslayertreemapcanvasbridge.cpp
  layertree/qgslayertreeview.cpp
  layertree/qgslayertreeviewdefaultactions.cpp
  layertree/qgslayertreeviewindicator.cpp
  layertree/qgslayertreeviewitemdelegate.cpp

  layout/qgsgeopdflayertreemodel.cpp
  layout/qgslayoutaddpagesdialog.cpp
  layout/qgslayoutguiutils.cpp
  layout/qgslayoutatlaswidget.cpp
  layout/qgslayoutattributeselectiondialog.cpp
  layout/qgslayoutattributetablewidget.cpp
  layout/qgslayoutcombobox.cpp
  layout/qgslayoutcustomdrophandler.cpp
  layout/qgslayoutelevationprofilewidget.cpp
  layout/qgslayoutguidewidget.cpp
  layout/qgslayouthtmlwidget.cpp
  layout/qgslayoutimageexportoptionsdialog.cpp
  layout/qgslayoutitemcombobox.cpp
  layout/qgslayoutitemguiregistry.cpp
  layout/qgslayoutitemslistview.cpp
  layout/qgslayoutitemwidget.cpp
  layout/qgslayoutlabelwidget.cpp
  layout/qgslayoutlegendlayersdialog.cpp
  layout/qgslayoutlegendwidget.cpp
  layout/qgslayoutmanualtablewidget.cpp
  layout/qgslayoutmapgridwidget.cpp
  layout/qgslayoutmapwidget.cpp
  layout/qgslayoutmarkerwidget.cpp
  layout/qgslayoutmousehandles.cpp
  layout/qgslayoutnewitempropertiesdialog.cpp
  layout/qgslayoutpagepropertieswidget.cpp
  layout/qgslayoutpdfexportoptionsdialog.cpp
  layout/qgslayoutpicturewidget.cpp
  layout/qgslayoutpolygonwidget.cpp
  layout/qgslayoutpolylinewidget.cpp
  layout/qgslayoutpropertieswidget.cpp
  layout/qgslayoutqptdrophandler.cpp
  layout/qgslayoutreportsectionlabel.cpp
  layout/qgslayoutruler.cpp
  layout/qgslayoutscalebarwidget.cpp
  layout/qgslayoutshapewidget.cpp
  layout/qgslayouttablebackgroundcolorsdialog.cpp
  layout/qgslayoutunitscombobox.cpp
  layout/qgslayoutvaliditychecks.cpp
  layout/qgslayoutview.cpp
  layout/qgslayoutviewmouseevent.cpp
  layout/qgslayoutviewrubberband.cpp
  layout/qgslayoutviewtool.cpp
  layout/qgslayoutviewtooladditem.cpp
  layout/qgslayoutviewtooladdnodeitem.cpp
  layout/qgslayoutviewtooleditnodes.cpp
  layout/qgslayoutviewtoolmoveitemcontent.cpp
  layout/qgslayoutviewtoolpan.cpp
  layout/qgslayoutviewtoolselect.cpp
  layout/qgslayoutviewtooltemporarykeypan.cpp
  layout/qgslayoutviewtooltemporarykeyzoom.cpp
  layout/qgslayoutviewtooltemporarymousepan.cpp
  layout/qgslayoutviewtoolzoom.cpp

  locator/qgslocatorwidget.cpp

  maptools/qgsmaptoolshapeabstract.cpp
  maptools/qgsmaptoolcapturelayergeometry.cpp
  maptools/qgsmaptoolshaperegistry.cpp

  mesh/qgsmeshlayerproperties.cpp
  mesh/qgsrenderermeshpropertieswidget.cpp
  mesh/qgsmeshdatasetgrouptreewidget.cpp
  mesh/qgsmeshrenderer3daveragingwidget.cpp
  mesh/qgsmeshrenderermeshsettingswidget.cpp
  mesh/qgsmeshrendererscalarsettingswidget.cpp
  mesh/qgsmeshrenderervectorsettingswidget.cpp
  mesh/qgsmeshrendereractivedatasetwidget.cpp
  mesh/qgsmeshdatasetgrouptreeview.cpp
  mesh/qgsmeshstaticdatasetwidget.cpp
  mesh/qgsmeshvariablestrokewidthwidget.cpp

  numericformats/qgsnumericformatselectorwidget.cpp
  numericformats/qgsnumericformatwidget.cpp
  numericformats/qgsnumericformatguiregistry.cpp

  ogr/qgsogrhelperfunctions.cpp
  ogr/qgsnewogrconnection.cpp
  ogr/qgsvectorlayersaveasdialog.cpp

  plot/qgsplotcanvas.cpp
  plot/qgsplotcanvasitem.cpp
  plot/qgsplotmouseevent.cpp
  plot/qgsplotrubberband.cpp
  plot/qgsplottool.cpp
  plot/qgsplottoolpan.cpp
  plot/qgsplottoolxaxiszoom.cpp
  plot/qgsplottoolzoom.cpp
  plot/qgsplottransienttools.cpp

  pointcloud/qgspointcloudattributebyramprendererwidget.cpp
  pointcloud/qgspointcloudclassifiedrendererwidget.cpp
  pointcloud/qgspointcloudextentrendererwidget.cpp
  pointcloud/qgspointcloudlayersaveasdialog.cpp
  pointcloud/qgspointcloudrendererwidget.cpp
  pointcloud/qgspointcloudrendererpropertieswidget.cpp
  pointcloud/qgspointcloudrgbrendererwidget.cpp

  processing/qgsprocessingaggregatewidgets.cpp
  processing/qgsprocessingaggregatewidgetwrapper.cpp
  processing/qgsprocessingalgorithmconfigurationwidget.cpp
  processing/qgsprocessingalgorithmdialogbase.cpp
  processing/qgsprocessingbatchalgorithmdialogbase.cpp
  processing/qgsprocessingconfigurationwidgets.cpp
  # processing/qgsprocessingdxflayerswidgetwrapper.cpp
  processing/qgsprocessingenummodelerwidget.cpp
  processing/qgsprocessingfeaturesourceoptionswidget.cpp
  processing/qgsprocessingfieldmapwidgetwrapper.cpp
  processing/qgsprocessingguiregistry.cpp
  processing/qgsprocessinghelpeditorwidget.cpp
  # processing/qgsprocessinghistoryprovider.cpp
  # processing/qgsprocessinghistorywidget.cpp
  processing/qgsprocessingmaplayercombobox.cpp
  processing/qgsprocessingmatrixmodelerwidget.cpp
  processing/qgsprocessingmatrixparameterdialog.cpp
  processing/qgsprocessingmeshdatasetwidget.cpp
  processing/qgsprocessingmodelerparameterwidget.cpp
  processing/qgsprocessingmultipleselectiondialog.cpp
  processing/qgsprocessingoutputdestinationwidget.cpp
  processing/qgsprocessingparameterdefinitionwidget.cpp
  processing/qgsprocessingparameterswidget.cpp
  processing/qgsprocessingpointcloudexpressionlineedit.cpp
  processing/qgsprocessingrecentalgorithmlog.cpp
  processing/qgsprocessingtininputlayerswidget.cpp
  processing/qgsprocessingtoolboxmodel.cpp
  processing/qgsprocessingtoolboxtreeview.cpp
  # processing/qgsprocessingvectortilewriterlayerswidgetwrapper.cpp
  processing/qgsprocessingwidgetwrapper.cpp
  processing/qgsprocessingwidgetwrapperimpl.cpp

  processing/models/qgsmodelarrowitem.cpp
  processing/models/qgsmodelcomponentgraphicitem.cpp
  processing/models/qgsmodeldesignerdialog.cpp
  processing/models/qgsmodeldesignerinputstreewidget.cpp
  processing/models/qgsmodelgraphicitem.cpp
  processing/models/qgsmodelgraphicsscene.cpp
  processing/models/qgsmodelgraphicsview.cpp
  processing/models/qgsmodelgroupboxdefinitionwidget.cpp
  processing/models/qgsmodelinputreorderwidget.cpp
  processing/models/qgsmodeloutputreorderwidget.cpp
  processing/models/qgsmodelsnapper.cpp
  processing/models/qgsmodelundocommand.cpp
  processing/models/qgsmodelviewmouseevent.cpp
  processing/models/qgsmodelviewmousehandles.cpp
  processing/models/qgsmodelviewrubberband.cpp
  processing/models/qgsmodelviewtool.cpp
  processing/models/qgsmodelviewtoolpan.cpp
  processing/models/qgsmodelviewtoolselect.cpp
  processing/models/qgsmodelviewtooltemporarykeypan.cpp
  processing/models/qgsmodelviewtooltemporarykeyzoom.cpp
  processing/models/qgsmodelviewtooltemporarymousepan.cpp
  processing/models/qgsmodelviewtoolzoom.cpp

  providers/qgsabstractdbsourceselect.cpp
  providers/qgspointcloudproviderguimetadata.cpp
  providers/qgspointcloudsourceselect.cpp

  providers/gdal/qgsgdalfilesourcewidget.cpp
  providers/gdal/qgsgdalsourceselect.cpp
  providers/gdal/qgsgdalguiprovider.cpp

#  providers/mbtilesvectortiles/qgsmbtilesvectortileguiprovider.cpp
#  providers/mbtilesvectortiles/qgsmbtilesvectortilesourcewidget.cpp

  providers/ogr/qgsogrguiprovider.cpp
  providers/ogr/qgsogrdbsourceselect.cpp
  providers/ogr/qgsogrdbtablemodel.cpp
  providers/ogr/qgsogrsourceselect.cpp
  providers/ogr/qgsgeopackageprojectstoragedialog.cpp
  providers/ogr/qgsgeopackageitemguiprovider.cpp
  providers/ogr/qgsogritemguiprovider.cpp
  providers/ogr/qgsgeopackageprojectstorageguiprovider.cpp

#  providers/vtpkvectortiles/qgsvtpkvectortileguiprovider.cpp
#  providers/vtpkvectortiles/qgsvtpkvectortilesourcewidget.cpp

  sensor/qgssensorguiregistry.cpp
  sensor/qgssensorwidget.cpp

  settings/qgssettingseditorwidgetwrapper.cpp
  settings/qgssettingseditorwidgetwrapperimpl.cpp
  settings/qgssettingseditorwidgetregistry.cpp
  settings/qgssettingsregistrygui.cpp
  settings/qgssettingstreemodel.cpp
  settings/qgssettingstreewidget.cpp

  tableeditor/qgstableeditordialog.cpp
  tableeditor/qgstableeditorformattingwidget.cpp
  tableeditor/qgstableeditorwidget.cpp

  # vectortile/qgsarcgisvectortileconnectiondialog.cpp
  # vectortile/qgsvectortilebasiclabelingwidget.cpp
  # vectortile/qgsvectortilebasicrendererwidget.cpp
  # vectortile/qgsvectortileconnectiondialog.cpp
  # vectortile/qgsvectortiledataitemguiprovider.cpp
  # vectortile/qgsvectortileproviderguimetadata.cpp
  # vectortile/qgsvectortilesourceselect.cpp
  # vectortile/qgsvectortilelayerproperties.cpp

  qgisinterface.cpp
  qgs3dsymbolwidget.cpp
  qgsabstractmaptoolhandler.cpp
  qgsaddattrdialog.cpp
  qgsaddtaborgroup.cpp
  qgsadvanceddigitizingcanvasitem.cpp
  qgsadvanceddigitizingdockwidget.cpp
  qgsadvanceddigitizingfloater.cpp
  qgsaggregatetoolbutton.cpp
  qgsalignmentcombobox.cpp
  qgsapplicationexitblockerinterface.cpp
  qgsattributedialog.cpp
  qgsattributeeditorcontext.cpp
  qgsattributeform.cpp
  qgsattributeformeditorwidget.cpp
  qgsattributeforminterface.cpp
  qgsattributeformlegacyinterface.cpp
  qgsattributetypeloaddialog.cpp
  qgsattributeformwidget.cpp
  qgsattributeformrelationeditorwidget.cpp
  qgsblendmodecombobox.cpp
  qgsbrowsertreeview.cpp
  qgsbrowserguimodel.cpp
  qgsbrowserdockwidget.cpp
  qgsbrowserwidget.cpp
  qgsbusyindicatordialog.cpp
  qgscharacterselectordialog.cpp
  qgscheckablecombobox.cpp
  qgscollapsiblegroupbox.cpp
  qgscolorbrewercolorrampdialog.cpp
  qgscolorbutton.cpp
  qgscolorrampbutton.cpp
  qgscolordialog.cpp
  qgscolorramplegendnodewidget.cpp
  qgscolorschemelist.cpp
  qgscolorswatchgrid.cpp
  qgscolorwidgets.cpp
  qgscompoundcolorwidget.cpp
  qgsconfigureshortcutsdialog.cpp
  qgscoordinateboundspreviewmapwidget.cpp
  qgscoordinateoperationwidget.cpp
  qgscrsdefinitionwidget.cpp
  qgscredentialdialog.cpp
  qgscustomdrophandler.cpp
  qgscustomprojectopenhandler.cpp
  qgscurveeditorwidget.cpp
  qgsdatabaseschemacombobox.cpp
  qgsdatabasetablecombobox.cpp
  qgsdataitemguiprovider.cpp
  qgsdataitemguiproviderregistry.cpp
  qgsdatumtransformdialog.cpp
  qgsdatasourceselectdialog.cpp
#  qgsdbqueryhistoryprovider.cpp
  qgsdbrelationshipwidget.cpp
  qgsdetaileditemdata.cpp
  qgsdetaileditemdelegate.cpp
  qgsdetaileditemwidget.cpp
  qgsdial.cpp
  qgsdialog.cpp
  qgsdirectionallightwidget.cpp
  qgsdockablewidgethelper.cpp
  qgsdoublevalidator.cpp
  qgsdockwidget.cpp
  qgsencodingfiledialog.cpp
  qgserrordialog.cpp
  qgsexpressionbuilderdialog.cpp
  qgsexpressionbuilderwidget.cpp
  qgsexpressionhighlighter.cpp
  qgsexpressionlineedit.cpp
  qgsexpressionpreviewwidget.cpp
  qgsexpressionselectiondialog.cpp
  qgsexpressionstoredialog.cpp
  qgsexpressiontreeview.cpp
  qgsextentgroupbox.cpp
  qgsextentwidget.cpp
  # qgsexternalresourcewidget.cpp
  qgsfeatureselectiondlg.cpp
  qgsfieldcombobox.cpp
  qgsfieldexpressionwidget.cpp
  qgsfeaturepickerwidget.cpp
  qgsfieldmappingwidget.cpp
  qgsfieldmappingmodel.cpp
  qgsfeaturelistcombobox.cpp
  qgsfielddomainwidget.cpp
  qgsfieldvalidator.cpp
  qgsfieldvalueslineedit.cpp
  qgsfilecontentsourcelineedit.cpp
  qgsfilewidget.cpp
  # qgsexternalstoragefilewidget.cpp
  qgsfilterlineedit.cpp
  qgsfindfilesbypatternwidget.cpp
  qgsfloatingwidget.cpp
  qgsfocuskeeper.cpp
  qgsfocuswatcher.cpp
  qgsformlabelformatwidget.cpp
  qgsfontbutton.cpp
  qgsformannotation.cpp
  qgsgeocoderlocatorfilter.cpp
  qgsgeometryrubberband.cpp
  qgsgeometrywidget.cpp
  qgsgradientcolorrampdialog.cpp
  qgsgradientstopeditor.cpp
  qgsgraphicsviewmousehandles.cpp
  qgsgroupwmsdatadialog.cpp
  qgsgui.cpp
  qgsguiutils.cpp
  qgshighlight.cpp
  qgshighlightablecombobox.cpp
  qgshighlightablelineedit.cpp
  qgshistogramwidget.cpp
  qgshelp.cpp
  qgshttpheaderwidget.cpp
  qgsidentifymenu.cpp
  qgsimagedroptextedit.cpp
  qgsinstallgridshiftdialog.cpp
  qgskeyvaluewidget.cpp
  qgslayermetadatasearchwidget.cpp
  qgslayermetadataresultsmodel.cpp
  qgslayermetadatasourceselectprovider.cpp
  qgslayermetadataresultsproxymodel.cpp
  qgslistwidget.cpp
  qgslegendfilterbutton.cpp
  qgslegendpatchshapebutton.cpp
  qgslegendpatchshapewidget.cpp
  qgslimitedrandomcolorrampdialog.cpp
  qgslocaleawarenumericlineeditdelegate.cpp
  qgsratiolockbutton.cpp
  qgsludialog.cpp
  qgsmanageconnectionsdialog.cpp
  qgsmapcanvas.cpp
  qgsmapcanvasannotationitem.cpp
  qgsmapcanvasitem.cpp
  qgsmapcanvasmap.cpp
  qgsmapcanvassnappingutils.cpp
  qgsmapcanvastracer.cpp
  qgsmapcanvasutils.cpp
  qgsmaplayercombobox.cpp
  qgsmaplayerconfigwidgetfactory.cpp
  qgsmaplayerloadstyledialog.cpp
  qgsmaplayerstylecategoriesmodel.cpp
  qgsmaplayerstyleguiutils.cpp
  qgsmaplayerstylemanagerwidget.cpp
  qgsmapmouseevent.cpp
  qgsmapoverviewcanvas.cpp
  qgsmaskingwidget.cpp
  qgsmaptip.cpp
  qgsmaptool.cpp
  qgsmaptooladvanceddigitizing.cpp
  qgsmaptoolcapture.cpp
  qgsmaptoolcapturerubberband.cpp
  qgsmaptooledit.cpp
  qgsmaptooldigitizefeature.cpp
  qgsmaptoolemitpoint.cpp
  qgsmaptoolextent.cpp
  qgsmaptoolidentify.cpp
  qgsmaptoolidentifyfeature.cpp
  qgsmaptoolpan.cpp
  qgsmaptoolzoom.cpp
  qgsmaplayerconfigwidget.cpp
  qgsmaterialsettingswidget.cpp
  qgsmediawidget.cpp
  qgsmenuheader.cpp
  qgsmessagebar.cpp
  qgsmessagebaritem.cpp
  qgsmessagelogviewer.cpp
  qgsmessageviewer.cpp
  qgsmetadatawidget.cpp
  qgsmasksourceselectionwidget.cpp
  qgsmetadataurlitemdelegate.cpp
  qgsnewauxiliarylayerdialog.cpp
  qgsnewauxiliaryfielddialog.cpp
  qgsnewdatabasetablenamewidget.cpp
  qgsnewhttpconnection.cpp
  qgsnewmemorylayerdialog.cpp
  qgsnewnamedialog.cpp
  qgsnewvectorlayerdialog.cpp
  qgsnewgeopackagelayerdialog.cpp
  qgsnewvectortabledialog.cpp
  qgsopacitywidget.cpp
  qgsoptionsdialogbase.cpp
  qgsoptionsdialoghighlightwidget.cpp
  qgsoptionsdialoghighlightwidgetsimpl.cpp
  qgsorderbydialog.cpp
  qgsowssourceselect.cpp
  qgsowssourcewidget.cpp
  qgspanelwidget.cpp
  qgspanelwidgetstack.cpp
  qgspasswordlineedit.cpp
  qgspixmaplabel.cpp
  qgspluginmanagerinterface.cpp
  qgspointcloudattributecombobox.cpp
  qgspointcloudquerybuilder.cpp
  qgspresetcolorrampdialog.cpp
  qgsprevieweffect.cpp
  qgsprojectionselectiondialog.cpp
  qgsprojectionselectionwidget.cpp
  qgsprojectionselectiontreewidget.cpp
  qgspropertyassistantwidget.cpp
  qgspropertyoverridebutton.cpp
  qgsproviderguiregistry.cpp
  qgsproviderguimetadata.cpp
  qgsprovidersourcewidget.cpp
  qgsprovidersourcewidgetprovider.cpp
  qgsprovidersourcewidgetproviderregistry.cpp
  qgsprovidersublayersdialog.cpp
  qgsprojectstorageguiregistry.cpp
  qgsproviderconnectioncombobox.cpp
  qgsproxystyle.cpp
  qgsquerybuilder.cpp
  qgsqueryresultwidget.cpp
  qgsrangeslider.cpp
  qgsrasterformatsaveoptionswidget.cpp
  qgsrasterlayersaveasdialog.cpp
  qgsrasterpyramidsoptionswidget.cpp
  qgsrelationeditorwidget.cpp
  qgsabstractrelationeditorwidget.cpp
  qgsrelationwidgetregistry.cpp
  qgsrichtexteditor.cpp
  qgsrubberband.cpp
  qgsscalecombobox.cpp
  qgsscalerangewidget.cpp
  qgsscalevisibilitydialog.cpp
  qgsscalewidget.cpp
  qgsscreenhelper.cpp
  qgsscrollarea.cpp
  qgssearchquerybuilder.cpp
  qgssubsetstringeditorinterface.cpp
  qgssubsetstringeditorprovider.cpp
  qgssubsetstringeditorproviderregistry.cpp
  qgsshortcutsmanager.cpp
  qgsslider.cpp
  qgssnapindicator.cpp
  qgssnaptogridcanvasitem.cpp
  qgsstyleitemslistwidget.cpp
  qgssublayersdialog.cpp
  qgssubstitutionlistwidget.cpp
  qgssqlcomposerdialog.cpp
  qgsstatusbar.cpp
  qgssymbolbutton.cpp
  qgssymbollayerselectionwidget.cpp
  qgstabbarproxystyle.cpp
  qgstableview.cpp
  qgstablewidgetbase.cpp
  qgstabwidget.cpp
  qgstablewidgetitem.cpp
  qgstaskmanagerwidget.cpp
  qgstemporalmapsettingswidget.cpp
  qgstemporalcontrollerwidget.cpp
  qgstextformatwidget.cpp
  qgstextpreview.cpp
  qgstooltipcombobox.cpp
  qgstreewidgetitem.cpp
  qgsunitselectionwidget.cpp
  qgsuserinputwidget.cpp
  qgsvaliditycheckresultswidget.cpp
  qgsvariableeditorwidget.cpp
  qgsvectorlayertemporalpropertieswidget.cpp
  qgsvertexmarker.cpp
  qgsfiledownloaderdialog.cpp
  qgsvscrollarea.cpp
  qgsdatasourcemanagerdialog.cpp
  qgsabstractdatasourcewidget.cpp
  qgswidgetstatehelper_p.cpp
  qgssourceselectprovider.cpp
  qgssourceselectproviderregistry.cpp

  editorwidgets/qgsqmlwidgetwrapper.cpp

  qgsbrowserdockwidget_p.cpp
)

set(QGIS_GUI_HDRS
  qgisinterface.h

  qgs3dsymbolwidget.h
  qgsabstractdatasourcewidget.h
  qgsabstractmaptoolhandler.h
  qgsaddattrdialog.h
  qgsaddtaborgroup.h
  qgsadvanceddigitizingcanvasitem.h
  qgsadvanceddigitizingdockwidget.h
  qgsadvanceddigitizingfloater.h
  qgsaggregatetoolbutton.h
  qgsalignmentcombobox.h
  qgsapplicationexitblockerinterface.h
  qgsattributedialog.h
  qgsattributeeditorcontext.h
  qgsattributeform.h
  qgsattributeformeditorwidget.h
  qgsattributeforminterface.h
  qgsattributeformlegacyinterface.h
  qgsattributeformrelationeditorwidget.h
  qgsattributeformwidget.h
  qgsattributetypeloaddialog.h
  qgsblendmodecombobox.h
  qgsbrowserdockwidget.h
  qgsbrowserwidget.h
  qgsbrowserguimodel.h
  qgsbrowsertreeview.h
  qgsbusyindicatordialog.h
  qgscharacterselectordialog.h
  qgscheckablecombobox.h
  qgscollapsiblegroupbox.h
  qgscolorbrewercolorrampdialog.h
  qgscolorbutton.h
  qgscolordialog.h
  qgscolorrampbutton.h
  qgscolorramplegendnodewidget.h
  qgscolorschemelist.h
  qgscolorswatchgrid.h
  qgscolorwidgets.h
  qgscompoundcolorwidget.h
  qgsconfigureshortcutsdialog.h
  qgscoordinateboundspreviewmapwidget.h
  qgscoordinateoperationwidget.h
  qgscredentialdialog.h
  qgscrsdefinitionwidget.h
  qgscurveeditorwidget.h
  qgscustomdrophandler.h
  qgscustomprojectopenhandler.h
  qgsdatabaseschemacombobox.h
  qgsdatabasetablecombobox.h
  qgsdataitemguiprovider.h
  qgsdataitemguiproviderregistry.h
  qgsdatasourcemanagerdialog.h
  qgsdatasourceselectdialog.h
#  qgsdbqueryhistoryprovider.h
  qgsdbrelationshipwidget.h
  qgsnewdatabasetablenamewidget.h
  qgsdatumtransformdialog.h
  qgsdetaileditemdata.h
  qgsdetaileditemdelegate.h
  qgsdetaileditemwidget.h
  qgsdial.h
  qgsdialog.h
  qgsdirectionallightwidget.h
  qgsdockablewidgethelper.h
  qgsdockwidget.h
  qgsdoublevalidator.h
  qgsencodingfiledialog.h
  qgserrordialog.h
  qgsexpressionbuilderdialog.h
  qgsexpressionstoredialog.h
  qgsexpressionbuilderwidget.h
  qgsexpressionhighlighter.h
  qgsexpressionlineedit.h
  qgsexpressionpreviewwidget.h
  qgsexpressionselectiondialog.h
  qgsexpressiontreeview.h
  qgsextentgroupbox.h
  qgsextentwidget.h
#   qgsexternalresourcewidget.h
  qgsfeaturepickerwidget.h
  qgsfeaturelistcombobox.h
  qgsfeatureselectiondlg.h
  qgsfieldcombobox.h
  qgsfielddomainwidget.h
  qgsfieldexpressionwidget.h
  qgsfieldmappingwidget.h
  qgsfieldmappingmodel.h
  qgsfieldvalidator.h
  qgsfieldvalueslineedit.h
  qgsfilecontentsourcelineedit.h
  qgsfiledownloaderdialog.h
  qgsfilewidget.h
#   qgsexternalstoragefilewidget.h
  qgsfilterlineedit.h
  qgsfindfilesbypatternwidget.h
  qgsfloatingwidget.h
  qgsfocuskeeper.h
  qgsfocuswatcher.h
  qgsfontbutton.h
  qgsformannotation.h
  qgsformlabelformatwidget.h
  qgsgeocoderlocatorfilter.h
  qgsgeometryrubberband.h
  qgsgeometrywidget.h
  qgsgradientcolorrampdialog.h
  qgsgradientstopeditor.h
  qgsgraphicsviewmousehandles.h
  qgsgroupwmsdatadialog.h
  qgsgui.h
  qgsguiutils.h
  qgshelp.h
  qgshighlight.h
  qgshighlightablecombobox.h
  qgshighlightablelineedit.h
  qgshistogramwidget.h
  qgshttpheaderwidget.h
  qgsidentifymenu.h
  qgsimagedroptextedit.h
  qgsinstallgridshiftdialog.h
  qgskeyvaluewidget.h
  qgslayermetadatasearchwidget.h
  qgslayermetadataresultsmodel.h
  qgslayermetadataresultsproxymodel.h
  qgslayermetadatasourceselectprovider.h
  qgslegendfilterbutton.h
  qgslegendpatchshapebutton.h
  qgslegendpatchshapewidget.h
  qgslimitedrandomcolorrampdialog.h
  qgslistwidget.h
  qgslonglongvalidator.h
  qgsludialog.h
  qgsmanageconnectionsdialog.h
  qgsmapcanvas.h
  qgsmapcanvasannotationitem.h
  qgsmapcanvasinteractionblocker.h
  qgsmapcanvasitem.h
  qgsmapcanvasmap.h
  qgsmapcanvassnappingutils.h
  qgsmapcanvastracer.h
  qgsmapcanvasutils.h
  qgsmaplayercombobox.h
  qgsmaplayerconfigwidget.h
  qgsmaplayerconfigwidgetfactory.h
  qgsmaplayerloadstyledialog.h
  qgsmaplayerstylecategoriesmodel.h
  qgsmaplayerstyleguiutils.h
  qgsmaplayerstylemanagerwidget.h
  qgsmapmouseevent.h
  qgsmapoverviewcanvas.h
  qgsmaptip.h
  qgsmaptool.h
  qgsmaptooladvanceddigitizing.h
  qgsmaptoolcapture.h
  qgsmaptoolcapturerubberband.h
  qgsmaptooldigitizefeature.h
  qgsmaptooledit.h
  qgsmaptoolemitpoint.h
  qgsmaptoolextent.h
  qgsmaptoolidentify.h
  qgsmaptoolidentifyfeature.h
  qgsmaptoolpan.h
  qgsmaptoolzoom.h
  qgsmaskingwidget.h
  qgsmaterialsettingswidget.h
  qgsmediawidget.h
  qgsmenuheader.h
  qgsmessagebar.h
  qgsmessagebaritem.h
  qgsmessagelogviewer.h
  qgsmessageviewer.h
  qgsmetadatawidget.h
  qgsmasksourceselectionwidget.h
  qgsmetadataurlitemdelegate.h
  qgsnewauxiliaryfielddialog.h
  qgsnewauxiliarylayerdialog.h
  qgsnewgeopackagelayerdialog.h
  qgsnewvectortabledialog.h
  qgsnewhttpconnection.h
  qgsnewmemorylayerdialog.h
  qgsnewnamedialog.h
  qgsnewvectorlayerdialog.h
  qgsnewvectortabledialog.h
  qgsopacitywidget.h
  qgsoptionsdialogbase.h
  qgsoptionsdialoghighlightwidget.h
  qgsoptionsdialoghighlightwidgetsimpl.h
  qgsoptionswidgetfactory.h
  qgsorderbydialog.h
  qgsowssourceselect.h
  qgsowssourcewidget.h
  qgspanelwidget.h
  qgspanelwidgetstack.h
  qgspasswordlineedit.h
  qgspixmaplabel.h
  qgspluginmanagerinterface.h
  qgspointcloudattributecombobox.h
  qgspointcloudquerybuilder.h
  qgspresetcolorrampdialog.h
  qgsprevieweffect.h
  qgsprojectionselectiondialog.h
  qgsprojectionselectiontreewidget.h
  qgsprojectionselectionwidget.h
  qgsprojectstorageguiprovider.h
  qgsprojectstorageguiregistry.h
  qgspropertyassistantwidget.h
  qgspropertyoverridebutton.h
  qgsproviderconnectioncombobox.h
  qgsproviderguimetadata.h
  qgsproviderguiregistry.h
  qgsprovidersourcewidget.h
  qgsprovidersourcewidgetprovider.h
  qgsprovidersourcewidgetproviderregistry.h
  qgsprovidersublayersdialog.h
  qgsproxystyle.h
  qgsquerybuilder.h
  qgsqueryresultwidget.h
  qgsrangeslider.h
  qgsrasterformatsaveoptionswidget.h
  qgsrasterlayersaveasdialog.h
  qgsrasterpyramidsoptionswidget.h
  qgsratiolockbutton.h
  qgsrelationeditorwidget.h
  qgsabstractrelationeditorwidget.h
  qgsrelationwidgetregistry.h
  qgsrichtexteditor.h
  qgsrubberband.h
  qgsscalecombobox.h
  qgsscalerangewidget.h
  qgsscalevisibilitydialog.h
  qgsscalewidget.h
  qgsscreenhelper.h
  qgsscrollarea.h
  qgssearchquerybuilder.h
  qgssubsetstringeditorinterface.h
  qgssubsetstringeditorprovider.h
  qgssubsetstringeditorproviderregistry.h
  qgsshortcutsmanager.h
  qgsslider.h
  qgssnapindicator.h
  qgssnaptogridcanvasitem.h
  qgssourceselectprovider.h
  qgssourceselectproviderregistry.h
  qgssqlcomposerdialog.h
  qgsstatusbar.h
  qgsstyleitemslistwidget.h
  qgssublayersdialog.h
  qgssubstitutionlistwidget.h
  qgssymbolbutton.h
  qgssymbollayerselectionwidget.h
  qgstabbarproxystyle.h
  qgstableview.h
  qgstablewidgetbase.h
  qgstablewidgetitem.h
  qgstabwidget.h
  qgstaskmanagerwidget.h
  qgstemporalmapsettingswidget.h
  qgstemporalcontrollerwidget.h
  qgstextformatwidget.h
  qgstextpreview.h
  qgstooltipcombobox.h
  qgstreewidgetitem.h
  qgsunitselectionwidget.h
  qgsuserinputwidget.h
  qgsvaliditycheckresultswidget.h
  qgsvariableeditorwidget.h
  qgsvectorlayertemporalpropertieswidget.h
  qgsvertexmarker.h
  qgsvscrollarea.h
  qgswindowmanagerinterface.h

  actions/qgsactionmenu.h
  actions/qgsmaplayeraction.h
  actions/qgsmaplayeractioncontext.h
  actions/qgsmaplayeractioncontextgenerator.h
  actions/qgsmaplayeractionregistry.h

  annotations/qgsannotationitemcommonpropertieswidget.h
  annotations/qgsannotationitemguiregistry.h
  annotations/qgsannotationitemwidget.h
  annotations/qgscreateannotationitemmaptool.h
  annotations/qgsmaptoolmodifyannotation.h

  attributeformconfig/qgsattributeformcontaineredit.h
  attributeformconfig/qgsattributetypedialog.h
  attributeformconfig/qgsattributewidgetedit.h

  attributetable/qgsattributetabledelegate.h
  attributetable/qgsattributetablefiltermodel.h
  attributetable/qgsattributetablemodel.h
  attributetable/qgsattributetableview.h
  attributetable/qgsdualview.h
  attributetable/qgsfeaturelistmodel.h
  attributetable/qgsfeaturelistview.h
  attributetable/qgsfeaturelistviewdelegate.h
  attributetable/qgsfeaturemodel.h
  attributetable/qgsfeatureselectionmodel.h
  attributetable/qgsfieldconditionalformatwidget.h
  attributetable/qgsgenericfeatureselectionmanager.h
  attributetable/qgsifeatureselectionmanager.h
  attributetable/qgsorganizetablecolumnsdialog.h
  attributetable/qgsvectorlayerselectionmanager.h

  auth/qgsauthauthoritieseditor.h
  auth/qgsauthcertificateinfo.h
  auth/qgsauthcertificatemanager.h
  auth/qgsauthcerttrustpolicycombobox.h
  auth/qgsauthconfigedit.h
  auth/qgsauthconfigeditor.h
  auth/qgsauthconfigidedit.h
  auth/qgsauthconfigselect.h
  auth/qgsautheditorwidgets.h
  auth/qgsauthguiutils.h
  auth/qgsauthidentitieseditor.h
  auth/qgsauthimportcertdialog.h
  auth/qgsauthimportidentitydialog.h
  auth/qgsauthmasterpassresetdialog.h
  auth/qgsauthmethodedit.h
  auth/qgsauthserverseditor.h
  auth/qgsauthsettingswidget.h
  auth/qgsauthsslconfigwidget.h
  auth/qgsauthsslerrorsdialog.h
  auth/qgsauthsslimportdialog.h
  auth/qgsauthtrustedcasdialog.h

  callouts/qgscalloutwidget.h

  codeeditors/qgscodeeditor.h
  codeeditors/qgscodeeditorcolorscheme.h
  codeeditors/qgscodeeditorcolorschemeregistry.h
  codeeditors/qgscodeeditorcss.h
  codeeditors/qgscodeeditordockwidget.h
  codeeditors/qgscodeeditorexpression.h
  codeeditors/qgscodeeditorhistorydialog.h
  codeeditors/qgscodeeditorhtml.h
  codeeditors/qgscodeeditorjs.h
  codeeditors/qgscodeeditorjson.h
  codeeditors/qgscodeeditorpython.h
  codeeditors/qgscodeeditorr.h
  codeeditors/qgscodeeditorshell.h
  codeeditors/qgscodeeditorsql.h

  devtools/qgsdevtoolwidget.h
  devtools/qgsdevtoolwidgetfactory.h

  editorwidgets/core/qgseditorconfigwidget.h
  editorwidgets/core/qgseditorwidgetautoconf.h
  editorwidgets/core/qgseditorwidgetfactory.h
  editorwidgets/core/qgseditorwidgetregistry.h
  editorwidgets/core/qgseditorwidgetwrapper.h
  editorwidgets/core/qgssearchwidgetwrapper.h
  editorwidgets/core/qgswidgetwrapper.h
  editorwidgets/qgsactionwidgetwrapper.h
  editorwidgets/qgsbinarywidgetfactory.h
  editorwidgets/qgsbinarywidgetwrapper.h
  editorwidgets/qgscheckboxconfigdlg.h
  editorwidgets/qgscheckboxsearchwidgetwrapper.h
  editorwidgets/qgscheckboxwidgetfactory.h
  editorwidgets/qgscheckboxwidgetwrapper.h
  editorwidgets/qgsclassificationwidgetwrapper.h
  editorwidgets/qgsclassificationwidgetwrapperfactory.h
  editorwidgets/qgscolorwidgetfactory.h
  editorwidgets/qgscolorwidgetwrapper.h
  editorwidgets/qgsdatetimeedit.h
  editorwidgets/qgsdatetimeeditconfig.h
  editorwidgets/qgsdatetimeeditfactory.h
  editorwidgets/qgsdatetimeeditwrapper.h
  editorwidgets/qgsdatetimesearchwidgetwrapper.h
  editorwidgets/qgsdefaultsearchwidgetwrapper.h
  editorwidgets/qgsdoublespinbox.h
  editorwidgets/qgsdummyconfigdlg.h
  editorwidgets/qgsenumerationwidgetfactory.h
  editorwidgets/qgsenumerationwidgetwrapper.h
#   editorwidgets/qgsexternalresourceconfigdlg.h
#   editorwidgets/qgsexternalresourcewidgetfactory.h
#   editorwidgets/qgsexternalresourcewidgetwrapper.h
  editorwidgets/qgsgeometrywidgetfactory.h
  editorwidgets/qgsgeometrywidgetwrapper.h
  editorwidgets/qgshiddenwidgetfactory.h
  editorwidgets/qgshiddenwidgetwrapper.h
  editorwidgets/qgshtmlwidgetwrapper.h
  editorwidgets/qgskeyvaluewidgetfactory.h
  editorwidgets/qgskeyvaluewidgetwrapper.h
  editorwidgets/qgsjsoneditconfigdlg.h
  editorwidgets/qgsjsoneditwidgetfactory.h
  editorwidgets/qgsjsoneditwrapper.h
  editorwidgets/qgsjsoneditwidget.h
  editorwidgets/qgslistconfigdlg.h
  editorwidgets/qgslistwidgetfactory.h
  editorwidgets/qgslistwidgetwrapper.h
  editorwidgets/qgsmultiedittoolbutton.h
  editorwidgets/qgsrangeconfigdlg.h
  editorwidgets/qgsrangewidgetfactory.h
  editorwidgets/qgsrangewidgetwrapper.h
  editorwidgets/qgsrelationaggregatesearchwidgetwrapper.h
  editorwidgets/qgsrelationreferenceconfigdlg.h
  editorwidgets/qgsrelationreferencefactory.h
  editorwidgets/qgsrelationreferencesearchwidgetwrapper.h
  editorwidgets/qgsrelationreferencewidget.h
  editorwidgets/qgsrelationreferencewidgetwrapper.h
  editorwidgets/qgsrelationwidgetwrapper.h
  editorwidgets/qgssearchwidgettoolbutton.h
  editorwidgets/qgsspacerwidgetwrapper.h
  editorwidgets/qgsspinbox.h
  editorwidgets/qgstexteditconfigdlg.h
  editorwidgets/qgstexteditsearchwidgetwrapper.h
  editorwidgets/qgstexteditwidgetfactory.h
  editorwidgets/qgstexteditwrapper.h
  editorwidgets/qgstextwidgetwrapper.h
  editorwidgets/qgsuniquevaluesconfigdlg.h
  editorwidgets/qgsuniquevaluewidgetfactory.h
  editorwidgets/qgsuniquevaluewidgetwrapper.h
  editorwidgets/qgsuuidwidgetfactory.h
  editorwidgets/qgsuuidwidgetwrapper.h
  editorwidgets/qgsvaluemapconfigdlg.h
  editorwidgets/qgsvaluemapsearchwidgetwrapper.h
  editorwidgets/qgsvaluemapwidgetfactory.h
  editorwidgets/qgsvaluemapwidgetwrapper.h
  editorwidgets/qgsvaluerelationconfigdlg.h
  editorwidgets/qgsvaluerelationsearchwidgetwrapper.h
  editorwidgets/qgsvaluerelationwidgetfactory.h
  editorwidgets/qgsvaluerelationwidgetwrapper.h

  effects/qgseffectdrawmodecombobox.h
  effects/qgseffectstackpropertieswidget.h
  effects/qgspainteffectpropertieswidget.h
  effects/qgspainteffectwidget.h

  elevation/qgselevationprofilecanvas.h
  elevation/qgselevationprofilelayertreeview.h

#  history/qgshistoryentry.h
#  history/qgshistoryentrymodel.h
#  history/qgshistoryentrynode.h
#  history/qgshistoryprovider.h
#  history/qgshistoryproviderregistry.h
#  history/qgshistorywidget.h
#  history/qgshistorywidgetcontext.h

  labeling/qgslabelengineconfigdialog.h
  labeling/qgslabelinggui.h
  labeling/qgslabelingwidget.h
  labeling/qgslabellineanchorwidget.h
  labeling/qgslabelobstaclesettingswidget.h
  labeling/qgslabelsettingswidgetbase.h
  labeling/qgsrulebasedlabelingwidget.h

  layertree/qgscustomlayerorderwidget.h
  layertree/qgslayertreeembeddedconfigwidget.h
  layertree/qgslayertreeembeddedwidgetregistry.h
  layertree/qgslayertreeembeddedwidgetsimpl.h
  layertree/qgslayertreemapcanvasbridge.h
  layertree/qgslayertreeview.h
  layertree/qgslayertreeviewdefaultactions.h
  layertree/qgslayertreeviewindicator.h
  layertree/qgslayertreeviewitemdelegate.h

  layout/qgsgeopdflayertreemodel.h
  layout/qgslayoutaddpagesdialog.h
  layout/qgslayoutguiutils.h
  layout/qgslayoutatlaswidget.h
  layout/qgslayoutattributeselectiondialog.h
  layout/qgslayoutattributetablewidget.h
  layout/qgslayoutcombobox.h
  layout/qgslayoutcustomdrophandler.h
  layout/qgslayoutdesignerinterface.h
  layout/qgslayoutelevationprofilewidget.h
  layout/qgslayoutguidewidget.h
  layout/qgslayouthtmlwidget.h
  layout/qgslayoutimageexportoptionsdialog.h
  layout/qgslayoutitemcombobox.h
  layout/qgslayoutitemguiregistry.h
  layout/qgslayoutitemslistview.h
  layout/qgslayoutitemwidget.h
  layout/qgslayoutlabelwidget.h
  layout/qgslayoutlegendlayersdialog.h
  layout/qgslayoutlegendwidget.h
  layout/qgslayoutmanualtablewidget.h
  layout/qgslayoutmapgridwidget.h
  layout/qgslayoutmapwidget.h
  layout/qgslayoutmarkerwidget.h
  layout/qgslayoutmousehandles.h
  layout/qgslayoutnewitempropertiesdialog.h
  layout/qgslayoutpagepropertieswidget.h
  layout/qgslayoutpdfexportoptionsdialog.h
  layout/qgslayoutpicturewidget.h
  layout/qgslayoutpolygonwidget.h
  layout/qgslayoutpolylinewidget.h
  layout/qgslayoutpropertieswidget.h
  layout/qgslayoutqptdrophandler.h
  layout/qgslayoutreportsectionlabel.h
  layout/qgslayoutruler.h
  layout/qgslayoutscalebarwidget.h
  layout/qgslayoutshapewidget.h
  layout/qgslayouttablebackgroundcolorsdialog.h
  layout/qgslayoutunitscombobox.h
  layout/qgslayoutvaliditychecks.h
  layout/qgslayoutview.h
  layout/qgslayoutviewmouseevent.h
  layout/qgslayoutviewrubberband.h
  layout/qgslayoutviewtool.h
  layout/qgslayoutviewtooladditem.h
  layout/qgslayoutviewtooladdnodeitem.h
  layout/qgslayoutviewtooleditnodes.h
  layout/qgslayoutviewtoolmoveitemcontent.h
  layout/qgslayoutviewtoolpan.h
  layout/qgslayoutviewtoolselect.h
  layout/qgslayoutviewtooltemporarykeypan.h
  layout/qgslayoutviewtooltemporarykeyzoom.h
  layout/qgslayoutviewtooltemporarymousepan.h
  layout/qgslayoutviewtoolzoom.h

  locator/qgslocatorwidget.h

  maptools/qgsmaptoolshapeabstract.h
  maptools/qgsmaptoolcapturelayergeometry.h
  maptools/qgsmaptoolshaperegistry.h

  mesh/qgsmeshlayerproperties.h
  mesh/qgsrenderermeshpropertieswidget.h
  mesh/qgsmeshdatasetgrouptreeview.h
  mesh/qgsmeshdatasetgrouptreewidget.h
  mesh/qgsmeshrenderer3daveragingwidget.h
  mesh/qgsmeshrenderermeshsettingswidget.h
  mesh/qgsmeshrendererscalarsettingswidget.h
  mesh/qgsmeshrenderervectorsettingswidget.h
  mesh/qgsmeshrendereractivedatasetwidget.h
  mesh/qgsmeshstaticdatasetwidget.h
  mesh/qgsmeshvariablestrokewidthwidget.h

  numericformats/qgsnumericformatselectorwidget.h
  numericformats/qgsnumericformatwidget.h
  numericformats/qgsnumericformatguiregistry.h

  ogr/qgsnewogrconnection.h
  ogr/qgsogrhelperfunctions.h
  ogr/qgsvectorlayersaveasdialog.h

  plot/qgsplotcanvas.h
  plot/qgsplotcanvasitem.h
  plot/qgsplotmouseevent.h
  plot/qgsplotrubberband.h
  plot/qgsplottool.h
  plot/qgsplottoolpan.h
  plot/qgsplottoolxaxiszoom.h
  plot/qgsplottoolzoom.h
  plot/qgsplottransienttools.h

  pointcloud/qgspointcloudattributebyramprendererwidget.h
  pointcloud/qgspointcloudclassifiedrendererwidget.h
  pointcloud/qgspointcloudextentrendererwidget.h
  pointcloud/qgspointcloudlayersaveasdialog.h
  pointcloud/qgspointcloudrendererwidget.h
  pointcloud/qgspointcloudrendererpropertieswidget.h
  pointcloud/qgspointcloudrgbrendererwidget.h

  processing/qgsprocessingaggregatewidgets.h
  processing/qgsprocessingaggregatewidgetwrapper.h
  processing/qgsprocessingalgorithmconfigurationwidget.h
  processing/qgsprocessingalgorithmdialogbase.h
  processing/qgsprocessingbatchalgorithmdialogbase.h
  processing/qgsprocessingconfigurationwidgets.h
#   processing/qgsprocessingdxflayerswidgetwrapper.h
  processing/qgsprocessingenummodelerwidget.h
  processing/qgsprocessingfeaturesourceoptionswidget.h
  processing/qgsprocessingfieldmapwidgetwrapper.h
  processing/qgsprocessinggui.h
  processing/qgsprocessingguiregistry.h
  processing/qgsprocessinghelpeditorwidget.h
#  processing/qgsprocessinghistoryprovider.h
#  processing/qgsprocessinghistorywidget.h
  processing/qgsprocessingmaplayercombobox.h
  processing/qgsprocessingmatrixmodelerwidget.h
  processing/qgsprocessingmatrixparameterdialog.h
  processing/qgsprocessingmeshdatasetwidget.h
  processing/qgsprocessingmodelerparameterwidget.h
  processing/qgsprocessingmultipleselectiondialog.h
  processing/qgsprocessingoutputdestinationwidget.h
  processing/qgsprocessingparameterdefinitionwidget.h
  processing/qgsprocessingparameterswidget.h
  processing/qgsprocessingpointcloudexpressionlineedit.h
  processing/qgsprocessingrecentalgorithmlog.h
  processing/qgsprocessingtininputlayerswidget.h
  processing/qgsprocessingtoolboxmodel.h
  processing/qgsprocessingtoolboxtreeview.h
#   processing/qgsprocessingvectortilewriterlayerswidgetwrapper.h
  processing/qgsprocessingwidgetwrapper.h
  processing/qgsprocessingwidgetwrapperimpl.h

  processing/models/qgsmodelarrowitem.h
  processing/models/qgsmodelcomponentgraphicitem.h
  processing/models/qgsmodeldesignerdialog.h
  processing/models/qgsmodeldesignerinputstreewidget.h
  processing/models/qgsmodelgraphicitem.h
  processing/models/qgsmodelgraphicsscene.h
  processing/models/qgsmodelgraphicsview.h
  processing/models/qgsmodelgroupboxdefinitionwidget.h
  processing/models/qgsmodelinputreorderwidget.h
  processing/models/qgsmodeloutputreorderwidget.h
  processing/models/qgsmodelsnapper.h
  processing/models/qgsmodelundocommand.h
  processing/models/qgsmodelviewmouseevent.h
  processing/models/qgsmodelviewmousehandles.h
  processing/models/qgsmodelviewrubberband.h
  processing/models/qgsmodelviewtool.h
  processing/models/qgsmodelviewtoolpan.h
  processing/models/qgsmodelviewtoolselect.h
  processing/models/qgsmodelviewtooltemporarykeypan.h
  processing/models/qgsmodelviewtooltemporarykeyzoom.h
  processing/models/qgsmodelviewtooltemporarymousepan.h
  processing/models/qgsmodelviewtoolzoom.h

  providers/qgsabstractdbsourceselect.h
  providers/qgspointcloudsourceselect.h
  providers/qgspointcloudproviderguimetadata.h

  providers/gdal/qgsgdalfilesourcewidget.h
  providers/gdal/qgsgdalguiprovider.h
  providers/gdal/qgsgdalsourceselect.h

#  providers/mbtilesvectortiles/qgsmbtilesvectortileguiprovider.h
#  providers/mbtilesvectortiles/qgsmbtilesvectortilesourcewidget.h

  providers/ogr/qgsgeopackageitemguiprovider.h
  providers/ogr/qgsgeopackageprojectstoragedialog.h
  providers/ogr/qgsgeopackageprojectstorageguiprovider.h
  providers/ogr/qgsogrdbsourceselect.h
  providers/ogr/qgsogrdbtablemodel.h
  providers/ogr/qgsogrguiprovider.h
  providers/ogr/qgsogritemguiprovider.h
  providers/ogr/qgsogrsourceselect.h

#  providers/vtpkvectortiles/qgsvtpkvectortileguiprovider.h
#  providers/vtpkvectortiles/qgsvtpkvectortilesourcewidget.h

  raster/qgsrasterattributetablewidget.h
  raster/qgscreaterasterattributetabledialog.h
  raster/qgsloadrasterattributetabledialog.h
  raster/qgsrasterattributetabledialog.h
  raster/qgsrasterattributetableaddcolumndialog.h
  raster/qgsrasterattributetableaddrowdialog.h
  raster/qgscolorrampshaderwidget.h
  raster/qgshillshaderendererwidget.h
  raster/qgsmultibandcolorrendererwidget.h
  raster/qgspalettedrendererwidget.h
  raster/qgsrasterattributetablemodel.h
  raster/qgsrasterbandcombobox.h
  raster/qgsrastercontourrendererwidget.h
  raster/qgsrasterhistogramwidget.h
  raster/qgsrasterminmaxwidget.h
  raster/qgsrasterrendererwidget.h
  raster/qgsrastertransparencywidget.h
  raster/qgsrendererrasterpropertieswidget.h
  raster/qgssinglebandgrayrendererwidget.h
  raster/qgssinglebandpseudocolorrendererwidget.h
  raster/qgsrasterlayerproperties.h
  raster/qgsrasterlayertemporalpropertieswidget.h
  raster/qgsresamplingutils.h

  vector/qgsattributeactiondialog.h
  vector/qgsattributeactionpropertiesdialog.h
  vector/qgsattributesforminitcode.h
  vector/qgsattributesformproperties.h
  vector/qgsdiagramproperties.h
  vector/qgsfieldcalculator.h
  vector/qgsjoindialog.h
  vector/qgssourcefieldsproperties.h
  vector/qgsvectorlayerlegendwidget.h
  vector/qgsvectorlayerproperties.h
  vector/qgsvectorlayersavestyledialog.h
  vector/qgswmsdimensiondialog.h

  symbology/characterwidget.h
  symbology/qgs25drendererwidget.h
  symbology/qgsarrowsymbollayerwidget.h
  symbology/qgsbrushstylecombobox.h
  symbology/qgscategorizedsymbolrendererwidget.h
  symbology/qgscptcitycolorrampdialog.h
  symbology/qgsdashspacedialog.h
  symbology/qgsdatadefinedsizelegendwidget.h
  symbology/qgsellipsesymbollayerwidget.h
  symbology/qgsembeddedsymbolrendererwidget.h
  symbology/qgsgraduatedhistogramwidget.h
  symbology/qgsgraduatedsymbolrendererwidget.h
  symbology/qgsheatmaprendererwidget.h
  symbology/qgsinterpolatedlinesymbollayerwidget.h
  symbology/qgsinvertedpolygonrendererwidget.h
  symbology/qgslayerpropertieswidget.h
  symbology/qgsmergedfeaturerendererwidget.h
  symbology/qgsnullsymbolrendererwidget.h
  symbology/qgsmasksymbollayerwidget.h
  symbology/qgspenstylecombobox.h
  symbology/qgspointclusterrendererwidget.h
  symbology/qgspointdisplacementrendererwidget.h
  symbology/qgsrendererpropertiesdialog.h
  symbology/qgsrendererwidget.h
  symbology/qgsrulebasedrendererwidget.h
  symbology/qgssinglesymbolrendererwidget.h
  symbology/qgssmartgroupeditordialog.h
  symbology/qgsstyleexportimportdialog.h
  symbology/qgsstylegroupselectiondialog.h
  symbology/qgsstylemanagerdialog.h
  symbology/qgsstylesavedialog.h
  symbology/qgssvgselectorwidget.h
  symbology/qgssymbolanimationsettingswidget.h
  symbology/qgssymbollayerwidget.h
  symbology/qgssymbollevelsdialog.h
  symbology/qgssymbolselectordialog.h
  symbology/qgssymbolslistwidget.h
  symbology/qgssymbolwidgetcontext.h
  symbology/qgsvectorfieldsymbollayerwidget.h

  sensor/qgssensorguiregistry.h
  sensor/qgssensorwidget.h

  settings/qgssettingseditorwidgetwrapper.h
  settings/qgssettingseditorwidgetwrapperimpl.h
  settings/qgssettingseditorwidgetregistry.h
  settings/qgssettingsregistrygui.h
  settings/qgssettingstreemodel.h
  settings/qgssettingstreewidget.h

  tableeditor/qgstableeditordialog.h
  tableeditor/qgstableeditorformattingwidget.h
  tableeditor/qgstableeditorwidget.h

#  vectortile/qgsarcgisvectortileconnectiondialog.h
#  vectortile/qgsvectortilebasiclabelingwidget.h
#  vectortile/qgsvectortilebasicrendererwidget.h
#  vectortile/qgsvectortileconnectiondialog.h
#  vectortile/qgsvectortiledataitemguiprovider.h
#  vectortile/qgsvectortileproviderguimetadata.h
#  vectortile/qgsvectortilesourceselect.h
#  vectortile/qgsvectortilelayerproperties.h

  qgsbrowserdockwidget_p.h

  editorwidgets/qgsqmlwidgetwrapper.h
)


# set(QGIS_GUI_UI_HDRS
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsadvanceddigitizingdockwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsadvanceddigitizingfloaterbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthauthoritieseditor.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthcertificateinfo.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthcertificatemanager.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigedit.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigeditor.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigidedit.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfigselect.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsettingswidget.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthconfiguriedit.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsautheditorwidgets.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthidentitieseditor.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthimportcertdialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthimportidentitydialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthmethodplugins.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthserverseditor.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslconfigwidget.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslerrorsdialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslimportdialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthsslimporterrors.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsauthtrustedcasdialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgscredentialdialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgscrsdefinitionwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsdetaileditemwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionbuilderdialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionstoredialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionbuilder.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionselectiondialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsfeaturefilterwidget.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsgenericprojectionselectorbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgshttpheaderwidget.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmessagelogviewer.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmessageviewer.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsnewvectortabledialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsowssourceselectbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsarcgisservicesourceselectbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsprojectionselectorbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsrasterlayerpropertiesbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsquerybuilderbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsqueryresultwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgssqlcomposerdialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgssublayersdialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgstablewidgetuibase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsrendererpropsdialogbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgseffectstackpropertieswidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutnewpagedialog.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutguidewidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutimageexportoptions.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutitemwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutpagepropertieswidget.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgspdfexportoptions.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayoutwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsrenderercontainerbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsvectorlayerpropertiesbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgslayertreeembeddedconfigwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmeshlayerpropertiesbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmeshdatasetgrouptreewidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsmeshstaticdatasetwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgstemporalcontrollerwidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsprocessingtinmeshdatawidgetbase.h
#   ${CMAKE_CURRENT_BINARY_DIR}/../ui/ui_qgsexpressionpreviewbase.h
# )

if(ENABLE_MODELTEST)
  include_directories(../../tests/qt_modeltest)
endif()

if (WITH_EPT)
  set(QGIS_GUI_SRCS ${QGIS_GUI_SRCS}
    providers/ept/qgseptproviderguimetadata.cpp
  )
  set(QGIS_GUI_HDRS ${QGIS_GUI_HDRS}
    providers/ept/qgseptproviderguimetadata.h
  )
endif()

if (WITH_COPC)
  set(QGIS_GUI_SRCS ${QGIS_GUI_SRCS}
    providers/copc/qgscopcproviderguimetadata.cpp
  )
  set(QGIS_GUI_HDRS ${QGIS_GUI_HDRS}
    providers/copc/qgscopcproviderguimetadata.h
  )
endif()


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

add_library(${LIB_NAME} SHARED ${QGIS_GUI_SRCS} ${QGIS_GUI_HDRS})

# require c++17
target_compile_features(${LIB_NAME} PRIVATE cxx_std_17)

target_include_directories(${LIB_NAME} SYSTEM PRIVATE
  ${QT_QTUITOOLS_INCLUDE_DIR}
)

# if (BUILD_WITH_QT6)
#   target_include_directories(${LIB_NAME} SYSTEM PRIVATE
#     ${${QT_VERSION_BASE}Svg_INCLUDE_DIRS}
#   )
# endif()

if (WITH_PDAL)
  include_directories(SYSTEM ${PDAL_INCLUDE_DIR})
  if(MSVC)
    add_definitions(-DWIN32_LEAN_AND_MEAN)
  endif()
endif()

target_include_directories(${LIB_NAME} PUBLIC
    actions
    annotations
    attributeformconfig
    symbology
    attributetable
    auth
    callouts
    codeeditors
    devtools
    editorwidgets
    editorwidgets/core
    effects
    elevation
#   ${CMAKE_SOURCE_DIR}/src/gui/history
    labeling
    layertree
    layout
    locator
    mesh
    maptools
    numericformats
    ogr
    plot
    processing
    processing/models
    providers
    providers/gdal
    providers/mbtilesvectortiles
    providers/ogr
#    vtpkvectortiles
    pointcloud
    raster
    sensor
    settings
    tableeditor
    vector
#   ${CMAKE_SOURCE_DIR}/src/gui/vectortile

    ${CMAKE_SOURCE_DIR}/src/native
    ${CMAKE_BINARY_DIR}/src/native
    ${CMAKE_BINARY_DIR}/src/gui
    ${CMAKE_BINARY_DIR}/src/ui

    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}

    ${QSCINTILLA_INCLUDE_DIRS}/qscintilla
    ${QWT_INCLUDE_DIRS}/qwt
)

if(IS_MULTI_CONFIG_GENERATOR)
    target_include_directories(${LIB_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${NG_PREFIX}qgis_gui_autogen/include_${CMAKE_BUILD_TYPE}>
    )
else()
    target_include_directories(${LIB_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/${NG_PREFIX}qgis_gui_autogen/include>
    )
endif()

if(OSX_FRAMEWORK)
    target_include_directories(${LIB_NAME} PUBLIC
        ${CMAKE_SOURCE_DIR}/src/native/mac
    )
elseif(WIN32)
    target_include_directories(${LIB_NAME} PUBLIC
        ${CMAKE_SOURCE_DIR}/src/native/win
    )
else()
    target_include_directories(${LIB_NAME} PUBLIC
        ${CMAKE_SOURCE_DIR}/src/native/linux
    )
endif()

if (WITH_EPT)
  target_include_directories(${LIB_NAME} PUBLIC
    providers/ept
  )
endif()

if (WITH_COPC)
  target_include_directories(qgis_gui PUBLIC
    ${CMAKE_SOURCE_DIR}/src/gui/providers/copc
  )
endif()

generate_export_header(
    ${LIB_NAME}
    BASE_NAME GUI
    EXPORT_FILE_NAME qgis_gui.h
)

set(QGIS_GUI_HDRS ${QGIS_GUI_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_gui.h)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER "org.qgis.qgis${FRAMEWORK_VERSION}_gui"
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_GUI_HDRS}"
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
# add_dependencies(${LIB_NAME} ui)

target_link_libraries(${LIB_NAME}
  ${NG_PREFIX}qgis_core
  ${NG_PREFIX}qgis_native
  ${QT_VERSION_BASE}::UiTools
  ${QWT_LIBRARY}
  ${QSCINTILLA_LIBRARY}
  ${QT_VERSION_BASE}::QuickWidgets
  ${QT_VERSION_BASE}::Multimedia
  ${QT_VERSION_BASE}::MultimediaWidgets
)

if (BUILD_WITH_QT6)
#   find_package(Qt6 COMPONENTS SvgWidgets REQUIRED)
  target_link_libraries(${LIB_NAME}
    ${QT_VERSION_BASE}::SvgWidgets
  )
endif()

if(ENABLE_MODELTEST)
  target_link_libraries(${LIB_NAME} ${QT_VERSION_BASE}::Test)
endif()

target_compile_definitions(${LIB_NAME} PRIVATE "-DQT_NO_FOREACH")


if(WIN32)
    add_definitions(-DQWT_DLL)
    add_definitions(-DQSCINTILLA_DLL)
endif()

# install

if(OSX_FRAMEWORK)
    add_custom_command(TARGET ${LIB_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
        VERBATIM
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
        INCLUDES DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
    install(FILES ${QGIS_GUI_HDRS} DESTINATION ${INSTALL_INC_DIR})
endif()
