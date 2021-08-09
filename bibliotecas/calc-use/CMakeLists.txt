cmake_minimum_required(VERSION 3.20)
project(calc_use C)

set(CMAKE_C_STANDARD 99)

add_executable(calc_use main.c ../calc-lib/library.c)
