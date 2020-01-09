cmake_minimum_required(VERSION 3.10)
project(oop_exercise_03)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

add_executable(oop_exercise_03 main.cpp Figure.cpp Trapeze.cpp Square.cpp Rectangle.cpp Point.cpp)