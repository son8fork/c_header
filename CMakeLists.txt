cmake_minimum_required(VERSION 3.14...3.28)

project(c_header VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(source)
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_17)
target_include_directories(${PROJECT_NAME} INTERFACE include)

if (EXISTS "${CMAKE_SOURCE_DIR}/temp")
    add_subdirectory(temp)
endif()
