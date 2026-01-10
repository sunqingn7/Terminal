cmake_minimum_required(VERSION 3.16)

project(TerminalEmulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

enable_testing()

add_subdirectory(3rdparty/qtermwidget)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/MainWindow.cpp
    src/SSHDialog.cpp
    src/ColorSchemeDialog.cpp
)

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Widgets
    qtermwidget6
)

# Tests
add_executable(test_app
    src/tests/test_main.cpp
)

target_link_libraries(test_app
    Qt6::Core
    Qt6::Widgets
    Qt6::Test
    qtermwidget6
)

add_test(NAME test_app COMMAND test_app)