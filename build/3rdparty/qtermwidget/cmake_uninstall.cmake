IF(NOT EXISTS "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/install_manifest.txt")
  MESSAGE(FATAL_ERROR "Cannot find install manifest: \"/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/install_manifest.txt\"")
ENDIF(NOT EXISTS "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/install_manifest.txt")

# this works on Linux, but not on mac.
#FILE(READ "/home/qing/Projects/Terminal/build/3rdparty/qtermwidget/install_manifest.txt" files)
#STRING(REGEX REPLACE "\n" ";" files "${files}")
#FOREACH(file ${files})
#  MESSAGE(STATUS "Uninstalling \"${file}\"")
#  IF(NOT EXISTS "${file}")
#    MESSAGE(FATAL_ERROR "File \"${file}\" does not exists.")
#  ENDIF(NOT EXISTS "${file}")
#  EXEC_PROGRAM("/usr/bin/cmake" ARGS "-E remove \"${file}\""
#    OUTPUT_VARIABLE rm_out
#    RETURN_VARIABLE rm_retval)
#  IF("${rm_retval}" GREATER 0)
#    MESSAGE(FATAL_ERROR "Problem when removing \"${file}\"")
#  ENDIF("${rm_retval}" GREATER 0)
#ENDFOREACH(file)

EXEC_PROGRAM("xargs rm < /home/qing/Projects/Terminal/build/install_manifest.txt"
            OUTPUT_VARIABLE rm_out
            RETURN_VARIABLE rm_ret)
