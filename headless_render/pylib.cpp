#include "lib.h"

#include <pybind11.h>
#include <stl.h>
#include <numpy.h>

PYBIND11_MODULE(py_headlessrender, m) {

    pybind11::class_<HeadlessRender::Image, std::shared_ptr<HeadlessRender::Image>>(m, "Image")
            .def(pybind11::init<>())
            .def("size", &HeadlessRender::Image::getSize)
            .def("data",[](std::shared_ptr<HeadlessRender::Image> img) {
                return reinterpret_cast<uint64_t>(img->getData());
            });

    m.def("init", [](const std::vector<std::string> &args) {
        std::vector<char *> v;
        v.reserve(args.size());
        for (auto &s : args)
            v.push_back(const_cast<char *>(s.c_str()));
        return HeadlessRender::init(v.size(), v.data());
    }, "Library initialization");

    m.def("deinit", &HeadlessRender::deinit, "Library deinitialization");

    m.def("renderVector", &HeadlessRender::renderVector, "Render vector layer");

    m.def("rasterVector", &HeadlessRender::renderVector, "Render raster layer");

    m.def("getVersion", &HeadlessRender::getVersion, "Get library version");
}
