cmake_minimum_required(VERSION 3.16)

project(TerminalEmulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(UPDATE_TRANSLATIONS OFF CACHE BOOL "Update source translation translations/*.ts files" FORCE)
set(BUILD_EXAMPLE OFF CACHE BOOL "Build example application. Default OFF." FORCE)
set(QTERMWIDGET_USE_UTEMPTER OFF CACHE BOOL "Uses libutempter on Linux or libulog on FreeBSD for login records." FORCE)
set(QTERMWIDGET_BUILD_PYTHON_BINDING OFF CACHE BOOL "Build python binding" FORCE)
set(USE_UTF8PROC OFF CACHE BOOL "Use libutf8proc for better Unicode support. Default OFF" FORCE)

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