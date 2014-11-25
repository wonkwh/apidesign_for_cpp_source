
# Declare the minimum version of cmake that we need
cmake_minimum_required(VERSION 2.8.7)

# Setup the name for this CMake project
project(APIBook)

# for Boost headers
# include_directories("${CMAKE_SOURCE_DIR}/external")


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -fno-inline")


# Specify the subdirectories to build
add_subdirectory(02_Qualities)
add_subdirectory(03_Pattern)
