cmake_minimum_required(VERSION 3.16)

project(
    engine
    LANGUAGES CXX
    VERSION 0.1.0
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(engine_name engine)

add_subdirectory(RAII)
