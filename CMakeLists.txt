cmake_minimum_required(VERSION 3.14...3.28)

project(c_header VERSION 0.0.1 LANGUAGES CXX)

set(SON8PROJ son8${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(${SON8PROJ} INTERFACE)
add_subdirectory(source)
target_compile_features(${SON8PROJ} INTERFACE cxx_std_17)
target_include_directories(${SON8PROJ} INTERFACE include)
