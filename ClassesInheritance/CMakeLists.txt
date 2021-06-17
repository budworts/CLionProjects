cmake_minimum_required(VERSION 3.19)
project(ClassesInheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(ClassesInheritance main.cpp Parent.cpp Parent.h Child.cpp Child.h GrandChild.cpp GrandChild.h ChildProtected.cpp ChildProtected.h GrandChildProtected.cpp GrandChildProtected.h)