cmake_minimum_required(VERSION 3.0)
project(freeplay_gpio C)

set(CMAKE_C_STANDARD 99)

add_executable(freeplay_gpio main.c)
target_link_libraries(freeplay_gpio wiringPi)
