cmake_minimum_required(VERSION 3.10)

project(MaanMagi)

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

include_directories(${PROJECT_SOURCE_DIR})
add_executable(MaanMagi
	main.cpp)
