cmake_minimum_required(VERSION 3.5)
project(ProxyPattern LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

set(ProxyPattern_SRC
    Src/BookParser.cpp
    Src/LazyBookParserProxy.cpp
)

add_library(ProxyPattern ${ProxyPattern_SRC})
target_include_directories(ProxyPattern PUBLIC ./Inc)

add_executable(main main.cpp)
target_link_libraries(main ProxyPattern)

