cmake_minimum_required(VERSION 3.13)
project(opengl-cmake)
set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SRC_FILES "src/*")
include_directories(SYSTEM "include/glad/include")
add_executable(${PROJECT_NAME} ${SRC_FILES} "include/glad/src/glad.c")

file(GLOB_RECURSE CMAKE_FILES "cmake/*.cmake")
include(${CMAKE_FILES})