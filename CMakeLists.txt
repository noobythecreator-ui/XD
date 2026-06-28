cmake_minimum_required(VERSION 3.13)

# Esto fuerza a CMake a buscar los archivos de configuración dentro del SDK de Geode
set(CMAKE_PREFIX_PATH $ENV{GEODE_SDK} ${CMAKE_PREFIX_PATH})
list(APPEND CMAKE_MODULE_PATH $ENV{GEODE_SDK})

project(xdmod)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    VERSION v1.0.0
)

target_sources(${PROJECT_NAME} PRIVATE src/main.cpp)
