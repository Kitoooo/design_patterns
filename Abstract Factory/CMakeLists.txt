cmake_minimum_required(VERSION 3.5)
project(Abstract_Factory LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Libs)

add_executable(main main.cpp)
target_link_libraries(main UIElements)
target_link_libraries(main UIFactory)


