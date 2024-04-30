set(UIFactory_SOURCES
    Src/LinuxUIFactory.cpp
    Src/WindowsUIFactory.cpp
    )

add_library(UIFactory ${UIFactory_SOURCES})
target_include_directories(UIFactory PUBLIC Inc ../UI_elements/Inc)
target_link_libraries(UIFactory PRIVATE UIElements) 