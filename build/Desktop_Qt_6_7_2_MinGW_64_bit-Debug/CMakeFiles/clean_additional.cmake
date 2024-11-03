# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\auctionApplication_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\auctionApplication_autogen.dir\\ParseCache.txt"
  "auctionApplication_autogen"
  )
endif()
