cmake_minimum_required(VERSION 3.29)
project(VirtualBeckey)

set(CMAKE_CXX_STANDARD 20)

add_executable(VirtualBeckey main.cpp
)

#include_directories("C:/curl-8.10.1/curl-8.10.1/include")
#
#link_directories("C:/curl-8.10.1/curl-8.10.1/lib")
#
#target_link_libraries(VirtualBeckey PRIVATE libcurl_a)