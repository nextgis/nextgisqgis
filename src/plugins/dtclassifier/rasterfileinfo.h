/***************************************************************************
  rasterfileinfo.h
  Raster classification using decision tree
  -------------------
  begin                : Apr 20, 2011
  copyright            : (C) 2011 by Alexander Bruy
  email                : alexander.bruy@gmail.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef RASTERFILEINFO_H
#define RASTERFILEINFO_H

class QString;

class RasterFileInfo
{
  public:
    RasterFileInfo();
    RasterFileInfo( const QString& fileName );
    ~RasterFileInfo();

    void initFromFileName( const QString& fileName );

    void geoTransform( double* geoTransform );
    void invGeoTransform( double* geoTransform );
    void mapToPixel( double mapX, double mapY, double& pixX, double& pixY );
    void pixelToMap( double pixX, double pixY, double& mapX, double& mapY );

    int bandCount();
    double xSize();
    double ySize();
    double pixelSize();
    QString projection();

  private:
    void applyGeoTransform( double inX, double inY, bool invert, double& outX, double& outY );
    void invertGeoTransform();

    double mGeoTransform[ 6 ];
    double mInvGeoTransform[ 6 ];

    double mXSize;
    double mYSize;
    double mPixelSize;

    int mBandCount;

    QString mProjection;
};

#endif // RASTERFILEINFO_H
