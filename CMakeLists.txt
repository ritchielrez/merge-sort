cmake_minimum_required(VERSION 3.10)
set(CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)

project(merge-sort VERSION 1.0)

add_executable(main src/main.cpp)

target_include_directories(main PRIVATE "include/")
