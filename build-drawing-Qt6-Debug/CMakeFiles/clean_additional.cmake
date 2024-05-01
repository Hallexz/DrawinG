# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/drawing_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/drawing_autogen.dir/ParseCache.txt"
  "drawing_autogen"
  )
endif()
