<?xml version="1.0" encoding="utf-8" ?>
<ogr:FeatureCollection
     xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
     xsi:schemaLocation=""
     xmlns:ogr="http://ogr.maptools.org/"
     xmlns:gml="http://www.opengis.net/gml">
  <gml:boundedBy>
    <gml:Box>
      <gml:coord><gml:X>4</gml:X><gml:Y>-3</gml:Y></gml:coord>
      <gml:coord><gml:X>10</gml:X><gml:Y>5</gml:Y></gml:coord>
    </gml:Box>
  </gml:boundedBy>
                                                                                                                                                              
  <gml:featureMember>
    <ogr:extract_expression fid="polys.1">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>5,5 6,4 4,4 5,5</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>Aaaaa</ogr:name>
      <ogr:intval>-33</ogr:intval>
      <ogr:floatval>0</ogr:floatval>
    </ogr:extract_expression>
  </gml:featureMember>
  <gml:featureMember>
    <ogr:extract_expression fid="polys.3">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>6,1 10,1 10,-3 6,-3 6,1</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs><gml:innerBoundaryIs><gml:LinearRing><gml:coordinates>7,0 7,-2 9,-2 9,0 7,0</gml:coordinates></gml:LinearRing></gml:innerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>ASDF</ogr:name>
      <ogr:intval>0</ogr:intval>
    </ogr:extract_expression>
  </gml:featureMember>
</ogr:FeatureCollection>
