# Install script for directory: /home/qing/Projects/Terminal/3rdparty/qtermwidget

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/qtermwidget6/translations/qtermwidget_ar.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_arn.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_ast.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_bg.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_ca.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_cs.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_cy.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_da.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_de.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_de_CH.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_el.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_es.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_et.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_fi.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_fr.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_gl.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_he.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_hr.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_hu.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_it.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_ja.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_ko.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_lg.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_lt.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_nb_NO.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_nl.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_oc.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_pl.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_pt.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_pt_BR.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_ru.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_si.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_sk.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_tr.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_uk.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_zh_CN.qm;/usr/local/share/qtermwidget6/translations/qtermwidget_zh_TW.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/qtermwidget6/translations" TYPE FILE FILES
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ar.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_arn.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ast.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_bg.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ca.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_cs.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_cy.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_da.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_de.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_de_CH.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_el.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_es.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_et.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_fi.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_fr.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_gl.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_he.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_hr.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_hu.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_it.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ja.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ko.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_lg.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_lt.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_nb_NO.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_nl.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_oc.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_pl.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_pt.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_pt_BR.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_ru.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_si.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_sk.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_tr.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_uk.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_zh_CN.qm"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6" TYPE FILE FILES "/home/qing/Projects/Terminal/build/qtermwidget6-config-version.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6/qtermwidget6-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6/qtermwidget6-targets.cmake"
         "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/CMakeFiles/Export/005334a06cf12f04b1be429ce79268bc/qtermwidget6-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6/qtermwidget6-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6/qtermwidget6-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6" TYPE FILE FILES "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/CMakeFiles/Export/005334a06cf12f04b1be429ce79268bc/qtermwidget6-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6" TYPE FILE FILES "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/CMakeFiles/Export/005334a06cf12f04b1be429ce79268bc/qtermwidget6-targets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qtermwidget6" TYPE FILE FILES
    "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/qtermwidget.h"
    "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/Emulation.h"
    "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/KeyboardTranslator.h"
    "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/Filter.h"
    "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/qtermwidget_interface.h"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/lib/qtermwidget_export.h"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/lib/qtermwidget_version.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/qtermwidget6/kb-layouts/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/qtermwidget6/kb-layouts" TYPE DIRECTORY FILES "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/kb-layouts/" FILES_MATCHING REGEX "/[^/]*\\.keytab$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Runtime" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/qtermwidget6/color-schemes/")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/qtermwidget6/color-schemes" TYPE DIRECTORY FILES "/home/qing/Projects/Terminal/3rdparty/qtermwidget/lib/color-schemes/" FILES_MATCHING REGEX "/[^/]*\\.[^/]*schem[^/]*$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/qtermwidget6.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/qtermwidget6" TYPE FILE FILES "/home/qing/Projects/Terminal/build/qtermwidget6-config.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtermwidget6.so.2.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtermwidget6.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/libqtermwidget6.so.2.0.0"
    "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/libqtermwidget6.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtermwidget6.so.2.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libqtermwidget6.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/libqtermwidget6.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/CMakeFiles/qtermwidget6.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

