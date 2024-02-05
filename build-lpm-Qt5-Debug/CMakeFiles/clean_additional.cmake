# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/lpm_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/lpm_autogen.dir/ParseCache.txt"
  "lpm_autogen"
  )
endif()
