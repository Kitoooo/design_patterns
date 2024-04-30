set(UIElement_SOURCES
    Src/LinuxAlert.cpp
    Src/WindowsAlert.cpp
    Src/LinuxButton.cpp
    Src/WindowsButton.cpp
    )

add_library(UIElements ${UIElement_SOURCES})
target_include_directories(UIElements PUBLIC ./Inc)