cmake_minimum_required(VERSION 3.10)

project(SportsCar)

set(SOURCE Car.cpp SportsCar.cpp Main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})