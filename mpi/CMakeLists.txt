cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(hello_mpi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(MPI REQUIRED)
add_executable(hello_mpi.x src/hello_mpi.cpp)

target_link_libraries(hello_mpi.x
   PUBLIC
      MPI::MPI_CXX
)

