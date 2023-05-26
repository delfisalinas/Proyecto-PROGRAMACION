cmake_minimum_required(VERSION 3.24)
project(Proyecto_PROGRAMACION)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proyecto_PROGRAMACION
        cliente.cpp
        cliente.h)
