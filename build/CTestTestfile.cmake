# CMake generated Testfile for 
# Source directory: /home/qing/Projects/Terminal
# Build directory: /home/qing/Projects/Terminal/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_app "/home/qing/Projects/Terminal/build/test_app")
set_tests_properties(test_app PROPERTIES  _BACKTRACE_TRIPLES "/home/qing/Projects/Terminal/CMakeLists.txt;43;add_test;/home/qing/Projects/Terminal/CMakeLists.txt;0;")
subdirs("3rdparty/qtermwidget")
