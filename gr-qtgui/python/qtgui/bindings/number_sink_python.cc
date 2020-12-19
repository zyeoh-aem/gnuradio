/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/qtgui/utils.h>
#include <qwt_legend.h>
#include <qwt_painter.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_zoomer.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_widget.h>
#include <qwt_symbol.h>

#include <gnuradio/qtgui/number_sink.h>
// pydoc.h is automatically generated in the build directory
#include <number_sink_pydoc.h>

void bind_number_sink(py::module& m)
{

    using number_sink = ::gr::qtgui::number_sink;


    py::class_<number_sink,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<number_sink>>(m, "number_sink", D(number_sink))

        .def(py::init(&number_sink::make),
             py::arg("itemsize"),
             py::arg("average") = 0,
             py::arg("graph_type") = ::gr::qtgui::graph_t::NUM_GRAPH_HORIZ,
             py::arg("nconnections") = 1,
             py::arg("parent") = nullptr,
             D(number_sink, make))


        .def("exec_", &number_sink::exec_, D(number_sink, exec_))


        .def("qwidget", &number_sink::qwidget, D(number_sink, qwidget))


        // .def("pyqwidget",&number_sink::pyqwidget,
        //     D(number_sink,pyqwidget)
        // )
        // For the sip conversion to python to work, the widget object
        // needs to be explicitly converted to long long.
        .def(
            "pyqwidget",
            [](std::shared_ptr<number_sink> p) {
                return PyLong_AsLongLong(p->pyqwidget());
            },
            D(number_sink, pyqwidget))


        .def("set_update_time",
             &number_sink::set_update_time,
             py::arg("t"),
             D(number_sink, set_update_time))


        .def("set_average",
             &number_sink::set_average,
             py::arg("avg"),
             D(number_sink, set_average))


        .def("set_graph_type",
             &number_sink::set_graph_type,
             py::arg("type"),
             D(number_sink, set_graph_type))


        .def("set_color",
             (void (number_sink::*)(
                 unsigned int, std::string const&, std::string const&)) &
                 number_sink::set_color,
             py::arg("which"),
             py::arg("min"),
             py::arg("max"),
             D(number_sink, set_color, 0))


        .def("set_color",
             (void (number_sink::*)(unsigned int, int, int)) & number_sink::set_color,
             py::arg("which"),
             py::arg("min"),
             py::arg("max"),
             D(number_sink, set_color, 1))


        .def("set_label",
             &number_sink::set_label,
             py::arg("which"),
             py::arg("label"),
             D(number_sink, set_label))


        .def("set_min",
             &number_sink::set_min,
             py::arg("which"),
             py::arg("min"),
             D(number_sink, set_min))


        .def("set_max",
             &number_sink::set_max,
             py::arg("which"),
             py::arg("max"),
             D(number_sink, set_max))


        .def("set_title",
             &number_sink::set_title,
             py::arg("title"),
             D(number_sink, set_title))


        .def("set_unit",
             &number_sink::set_unit,
             py::arg("which"),
             py::arg("unit"),
             D(number_sink, set_unit))


        .def("set_factor",
             &number_sink::set_factor,
             py::arg("which"),
             py::arg("factor"),
             D(number_sink, set_factor))


        .def("average", &number_sink::average, D(number_sink, average))


        .def("graph_type", &number_sink::graph_type, D(number_sink, graph_type))


        .def("color_min",
             &number_sink::color_min,
             py::arg("which"),
             D(number_sink, color_min))


        .def("color_max",
             &number_sink::color_max,
             py::arg("which"),
             D(number_sink, color_max))


        .def("label", &number_sink::label, py::arg("which"), D(number_sink, label))


        .def("min", &number_sink::min, py::arg("which"), D(number_sink, min))


        .def("max", &number_sink::max, py::arg("which"), D(number_sink, max))


        .def("title", &number_sink::title, D(number_sink, title))


        .def("unit", &number_sink::unit, py::arg("which"), D(number_sink, unit))


        .def("factor", &number_sink::factor, py::arg("which"), D(number_sink, factor))


        .def("enable_menu",
             &number_sink::enable_menu,
             py::arg("en") = true,
             D(number_sink, enable_menu))


        .def("enable_autoscale",
             &number_sink::enable_autoscale,
             py::arg("en") = true,
             D(number_sink, enable_autoscale))


        .def("reset", &number_sink::reset, D(number_sink, reset))

        ;
}