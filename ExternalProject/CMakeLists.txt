cmake_minimum_required(VERSION 3.15)  # Minimum required CMake version

project(Dependency-Playground)  # Name of your project

# Set C++ standard (optional, choose the appropriate version)
set(CMAKE_CXX_STANDARD 14)


include(ExternalProject)

set(json_PREFIX ${CMAKE_BINARY_DIR}/external/json)

ExternalProject_Add(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.0
    PREFIX   ${json_PREFIX} # Directory where the project will be downloaded and built
    CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${json_PREFIX}/install  # Installation directory for the dependency
        -DCMAKE_BUILD_TYPE=Release  # Build type (e.g., Debug, Release)
    BUILD_COMMAND cmake --build . -j12 --config Release  # Build the project
    INSTALL_COMMAND cmake --build . -j12 --target install --config Release  # Install the project
)

add_executable(main main.cpp)
add_dependencies(main json)

# set(json_PREFIX ${CMAKE_CURRENT_BINARY_DIR}/external/protobuf)
# set(json_INCLUDE ${protobuf_PREFIX}/include)

target_include_directories(main PUBLIC "${json_PREFIX}/install/include")