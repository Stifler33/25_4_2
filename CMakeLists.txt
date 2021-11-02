cmake_minimum_required(VERSION 3.20)
project("25_4_2" VERSION 1.0)
set(CMAKE_CXX_STANDARD 14)
add_executable(PC main.cpp pc.h)
target_include_directories(PC PUBLIC include)
add_subdirectory(src)

