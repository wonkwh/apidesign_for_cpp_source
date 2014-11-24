
# Declare the minimum version of cmake that we need
cmake_minimum_required(VERSION 2.4)

# Setup the name for this CMake project
project(APIBook)

# add our external include path (for Boost headers)
include_directories("${CMAKE_SOURCE_DIR}/external")

# compile with debug information and all warnings by default
if (CMAKE_COMPILER_IS_GNUCC)
  set(CMAKE_CXX_FLAGS "-g -Wall")
endif ()

# Specify the subdirectories to build
add_subdirectory(02_Qualities)
