cmake_minimum_required(VERSION 3.16)
project(boltzmann VERSION 0.1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

string(APPEND CMAKE_CXX_FLAGS " -Wall -Wextra ")

string(APPEND CMAKE_CXX_FLAGS_DEBUG " -fsanitize=address,undefined -fno-omit-frame-pointer")
string(APPEND CMAKE_EXE_LINKER_FLAGS_DEBUG " -fsanitize=address,undefined -fno-omit-frame-pointer")

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(boltzmann main.cpp boltzmann.cpp)
target_link_libraries(boltzmann PRIVATE sfml-graphics)