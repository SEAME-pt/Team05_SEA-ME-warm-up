# Specify the minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.10)

# Define the project name as "PhoneBook" and set the project version to 1.0
project(PhoneBook VERSION 1.0)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Include the "include" directory to the list of directories for header file searches
# This means any headers in "include/" can be accessed by the source files
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find all the .cpp files in the "src" directory and store their paths in SRC_FILES
file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)

# Create an executable named "PhoneBook" using the source files found in the "src" directory
add_executable(PhoneBook ${SRC_FILES})
