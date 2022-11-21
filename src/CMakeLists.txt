cmake_minimum_required(VERSION 3.2)
project(gamma-corrector)

set(SOURCE_FILES main.c)
add_executable(gamma-corrector ${SOURCE_FILES})
target_link_libraries(gamma-corrector m)
