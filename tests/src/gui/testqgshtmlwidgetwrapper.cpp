/***************************************************************************
    testqgshtmlwidgetwrapper.cpp
     --------------------------------------
    Date                 : September 2020
    Copyright            : (C) 2020 Julien Cabieces
    Email                : julien dot cabieces at oslandia dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifdef WITH_QTWEBKIT
#include <QWebFrame>
#endif

#include "qgstest.h"

#include "editorwidgets/core/qgseditorwidgetregistry.h"
#include "qgsapplication.h"
#include "qgshtmlwidgetwrapper.h"
#include "qgsgui.h"

class TestQgsHtmlWidgetWrapper : public QObject
{
    Q_OBJECT
  public:
    TestQgsHtmlWidgetWrapper() = default;

  private slots:
    void initTestCase(); // will be called before the first testfunction is executed.
    void cleanupTestCase(); // will be called after the last testfunction was executed.
    void init(); // will be called before each testfunction is executed.
    void cleanup(); // will be called after every testfunction.
    void testExpressionEvaluate_data();
    void testExpressionEvaluate();
};

void TestQgsHtmlWidgetWrapper::initTestCase()
{
  QgsApplication::init();
  QgsApplication::initQgis();
  QgsGui::editorWidgetRegistry()->initEditors();
}

void TestQgsHtmlWidgetWrapper::cleanupTestCase()
{
  QgsApplication::exitQgis();
}

void TestQgsHtmlWidgetWrapper::init()
{
}

void TestQgsHtmlWidgetWrapper::cleanup()
{
}

void TestQgsHtmlWidgetWrapper::testExpressionEvaluate_data()
{
  QTest::addColumn<QString>( "expression" );
  QTest::addColumn<bool>( "needsGeometry" );
  QTest::addColumn<QString>( "expectedText" );

  QTest::newRow( "with-geometry" ) << "geom_to_wkt($geometry)" << true << "The text is 'Point (0.5 0.5)'";
  QTest::newRow( "without-geometry" ) << "2+pk" << false << "The text is '3'";
}

void TestQgsHtmlWidgetWrapper::testExpressionEvaluate()
{
  QFETCH( QString, expression );
  QFETCH( bool, needsGeometry );
  QFETCH( QString, expectedText );

  QgsVectorLayer layer( QStringLiteral( "Point?crs=epsg:4326&field=pk:int" ), QStringLiteral( "layer" ), QStringLiteral( "memory" ) );
  QgsProject::instance()->addMapLayer( &layer, false, false );
  QgsFeature f( layer.fields() );
  f.setAttribute( QStringLiteral( "pk" ), 1 );
  f.setGeometry( QgsGeometry::fromWkt( QStringLiteral( "POINT(0.5 0.5)" ) ) );
  QVERIFY( f.isValid() );
  QVERIFY( f.geometry().isGeosValid() );
  QVERIFY( layer.dataProvider()->addFeature( f ) );

  QgsHtmlWidgetWrapper *htmlWrapper = new QgsHtmlWidgetWrapper( &layer, nullptr, nullptr );
  htmlWrapper->setHtmlCode( QStringLiteral( "The text is '<script>document.write(expression.evaluate(\"%1\"));</script>'" ).arg( expression ) );

  QgsWebView *webView = qobject_cast<QgsWebView *>( htmlWrapper->widget() );
  Q_ASSERT( webView );
  QCOMPARE( htmlWrapper->needsGeometry(), needsGeometry );

  htmlWrapper->setFeature( f );

#ifdef WITH_QTWEBKIT
  QCOMPARE( webView->page()->mainFrame()->toPlainText(), expectedText );
#endif

  QgsProject::instance()->removeMapLayer( &layer );
}

QGSTEST_MAIN( TestQgsHtmlWidgetWrapper )
#include "testqgshtmlwidgetwrapper.moc"
