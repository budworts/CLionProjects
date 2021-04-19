cmake_minimum_required(VERSION 3.17)
project(Shape)

set(CMAKE_CXX_STANDARD 20)

add_executable(Shape main.cpp Shape.h Open_Shape.h Closed_Shape.h Line.h Circle.h Square.h)