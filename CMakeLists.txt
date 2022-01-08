cmake_minimum_required(VERSION 3.5)

project(hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file (
GLOB source_files 
    "${source_dir}/*.cpp" 
    "${source_dir}/Helper/*.cpp"
    "${source_dir}/handlers/*.cpp"
)

add_executable(hello ${source_files})