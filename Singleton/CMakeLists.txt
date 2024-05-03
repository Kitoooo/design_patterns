cmake_minimum_required(VERSION 3.5)
project(Singleton LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)


add_library(Singleton Singleton.cpp)
target_include_directories(Singleton PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(main main.cpp)
target_link_libraries(main Singleton)

