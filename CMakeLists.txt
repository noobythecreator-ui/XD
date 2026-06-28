cmake_minimum_required(VERSION 3.13)

# Esto le enseña a GitHub Actions dónde está el SDK de Geode
list(APPEND CMAKE_PREFIX_PATH $ENV{GEODE_SDK})

# Aquí pones el nombre exacto de tu mod
project(xdmod)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    VERSION v1.0.0
)

# Esto le dice al compilador dónde está tu código principal
target_sources(${PROJECT_NAME} PRIVATE src/main.cpp)

