cmake_minimum_required(VERSION 3.14)
project(PlaygroundParent)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(vendor)

add_subdirectory(src)
add_subdirectory(tests)