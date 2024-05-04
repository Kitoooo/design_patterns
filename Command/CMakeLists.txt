cmake_minimum_required(VERSION 3.5)
project(CommandPattern LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

set(CommandPattern_SRC
    Src/LightOnCommand.cpp
    Src/LightOffCommand.cpp
    Src/LightReceiver.cpp
    Src/RemoteInvoker.cpp
)

add_library(CommandPattern ${CommandPattern_SRC})
target_include_directories(CommandPattern PUBLIC ./Inc)

add_executable(main main.cpp)
target_link_libraries(main CommandPattern)

