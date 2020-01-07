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

# Print out the properties of OpenMP::OpenMP_CXX
include(CMakePrintHelpers)
cmake_print_properties(
   TARGETS
      OpenMP::OpenMP_CXX
   PROPERTIES
      INTERFACE_COMPILE_OPTIONS
      INTERFACE_INCLUDE_DIRECTORIES
      INTERFACE_LINK_LIBRARIES
)
