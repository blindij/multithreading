cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(openmpx LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS_OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(OpenMP REQUIRED)
add_executable(example.x src/example_openmp.cpp)
target_link_libraries(example.x
   PUBLIC
      OpenMP::OpenMP_CXX
      )
