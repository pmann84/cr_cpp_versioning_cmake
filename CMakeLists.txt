cmake_minimum_required(VERSION 3.15)

project(TestProgram
        VERSION 1.0.0.0)

set(CMAKE_CXX_STANDARD 17)

configure_file(TestProgramConfig.h.in TestProgramConfig.h)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})