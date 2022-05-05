<?xml version="1.0" encoding="utf-8" ?>
<ogr:FeatureCollection
     xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
     xsi:schemaLocation="http://ogr.maptools.org/ join_polys_to_lines_largest_discard.xsd"
     xmlns:ogr="http://ogr.maptools.org/"
     xmlns:gml="http://www.opengis.net/gml">
  <gml:boundedBy>
    <gml:Box>
      <gml:coord><gml:X>-1</gml:X><gml:Y>-3</gml:Y></gml:coord>
      <gml:coord><gml:X>10</gml:X><gml:Y>6</gml:Y></gml:coord>
    </gml:Box>
  </gml:boundedBy>
                                                                                                                                                             
  <gml:featureMember>
    <ogr:join_polys_to_lines_largest_discard fid="polys.0">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>-1,-1 -1,3 3,3 3,2 2,2 2,-1 -1,-1</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>aaaaa</ogr:name>
      <ogr:intval>33</ogr:intval>
      <ogr:floatval>44.123456</ogr:floatval>
      <ogr:fid_2>join_lines_crossing_multiple_polygons.0</ogr:fid_2>
      <ogr:name_2>line4</ogr:name_2>
      <ogr:val xsi:nil="true"/>
    </ogr:join_polys_to_lines_largest_discard>
  </gml:featureMember>
  <gml:featureMember>
    <ogr:join_polys_to_lines_largest_discard fid="polys.2">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>2,5 2,6 3,6 3,5 2,5</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>bbaaa</ogr:name>
      <ogr:intval xsi:nil="true"/>
      <ogr:floatval>0.123</ogr:floatval>
      <ogr:fid_2>join_lines_crossing_multiple_polygons.3</ogr:fid_2>
      <ogr:name_2>line1</ogr:name_2>
      <ogr:val>11</ogr:val>
    </ogr:join_polys_to_lines_largest_discard>
  </gml:featureMember>
  <gml:featureMember>
    <ogr:join_polys_to_lines_largest_discard fid="polys.3">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>6,1 10,1 10,-3 6,-3 6,1</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs><gml:innerBoundaryIs><gml:LinearRing><gml:coordinates>7,0 7,-2 9,-2 9,0 7,0</gml:coordinates></gml:LinearRing></gml:innerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>ASDF</ogr:name>
      <ogr:intval>0</ogr:intval>
      <ogr:floatval xsi:nil="true"/>
      <ogr:fid_2>join_lines_crossing_multiple_polygons.3</ogr:fid_2>
      <ogr:name_2>line1</ogr:name_2>
      <ogr:val>11</ogr:val>
    </ogr:join_polys_to_lines_largest_discard>
  </gml:featureMember>
  <gml:featureMember>
    <ogr:join_polys_to_lines_largest_discard fid="polys.5">
      <ogr:geometryProperty><gml:Polygon srsName="EPSG:4326"><gml:outerBoundaryIs><gml:LinearRing><gml:coordinates>3,2 6,1 6,-3 2,-1 2,2 3,2</gml:coordinates></gml:LinearRing></gml:outerBoundaryIs></gml:Polygon></ogr:geometryProperty>
      <ogr:name>elim</ogr:name>
      <ogr:intval>2</ogr:intval>
      <ogr:floatval>3.33</ogr:floatval>
      <ogr:fid_2>join_lines_crossing_multiple_polygons.3</ogr:fid_2>
      <ogr:name_2>line1</ogr:name_2>
      <ogr:val>11</ogr:val>
    </ogr:join_polys_to_lines_largest_discard>
  </gml:featureMember>
</ogr:FeatureCollection>
