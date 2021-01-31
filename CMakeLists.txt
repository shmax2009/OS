cmake_minimum_required(VERSION 3.17)
project(OS)

set(CMAKE_CXX_STANDARD 20)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)


add_executable(OS main.cpp API.cpp API.hpp)
target_link_libraries(OS sfml-graphics sfml-audio)