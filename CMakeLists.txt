cmake_minimum_required(VERSION 3.1)
project(meshtest)

add_subdirectory("jmeshlib")

set (CMAKE_CXX_STANDARD 11)

include_directories("jmeshlib/include")

add_executable(meshtest main.cpp)
target_link_libraries(meshtest PUBLIC jmeshlib)