cmake_minimum_required(VERSION 3.15)  # Minimum required CMake version

project(Dependency-Playground)  # Name of your project


# Set C++ standard (optional, choose the appropriate version)
set(CMAKE_CXX_STANDARD 14)


include(FetchContent)
FetchContent_Declare(json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.11.0)
FetchContent_MakeAvailable(json)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC nlohmann_json::nlohmann_json)
