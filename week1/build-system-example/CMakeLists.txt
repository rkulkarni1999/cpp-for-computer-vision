cmake_minimum_required(VERSION 3.22)

project(build-system-example)

set(CMAKE_CXX_STANDARD 17) # -std=c++17

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # This will generate a compile commands file, ie. a json file with all the compiler commands. 

# You can also add "include_directory(include)"

# Main part of the build. 
add_library(tools tools.cpp)
add_executable(main main.cpp)
target_link_libraries(main tools)