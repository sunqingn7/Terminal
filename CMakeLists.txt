cmake_minimum_required(VERSION 3.16)

project(TerminalEmulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_subdirectory(3rdparty/qtermwidget)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/SSHDialog.cpp
)

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Widgets
    qtermwidget6
)