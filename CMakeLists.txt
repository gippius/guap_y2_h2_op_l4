cmake_minimum_required(VERSION 3.20)

project(op_lab4_hospital_workers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lab4_hospital_workers
    src/main.cpp
    src/hospital_worker.cpp
)

target_include_directories(lab4_hospital_workers PRIVATE include)

