cmake_minimum_required(VERSION 3.10)

project(Car)

set(SOURCE Brake.cpp Wheel.cpp Car.cpp Transmission.cpp Engine.cpp Part.cpp Main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})