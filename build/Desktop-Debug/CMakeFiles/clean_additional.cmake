# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ririrandom_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ririrandom_autogen.dir/ParseCache.txt"
  "ririrandom_autogen"
  )
endif()
