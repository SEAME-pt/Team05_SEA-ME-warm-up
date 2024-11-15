cmake_minimum_required(VERSION 3.10)

project(Car)

enable_testing()

# Include FetchContent for Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)

FetchContent_MakeAvailable(googletest)

# Main project source files
set(SOURCE_FILES
  Brake.cpp
  Wheel.cpp
  Car.cpp
  Transmission.cpp
  Engine.cpp
  Part.cpp
  Main.cpp
)

# Add main executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES} test/test.cpp)

# # Add test executable
# add_executable(my_tests tests/test_main.cpp)

# Link Google Test libraries to the test executable
target_link_libraries(Car PRIVATE gtest)

# Add tests to CTest
add_test(NAME MyTests COMMAND Car)