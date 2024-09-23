cmake_minimum_required(VERSION 3.14...3.28)

project(c_header LANGUAGES CXX)

add_subdirectory(source)

target_include_directories(${PROJECT_NAME} INTERFACE include)
