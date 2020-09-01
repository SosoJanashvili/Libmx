cmake_minimum_required(VERSION 3.16)
project(Libmx C)

set(CMAKE_C_STANDARD 11)

file(GLOB libmx_SRC
        "inc/*.h"
        "src/*.c"
        )

add_executable(libmx main.c ${libmx_SRC})
