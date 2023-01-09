# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\u_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\u_autogen.dir\\ParseCache.txt"
  "u_autogen"
  )
endif()
