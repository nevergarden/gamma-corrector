cmake_minimum_required(VERSION 3.2)

project(gamma-corrector-project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/vendor/stb)
add_subdirectory(src)
