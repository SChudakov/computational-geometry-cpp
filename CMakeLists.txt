cmake_minimum_required(VERSION 3.12)
project(computational_geometry)

set(CMAKE_CXX_STANDARD 14)

add_executable(computational_geometry convex_hull.cpp main.cpp convex_hull.hpp test_convex_hull.cpp point_util.cpp point_util.hpp)