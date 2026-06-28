cmake_minimum_required(VERSION 3.25)

set(GEODE_DONT_INCLUDE_DEFAULT_SRC TRUE)

project(mi_primer_mod_menu)

find_package(Geode REQUIRED)

add_geode_mod(
    ${PROJECT_NAME}
    VERSION 1.0.0
    SDK_VERSION 3.0.0-beta.1
    
    RESOURCES
        logo.png
    
    CODE
        src/main.cpp
)
