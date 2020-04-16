cmake_minimum_required(VERSION 3.15)
project(PolymorphismLecture)

set(CMAKE_CXX_STANDARD 14)

add_executable(PolymorphismLecture main.cpp Shape.cpp Shape.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h Square.cpp Square.h)