cmake_minimum_required(VERSION 3.27.0)

project(metainformation VERSION 0.0.2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD          20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(test)
