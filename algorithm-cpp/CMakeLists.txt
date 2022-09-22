cmake_minimum_required(VERSION 3.23)
project(algorithm_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm_cpp main.cpp)

add_executable(01-in-and-out basics/in-and-out.cpp)
add_executable(substr basics/substr.cpp)
add_executable(split basics/split.cpp)
add_executable(atoi basics/atoi.cpp)
add_executable(input-cin-by-string basics/input-cin-by-string.cpp)
add_executable(input-cin-by-scanf basics/input-cin-by-scanf.cpp)
add_executable(getline basics/getline.cpp)
add_executable(cout basics/cout.cpp)