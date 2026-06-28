cmake_minimum_required(VERSION 3.13)

# Esta línea le enseña a CMake dónde instaló Geode el script de GitHub
list(APPEND CMAKE_PREFIX_PATH $ENV{GEODE_SDK})

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
