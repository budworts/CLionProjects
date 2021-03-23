cmake_minimum_required(VERSION 3.17)
project(PocoExample)
set(CMAKE_CXX_STANDARD 17)

set(POCO_PREFIX "/usr/local")
set(POCO_INCLUDE_DIR "${POCO_PREFIX}/include")
set(POCO_LIB_DIR "${POCO_PREFIX}/lib")
set(POCO_LIBS
#        "${POCO_LIB_DIR}/libPocoNet.a"
#        "${POCO_LIB_DIR}/libPocoUtil.a"
        "${POCO_LIB_DIR}/libPocoFoundation.a")

include_directories("${POCO_INCLUDE_DIR}")
link_libraries("${POCO_LIBS}")
add_executable(PocoExample main.cpp)
