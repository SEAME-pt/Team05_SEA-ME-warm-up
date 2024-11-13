cmake_minimum_required(VERSION 3.10)  # Requer uma versão mínima do CMake

# Definir o nome do projeto
project(Ex02StringConversion)

# Definir o padrão C++ a ser usado
set(CMAKE_CXX_STANDARD 17)

# Adicionar o arquivo fonte para compilar
add_executable(convert ex02/ex02.cpp)