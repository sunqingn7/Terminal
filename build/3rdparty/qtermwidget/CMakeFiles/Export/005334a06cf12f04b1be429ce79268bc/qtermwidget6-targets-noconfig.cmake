#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qtermwidget6" for configuration ""
set_property(TARGET qtermwidget6 APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(qtermwidget6 PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libqtermwidget6.so.2.0.0"
  IMPORTED_SONAME_NOCONFIG "libqtermwidget6.so.2"
  )

list(APPEND _cmake_import_check_targets qtermwidget6 )
list(APPEND _cmake_import_check_files_for_qtermwidget6 "${_IMPORT_PREFIX}/lib/libqtermwidget6.so.2.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
