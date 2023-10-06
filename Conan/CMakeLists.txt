cmake_minimum_required(VERSION 3.15)  # Minimum required CMake version

# CMAKE_TOOLCHAIN_FILE must be set before "project(...)"
# otherwise it is ignored
set(CMAKE_TOOLCHAIN_FILE "${PROJECT_BINARY_DIR}/conan_toolchain.cmake")

project(Dependency-Playground)  # Name of your project

set(CMAKE_BUILD_TYPE "Release")

find_package(nlohmann_json REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC nlohmann_json::nlohmann_json)
