/***************************************************************************
    qgscolorbrewerpalette.cpp
    ---------------------
    begin                : November 2009
    copyright            : (C) 2009 by Martin Dobias
    email                : wonder dot sk at gmail dot com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgscolorbrewerpalette.h"

/*
Apache-Style Software License for ColorBrewer software and ColorBrewer Color Schemes

Copyright (c) 2002 Cynthia Brewer, Mark Harrower, and The Pennsylvania State University.

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
*/

// extracted ColorBrewer data
const char *QgsColorBrewerPalette::BREWER_STRING =
  "Spectral-3-252,141,89 255,255,191 153,213,148\n"
  "Spectral-4-215,25,28 253,174,97 171,221,164 43,131,186\n"
  "Spectral-5-215,25,28 253,174,97 255,255,191 171,221,164 43,131,186\n"
  "Spectral-6-213,62,79 252,141,89 254,224,139 230,245,152 153,213,148 50,136,189\n"
  "Spectral-7-213,62,79 252,141,89 254,224,139 255,255,191 230,245,152 153,213,148 50,136,189\n"
  "Spectral-8-213,62,79 244,109,67 253,174,97 254,224,139 230,245,152 171,221,164 102,194,165 50,136,189\n"
  "Spectral-9-213,62,79 244,109,67 253,174,97 254,224,139 255,255,191 230,245,152 171,221,164 102,194,165 50,136,189\n"
  "Spectral-10-158,1,66 213,62,79 244,109,67 253,174,97 254,224,139 230,245,152 171,221,164 102,194,165 50,136,189 94,79,162\n"
  "Spectral-11-158,1,66 213,62,79 244,109,67 253,174,97 254,224,139 255,255,191 230,245,152 171,221,164 102,194,165 50,136,189 94,79,162\n"
  "RdYlGn-3-252,141,89 255,255,191 145,207,96\n"
  "RdYlGn-4-215,25,28 253,174,97 166,217,106 26,150,65\n"
  "RdYlGn-5-215,25,28 253,174,97 255,255,191 166,217,106 26,150,65\n"
  "RdYlGn-6-215,48,39 252,141,89 254,224,139 217,239,139 145,207,96 26,152,80\n"
  "RdYlGn-7-215,48,39 252,141,89 254,224,139 255,255,191 217,239,139 145,207,96 26,152,80\n"
  "RdYlGn-8-215,48,39 244,109,67 253,174,97 254,224,139 217,239,139 166,217,106 102,189,99 26,152,80\n"
  "RdYlGn-9-215,48,39 244,109,67 253,174,97 254,224,139 255,255,191 217,239,139 166,217,106 102,189,99 26,152,80\n"
  "RdYlGn-10-165,0,38 215,48,39 244,109,67 253,174,97 254,224,139 217,239,139 166,217,106 102,189,99 26,152,80 0,104,55\n"
  "RdYlGn-11-165,0,38 215,48,39 244,109,67 253,174,97 254,224,139 255,255,191 217,239,139 166,217,106 102,189,99 26,152,80 0,104,55\n"
  "Set2-3-102,194,165 252,141,98 141,160,203\n"
  "Set2-4-102,194,165 252,141,98 141,160,203 231,138,195\n"
  "Set2-5-102,194,165 252,141,98 141,160,203 231,138,195 166,216,84\n"
  "Set2-6-102,194,165 252,141,98 141,160,203 231,138,195 166,216,84 255,217,47\n"
  "Set2-7-102,194,165 252,141,98 141,160,203 231,138,195 166,216,84 255,217,47 229,196,148\n"
  "Set2-8-102,194,165 252,141,98 141,160,203 231,138,195 166,216,84 255,217,47 229,196,148 179,179,179\n"
  "Accent-3-127,201,127 190,174,212 253,192,134\n"
  "Accent-4-127,201,127 190,174,212 253,192,134 255,255,153\n"
  "Accent-5-127,201,127 190,174,212 253,192,134 255,255,153 56,108,176\n"
  "Accent-6-127,201,127 190,174,212 253,192,134 255,255,153 56,108,176 240,2,127\n"
  "Accent-7-127,201,127 190,174,212 253,192,134 255,255,153 56,108,176 240,2,127 191,91,23\n"
  "Accent-8-127,201,127 190,174,212 253,192,134 255,255,153 56,108,176 240,2,127 191,91,23 102,102,102\n"
  "OrRd-3-254,232,200 253,187,132 227,74,51\n"
  "OrRd-4-254,240,217 253,204,138 252,141,89 215,48,31\n"
  "OrRd-5-254,240,217 253,204,138 252,141,89 227,74,51 179,0,0\n"
  "OrRd-6-254,240,217 253,212,158 253,187,132 252,141,89 227,74,51 179,0,0\n"
  "OrRd-7-254,240,217 253,212,158 253,187,132 252,141,89 239,101,72 215,48,31 153,0,0\n"
  "OrRd-8-255,247,236 254,232,200 253,212,158 253,187,132 252,141,89 239,101,72 215,48,31 153,0,0\n"
  "OrRd-9-255,247,236 254,232,200 253,212,158 253,187,132 252,141,89 239,101,72 215,48,31 179,0,0 127,0,0\n"
  "Set1-3-228,26,28 55,126,184 77,175,74\n"
  "Set1-4-228,26,28 55,126,184 77,175,74 152,78,163\n"
  "Set1-5-228,26,28 55,126,184 77,175,74 152,78,163 255,127,0\n"
  "Set1-6-228,26,28 55,126,184 77,175,74 152,78,163 255,127,0 255,255,51\n"
  "Set1-7-228,26,28 55,126,184 77,175,74 152,78,163 255,127,0 255,255,51 166,86,40\n"
  "Set1-8-228,26,28 55,126,184 77,175,74 152,78,163 255,127,0 255,255,51 166,86,40 247,129,191\n"
  "Set1-9-228,26,28 55,126,184 77,175,74 152,78,163 255,127,0 255,255,51 166,86,40 247,129,191 153,153,153\n"
  "PuBu-3-236,231,242 166,189,219 43,140,190\n"
  "PuBu-4-241,238,246 189,201,225 116,169,207 5,112,176\n"
  "PuBu-5-241,238,246 189,201,225 116,169,207 43,140,190 4,90,141\n"
  "PuBu-6-241,238,246 208,209,230 166,189,219 116,169,207 43,140,190 4,90,141\n"
  "PuBu-7-241,238,246 208,209,230 166,189,219 116,169,207 54,144,192 5,112,176 3,78,123\n"
  "PuBu-8-255,247,251 236,231,242 208,209,230 166,189,219 116,169,207 54,144,192 5,112,176 3,78,123\n"
  "PuBu-9-255,247,251 236,231,242 208,209,230 166,189,219 116,169,207 54,144,192 5,112,176 4,90,141 2,56,88\n"
  "Set3-3-141,211,199 255,255,179 190,186,218\n"
  "Set3-4-141,211,199 255,255,179 190,186,218 251,128,114\n"
  "Set3-5-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211\n"
  "Set3-6-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98\n"
  "Set3-7-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105\n"
  "Set3-8-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105 252,205,229\n"
  "Set3-9-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105 252,205,229 217,217,217\n"
  "Set3-10-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105 252,205,229 217,217,217 188,128,189\n"
  "Set3-11-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105 252,205,229 217,217,217 188,128,189 204,235,197\n"
  "Set3-12-141,211,199 255,255,179 190,186,218 251,128,114 128,177,211 253,180,98 179,222,105 252,205,229 217,217,217 188,128,189 204,235,197 255,237,111\n"
  "BuPu-3-224,236,244 158,188,218 136,86,167\n"
  "BuPu-4-237,248,251 179,205,227 140,150,198 136,65,157\n"
  "BuPu-5-237,248,251 179,205,227 140,150,198 136,86,167 129,15,124\n"
  "BuPu-6-237,248,251 191,211,230 158,188,218 140,150,198 136,86,167 129,15,124\n"
  "BuPu-7-237,248,251 191,211,230 158,188,218 140,150,198 140,107,177 136,65,157 110,1,107\n"
  "BuPu-8-247,252,253 224,236,244 191,211,230 158,188,218 140,150,198 140,107,177 136,65,157 110,1,107\n"
  "BuPu-9-247,252,253 224,236,244 191,211,230 158,188,218 140,150,198 140,107,177 136,65,157 129,15,124 77,0,75\n"
  "Dark2-3-27,158,119 217,95,2 117,112,179\n"
  "Dark2-4-27,158,119 217,95,2 117,112,179 231,41,138\n"
  "Dark2-5-27,158,119 217,95,2 117,112,179 231,41,138 102,166,30\n"
  "Dark2-6-27,158,119 217,95,2 117,112,179 231,41,138 102,166,30 230,171,2\n"
  "Dark2-7-27,158,119 217,95,2 117,112,179 231,41,138 102,166,30 230,171,2 166,118,29\n"
  "Dark2-8-27,158,119 217,95,2 117,112,179 231,41,138 102,166,30 230,171,2 166,118,29 102,102,102\n"
  "RdBu-3-239,138,98 247,247,247 103,169,207\n"
  "RdBu-4-202,0,32 244,165,130 146,197,222 5,113,176\n"
  "RdBu-5-202,0,32 244,165,130 247,247,247 146,197,222 5,113,176\n"
  "RdBu-6-178,24,43 239,138,98 253,219,199 209,229,240 103,169,207 33,102,172\n"
  "RdBu-7-178,24,43 239,138,98 253,219,199 247,247,247 209,229,240 103,169,207 33,102,172\n"
  "RdBu-8-178,24,43 214,96,77 244,165,130 253,219,199 209,229,240 146,197,222 67,147,195 33,102,172\n"
  "RdBu-9-178,24,43 214,96,77 244,165,130 253,219,199 247,247,247 209,229,240 146,197,222 67,147,195 33,102,172\n"
  "RdBu-10-103,0,31 178,24,43 214,96,77 244,165,130 253,219,199 209,229,240 146,197,222 67,147,195 33,102,172 5,48,97\n"
  "RdBu-11-103,0,31 178,24,43 214,96,77 244,165,130 253,219,199 247,247,247 209,229,240 146,197,222 67,147,195 33,102,172 5,48,97\n"
  "Oranges-3-254,230,206 253,174,107 230,85,13\n"
  "Oranges-4-254,237,222 253,190,133 253,141,60 217,71,1\n"
  "Oranges-5-254,237,222 253,190,133 253,141,60 230,85,13 166,54,3\n"
  "Oranges-6-254,237,222 253,208,162 253,174,107 253,141,60 230,85,13 166,54,3\n"
  "Oranges-7-254,237,222 253,208,162 253,174,107 253,141,60 241,105,19 217,72,1 140,45,4\n"
  "Oranges-8-255,245,235 254,230,206 253,208,162 253,174,107 253,141,60 241,105,19 217,72,1 140,45,4\n"
  "Oranges-9-255,245,235 254,230,206 253,208,162 253,174,107 253,141,60 241,105,19 217,72,1 166,54,3 127,39,4\n"
  "BuGn-3-229,245,249 153,216,201 44,162,95\n"
  "BuGn-4-237,248,251 178,226,226 102,194,164 35,139,69\n"
  "BuGn-5-237,248,251 178,226,226 102,194,164 44,162,95 0,109,44\n"
  "BuGn-6-237,248,251 204,236,230 153,216,201 102,194,164 44,162,95 0,109,44\n"
  "BuGn-7-237,248,251 204,236,230 153,216,201 102,194,164 65,174,118 35,139,69 0,88,36\n"
  "BuGn-8-247,252,253 229,245,249 204,236,230 153,216,201 102,194,164 65,174,118 35,139,69 0,88,36\n"
  "BuGn-9-247,252,253 229,245,249 204,236,230 153,216,201 102,194,164 65,174,118 35,139,69 0,109,44 0,68,27\n"
  "PiYG-3-233,163,201 247,247,247 161,215,106\n"
  "PiYG-4-208,28,139 241,182,218 184,225,134 77,172,38\n"
  "PiYG-5-208,28,139 241,182,218 247,247,247 184,225,134 77,172,38\n"
  "PiYG-6-197,27,125 233,163,201 253,224,239 230,245,208 161,215,106 77,146,33\n"
  "PiYG-7-197,27,125 233,163,201 253,224,239 247,247,247 230,245,208 161,215,106 77,146,33\n"
  "PiYG-8-197,27,125 222,119,174 241,182,218 253,224,239 230,245,208 184,225,134 127,188,65 77,146,33\n"
  "PiYG-9-197,27,125 222,119,174 241,182,218 253,224,239 247,247,247 230,245,208 184,225,134 127,188,65 77,146,33\n"
  "PiYG-10-142,1,82 197,27,125 222,119,174 241,182,218 253,224,239 230,245,208 184,225,134 127,188,65 77,146,33 39,100,25\n"
  "PiYG-11-142,1,82 197,27,125 222,119,174 241,182,218 253,224,239 247,247,247 230,245,208 184,225,134 127,188,65 77,146,33 39,100,25\n"
  "YlOrBr-3-255,247,188 254,196,79 217,95,14\n"
  "YlOrBr-4-255,255,212 254,217,142 254,153,41 204,76,2\n"
  "YlOrBr-5-255,255,212 254,217,142 254,153,41 217,95,14 153,52,4\n"
  "YlOrBr-6-255,255,212 254,227,145 254,196,79 254,153,41 217,95,14 153,52,4\n"
  "YlOrBr-7-255,255,212 254,227,145 254,196,79 254,153,41 236,112,20 204,76,2 140,45,4\n"
  "YlOrBr-8-255,255,229 255,247,188 254,227,145 254,196,79 254,153,41 236,112,20 204,76,2 140,45,4\n"
  "YlOrBr-9-255,255,229 255,247,188 254,227,145 254,196,79 254,153,41 236,112,20 204,76,2 153,52,4 102,37,6\n"
  "YlGn-3-247,252,185 173,221,142 49,163,84\n"
  "YlGn-4-255,255,204 194,230,153 120,198,121 35,132,67\n"
  "YlGn-5-255,255,204 194,230,153 120,198,121 49,163,84 0,104,55\n"
  "YlGn-6-255,255,204 217,240,163 173,221,142 120,198,121 49,163,84 0,104,55\n"
  "YlGn-7-255,255,204 217,240,163 173,221,142 120,198,121 65,171,93 35,132,67 0,90,50\n"
  "YlGn-8-255,255,229 247,252,185 217,240,163 173,221,142 120,198,121 65,171,93 35,132,67 0,90,50\n"
  "YlGn-9-255,255,229 247,252,185 217,240,163 173,221,142 120,198,121 65,171,93 35,132,67 0,104,55 0,69,41\n"
  "Reds-3-254,224,210 252,146,114 222,45,38\n"
  "Reds-4-254,229,217 252,174,145 251,106,74 203,24,29\n"
  "Reds-5-254,229,217 252,174,145 251,106,74 222,45,38 165,15,21\n"
  "Reds-6-254,229,217 252,187,161 252,146,114 251,106,74 222,45,38 165,15,21\n"
  "Reds-7-254,229,217 252,187,161 252,146,114 251,106,74 239,59,44 203,24,29 153,0,13\n"
  "Reds-8-255,245,240 254,224,210 252,187,161 252,146,114 251,106,74 239,59,44 203,24,29 153,0,13\n"
  "Reds-9-255,245,240 254,224,210 252,187,161 252,146,114 251,106,74 239,59,44 203,24,29 165,15,21 103,0,13\n"
  "RdPu-3-253,224,221 250,159,181 197,27,138\n"
  "RdPu-4-254,235,226 251,180,185 247,104,161 174,1,126\n"
  "RdPu-5-254,235,226 251,180,185 247,104,161 197,27,138 122,1,119\n"
  "RdPu-6-254,235,226 252,197,192 250,159,181 247,104,161 197,27,138 122,1,119\n"
  "RdPu-7-254,235,226 252,197,192 250,159,181 247,104,161 221,52,151 174,1,126 122,1,119\n"
  "RdPu-8-255,247,243 253,224,221 252,197,192 250,159,181 247,104,161 221,52,151 174,1,126 122,1,119\n"
  "RdPu-9-255,247,243 253,224,221 252,197,192 250,159,181 247,104,161 221,52,151 174,1,126 122,1,119 73,0,106\n"
  "Greens-3-229,245,224 161,217,155 49,163,84\n"
  "Greens-4-237,248,233 186,228,179 116,196,118 35,139,69\n"
  "Greens-5-237,248,233 186,228,179 116,196,118 49,163,84 0,109,44\n"
  "Greens-6-237,248,233 199,233,192 161,217,155 116,196,118 49,163,84 0,109,44\n"
  "Greens-7-237,248,233 199,233,192 161,217,155 116,196,118 65,171,93 35,139,69 0,90,50\n"
  "Greens-8-247,252,245 229,245,224 199,233,192 161,217,155 116,196,118 65,171,93 35,139,69 0,90,50\n"
  "Greens-9-247,252,245 229,245,224 199,233,192 161,217,155 116,196,118 65,171,93 35,139,69 0,109,44 0,68,27\n"
  "PRGn-3-175,141,195 247,247,247 127,191,123\n"
  "PRGn-4-123,50,148 194,165,207 166,219,160 0,136,55\n"
  "PRGn-5-123,50,148 194,165,207 247,247,247 166,219,160 0,136,55\n"
  "PRGn-6-118,42,131 175,141,195 231,212,232 217,240,211 127,191,123 27,120,55\n"
  "PRGn-7-118,42,131 175,141,195 231,212,232 247,247,247 217,240,211 127,191,123 27,120,55\n"
  "PRGn-8-118,42,131 153,112,171 194,165,207 231,212,232 217,240,211 166,219,160 90,174,97 27,120,55\n"
  "PRGn-9-118,42,131 153,112,171 194,165,207 231,212,232 247,247,247 217,240,211 166,219,160 90,174,97 27,120,55\n"
  "PRGn-10-64,0,75 118,42,131 153,112,171 194,165,207 231,212,232 217,240,211 166,219,160 90,174,97 27,120,55 0,68,27\n"
  "PRGn-11-64,0,75 118,42,131 153,112,171 194,165,207 231,212,232 247,247,247 217,240,211 166,219,160 90,174,97 27,120,55 0,68,27\n"
  "YlGnBu-3-237,248,177 127,205,187 44,127,184\n"
  "YlGnBu-4-255,255,204 161,218,180 65,182,196 34,94,168\n"
  "YlGnBu-5-255,255,204 161,218,180 65,182,196 44,127,184 37,52,148\n"
  "YlGnBu-6-255,255,204 199,233,180 127,205,187 65,182,196 44,127,184 37,52,148\n"
  "YlGnBu-7-255,255,204 199,233,180 127,205,187 65,182,196 29,145,192 34,94,168 12,44,132\n"
  "YlGnBu-8-255,255,217 237,248,177 199,233,180 127,205,187 65,182,196 29,145,192 34,94,168 12,44,132\n"
  "YlGnBu-9-255,255,217 237,248,177 199,233,180 127,205,187 65,182,196 29,145,192 34,94,168 37,52,148 8,29,88\n"
  "RdYlBu-3-252,141,89 255,255,191 145,191,219\n"
  "RdYlBu-4-215,25,28 253,174,97 171,217,233 44,123,182\n"
  "RdYlBu-5-215,25,28 253,174,97 255,255,191 171,217,233 44,123,182\n"
  "RdYlBu-6-215,48,39 252,141,89 254,224,144 224,243,248 145,191,219 69,117,180\n"
  "RdYlBu-7-215,48,39 252,141,89 254,224,144 255,255,191 224,243,248 145,191,219 69,117,180\n"
  "RdYlBu-8-215,48,39 244,109,67 253,174,97 254,224,144 224,243,248 171,217,233 116,173,209 69,117,180\n"
  "RdYlBu-9-215,48,39 244,109,67 253,174,97 254,224,144 255,255,191 224,243,248 171,217,233 116,173,209 69,117,180\n"
  "RdYlBu-10-165,0,38 215,48,39 244,109,67 253,174,97 254,224,144 224,243,248 171,217,233 116,173,209 69,117,180 49,54,149\n"
  "RdYlBu-11-165,0,38 215,48,39 244,109,67 253,174,97 254,224,144 255,255,191 224,243,248 171,217,233 116,173,209 69,117,180 49,54,149\n"
  "Paired-3-166,206,227 31,120,180 178,223,138\n"
  "Paired-4-166,206,227 31,120,180 178,223,138 51,160,44\n"
  "Paired-5-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153\n"
  "Paired-6-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28\n"
  "Paired-7-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111\n"
  "Paired-8-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111 255,127,0\n"
  "Paired-9-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111 255,127,0 202,178,214\n"
  "Paired-10-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111 255,127,0 202,178,214 106,61,154\n"
  "Paired-11-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111 255,127,0 202,178,214 106,61,154 255,255,153\n"
  "Paired-12-166,206,227 31,120,180 178,223,138 51,160,44 251,154,153 227,26,28 253,191,111 255,127,0 202,178,214 106,61,154 255,255,153 177,89,40\n"
  "BrBG-3-216,179,101 245,245,245 90,180,172\n"
  "BrBG-4-166,97,26 223,194,125 128,205,193 1,133,113\n"
  "BrBG-5-166,97,26 223,194,125 245,245,245 128,205,193 1,133,113\n"
  "BrBG-6-140,81,10 216,179,101 246,232,195 199,234,229 90,180,172 1,102,94\n"
  "BrBG-7-140,81,10 216,179,101 246,232,195 245,245,245 199,234,229 90,180,172 1,102,94\n"
  "BrBG-8-140,81,10 191,129,45 223,194,125 246,232,195 199,234,229 128,205,193 53,151,143 1,102,94\n"
  "BrBG-9-140,81,10 191,129,45 223,194,125 246,232,195 245,245,245 199,234,229 128,205,193 53,151,143 1,102,94\n"
  "BrBG-10-84,48,5 140,81,10 191,129,45 223,194,125 246,232,195 199,234,229 128,205,193 53,151,143 1,102,94 0,60,48\n"
  "BrBG-11-84,48,5 140,81,10 191,129,45 223,194,125 246,232,195 245,245,245 199,234,229 128,205,193 53,151,143 1,102,94 0,60,48\n"
  "Purples-3-239,237,245 188,189,220 117,107,177\n"
  "Purples-4-242,240,247 203,201,226 158,154,200 106,81,163\n"
  "Purples-5-242,240,247 203,201,226 158,154,200 117,107,177 84,39,143\n"
  "Purples-6-242,240,247 218,218,235 188,189,220 158,154,200 117,107,177 84,39,143\n"
  "Purples-7-242,240,247 218,218,235 188,189,220 158,154,200 128,125,186 106,81,163 74,20,134\n"
  "Purples-8-252,251,253 239,237,245 218,218,235 188,189,220 158,154,200 128,125,186 106,81,163 74,20,134\n"
  "Purples-9-252,251,253 239,237,245 218,218,235 188,189,220 158,154,200 128,125,186 106,81,163 84,39,143 63,0,125\n"
  "Pastel2-3-179,226,205 253,205,172 203,213,232\n"
  "Pastel2-4-179,226,205 253,205,172 203,213,232 244,202,228\n"
  "Pastel2-5-179,226,205 253,205,172 203,213,232 244,202,228 230,245,201\n"
  "Pastel2-6-179,226,205 253,205,172 203,213,232 244,202,228 230,245,201 255,242,174\n"
  "Pastel2-7-179,226,205 253,205,172 203,213,232 244,202,228 230,245,201 255,242,174 241,226,204\n"
  "Pastel2-8-179,226,205 253,205,172 203,213,232 244,202,228 230,245,201 255,242,174 241,226,204 204,204,204\n"
  "Pastel1-3-251,180,174 179,205,227 204,235,197\n"
  "Pastel1-4-251,180,174 179,205,227 204,235,197 222,203,228\n"
  "Pastel1-5-251,180,174 179,205,227 204,235,197 222,203,228 254,217,166\n"
  "Pastel1-6-251,180,174 179,205,227 204,235,197 222,203,228 254,217,166 255,255,204\n"
  "Pastel1-7-251,180,174 179,205,227 204,235,197 222,203,228 254,217,166 255,255,204 229,216,189\n"
  "Pastel1-8-251,180,174 179,205,227 204,235,197 222,203,228 254,217,166 255,255,204 229,216,189 253,218,236\n"
  "Pastel1-9-251,180,174 179,205,227 204,235,197 222,203,228 254,217,166 255,255,204 229,216,189 253,218,236 242,242,242\n"
  "GnBu-3-224,243,219 168,221,181 67,162,202\n"
  "GnBu-4-240,249,232 186,228,188 123,204,196 43,140,190\n"
  "GnBu-5-240,249,232 186,228,188 123,204,196 67,162,202 8,104,172\n"
  "GnBu-6-240,249,232 204,235,197 168,221,181 123,204,196 67,162,202 8,104,172\n"
  "GnBu-7-240,249,232 204,235,197 168,221,181 123,204,196 78,179,211 43,140,190 8,88,158\n"
  "GnBu-8-247,252,240 224,243,219 204,235,197 168,221,181 123,204,196 78,179,211 43,140,190 8,88,158\n"
  "GnBu-9-247,252,240 224,243,219 204,235,197 168,221,181 123,204,196 78,179,211 43,140,190 8,104,172 8,64,129\n"
  "Greys-3-240,240,240 189,189,189 99,99,99\n"
  "Greys-4-247,247,247 204,204,204 150,150,150 82,82,82\n"
  "Greys-5-247,247,247 204,204,204 150,150,150 99,99,99 37,37,37\n"
  "Greys-6-247,247,247 217,217,217 189,189,189 150,150,150 99,99,99 37,37,37\n"
  "Greys-7-247,247,247 217,217,217 189,189,189 150,150,150 115,115,115 82,82,82 37,37,37\n"
  "Greys-8-255,255,255 240,240,240 217,217,217 189,189,189 150,150,150 115,115,115 82,82,82 37,37,37\n"
  "Greys-9-255,255,255 240,240,240 217,217,217 189,189,189 150,150,150 115,115,115 82,82,82 37,37,37 0,0,0\n"
  "RdGy-3-239,138,98 255,255,255 153,153,153\n"
  "RdGy-4-202,0,32 244,165,130 186,186,186 64,64,64\n"
  "RdGy-5-202,0,32 244,165,130 255,255,255 186,186,186 64,64,64\n"
  "RdGy-6-178,24,43 239,138,98 253,219,199 224,224,224 153,153,153 77,77,77\n"
  "RdGy-7-178,24,43 239,138,98 253,219,199 255,255,255 224,224,224 153,153,153 77,77,77\n"
  "RdGy-8-178,24,43 214,96,77 244,165,130 253,219,199 224,224,224 186,186,186 135,135,135 77,77,77\n"
  "RdGy-9-178,24,43 214,96,77 244,165,130 253,219,199 255,255,255 224,224,224 186,186,186 135,135,135 77,77,77\n"
  "RdGy-10-103,0,31 178,24,43 214,96,77 244,165,130 253,219,199 224,224,224 186,186,186 135,135,135 77,77,77 26,26,26\n"
  "RdGy-11-103,0,31 178,24,43 214,96,77 244,165,130 253,219,199 255,255,255 224,224,224 186,186,186 135,135,135 77,77,77 26,26,26\n"
  "YlOrRd-3-255,237,160 254,178,76 240,59,32\n"
  "YlOrRd-4-255,255,178 254,204,92 253,141,60 227,26,28\n"
  "YlOrRd-5-255,255,178 254,204,92 253,141,60 240,59,32 189,0,38\n"
  "YlOrRd-6-255,255,178 254,217,118 254,178,76 253,141,60 240,59,32 189,0,38\n"
  "YlOrRd-7-255,255,178 254,217,118 254,178,76 253,141,60 252,78,42 227,26,28 177,0,38\n"
  "YlOrRd-8-255,255,204 255,237,160 254,217,118 254,178,76 253,141,60 252,78,42 227,26,28 177,0,38\n"
  "YlOrRd-9-255,255,204 255,237,160 254,217,118 254,178,76 253,141,60 252,78,42 227,26,28 189,0,38 128,0,38\n"
  "PuOr-3-241,163,64 247,247,247 153,142,195\n"
  "PuOr-4-230,97,1 253,184,99 178,171,210 94,60,153\n"
  "PuOr-5-230,97,1 253,184,99 247,247,247 178,171,210 94,60,153\n"
  "PuOr-6-179,88,6 241,163,64 254,224,182 216,218,235 153,142,195 84,39,136\n"
  "PuOr-7-179,88,6 241,163,64 254,224,182 247,247,247 216,218,235 153,142,195 84,39,136\n"
  "PuOr-8-179,88,6 224,130,20 253,184,99 254,224,182 216,218,235 178,171,210 128,115,172 84,39,136\n"
  "PuOr-9-179,88,6 224,130,20 253,184,99 254,224,182 247,247,247 216,218,235 178,171,210 128,115,172 84,39,136\n"
  "PuOr-10-127,59,8 179,88,6 224,130,20 253,184,99 254,224,182 216,218,235 178,171,210 128,115,172 84,39,136 45,0,75\n"
  "PuOr-11-127,59,8 179,88,6 224,130,20 253,184,99 254,224,182 247,247,247 216,218,235 178,171,210 128,115,172 84,39,136 45,0,75\n"
  "PuRd-3-231,225,239 201,148,199 221,28,119\n"
  "PuRd-4-241,238,246 215,181,216 223,101,176 206,18,86\n"
  "PuRd-5-241,238,246 215,181,216 223,101,176 221,28,119 152,0,67\n"
  "PuRd-6-241,238,246 212,185,218 201,148,199 223,101,176 221,28,119 152,0,67\n"
  "PuRd-7-241,238,246 212,185,218 201,148,199 223,101,176 231,41,138 206,18,86 145,0,63\n"
  "PuRd-8-247,244,249 231,225,239 212,185,218 201,148,199 223,101,176 231,41,138 206,18,86 145,0,63\n"
  "PuRd-9-247,244,249 231,225,239 212,185,218 201,148,199 223,101,176 231,41,138 206,18,86 152,0,67 103,0,31\n"
  "Blues-3-222,235,247 158,202,225 49,130,189\n"
  "Blues-4-239,243,255 189,215,231 107,174,214 33,113,181\n"
  "Blues-5-239,243,255 189,215,231 107,174,214 49,130,189 8,81,156\n"
  "Blues-6-239,243,255 198,219,239 158,202,225 107,174,214 49,130,189 8,81,156\n"
  "Blues-7-239,243,255 198,219,239 158,202,225 107,174,214 66,146,198 33,113,181 8,69,148\n"
  "Blues-8-247,251,255 222,235,247 198,219,239 158,202,225 107,174,214 66,146,198 33,113,181 8,69,148\n"
  "Blues-9-247,251,255 222,235,247 198,219,239 158,202,225 107,174,214 66,146,198 33,113,181 8,81,156 8,48,107\n"
  "PuBuGn-3-236,226,240 166,189,219 28,144,153\n"
  "PuBuGn-4-246,239,247 189,201,225 103,169,207 2,129,138\n"
  "PuBuGn-5-246,239,247 189,201,225 103,169,207 28,144,153 1,108,89\n"
  "PuBuGn-6-246,239,247 208,209,230 166,189,219 103,169,207 28,144,153 1,108,89\n"
  "PuBuGn-7-246,239,247 208,209,230 166,189,219 103,169,207 54,144,192 2,129,138 1,100,80\n"
  "PuBuGn-8-255,247,251 236,226,240 208,209,230 166,189,219 103,169,207 54,144,192 2,129,138 1,100,80\n"
  "PuBuGn-9-255,247,251 236,226,240 208,209,230 166,189,219 103,169,207 54,144,192 2,129,138 1,108,89 1,70,54";

QList<QColor> QgsColorBrewerPalette::listSchemeColors( const QString &schemeName, int colors )
{
  QList<QColor> pal;
  QString palette( BREWER_STRING );
  const QStringList list = palette.split( QChar( '\n' ) );
  for ( const QString &entry : list )
  {
    QStringList items = entry.split( QChar( '-' ) );
    if ( items.count() != 3 || items[0] != schemeName || items[1].toInt() != colors )
      continue;
    const QStringList colors = items[2].split( QChar( ' ' ) );
    for ( const QString &clr : colors )
    {
      pal << QgsSymbolLayerUtils::parseColor( clr );
    }
  }
  return pal;
}

QStringList QgsColorBrewerPalette::listSchemes()
{
  QStringList schemes;

  QString palette( BREWER_STRING );
  const QStringList list = palette.split( QChar( '\n' ) );
  for ( const QString &entry : list )
  {
    QStringList items = entry.split( QChar( '-' ) );
    if ( items.count() != 3 )
      continue;
    if ( !schemes.contains( items[0] ) )
      schemes << items[0];
  }
  return schemes;
}

QList<int> QgsColorBrewerPalette::listSchemeVariants( const QString &schemeName )
{
  QList<int> variants;

  QString palette( BREWER_STRING );
  const QStringList list = palette.split( QChar( '\n' ) );
  for ( const QString &entry : list )
  {
    QStringList items = entry.split( QChar( '-' ) );
    if ( items.count() != 3 || items[0] != schemeName )
      continue;
    variants << items[1].toInt();
  }

  return variants;
}