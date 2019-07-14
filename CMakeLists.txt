cmake_minimum_required(VERSION 3.0)
project(freeplay-gpio C)

set(CMAKE_C_STANDARD 99)

add_executable(freeplay-gpio main.c)
target_link_libraries(freeplay-gpio wiringPi)
