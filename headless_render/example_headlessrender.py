import os
import sys
import ctypes
import py_headlessrender

py_headlessrender.init([os.path.dirname(os.path.abspath(__file__))])

layer_path = str(sys.argv[1])
style_path = sys.argv[2]
width = int(sys.argv[3])
height = int(sys.argv[4])
output_path = sys.argv[5]

with open(style_path, 'r') as file:
    qmlString = file.read()

image = py_headlessrender.renderVector(layer_path, qmlString, width, height, 1)

res = (ctypes.c_char * image.size()).from_address(image.data())

f = open(output_path, 'wb')
f.write(bytes(res))
f.close()

py_headlessrender.deinit()
