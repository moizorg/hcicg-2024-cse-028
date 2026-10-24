cmake_minimum_required(VERSION 3.20)

project(hcicg_lab1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenGL REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(GLEW REQUIRED)

add_executable(hcicg_lab1 main.cpp)

target_link_libraries(hcicg_lab1 PRIVATE OpenGL::GL glfw GLEW::GLEW)
