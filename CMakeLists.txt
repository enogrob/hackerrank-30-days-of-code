cmake_minimum_required(VERSION 3.4)
project(hackerrank_30_days_of_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES dictionaries-and-maps.cpp )
add_executable(hackerrank_30_days_of_code ${SOURCE_FILES})

add_executable(loops challenges/loops.cpp)
add_executable(dictionaries-and-maps dictionaries-and-maps.cpp)