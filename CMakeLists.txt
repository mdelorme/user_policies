cmake_minimum_required(VERSION 3.10)

project(gravity LANGUAGES CXX)

# Various sets
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories("src")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(USER_POLICY "${CMAKE_CURRENT_SOURCE_DIR}/src/user_policy.cpp" CACHE FILEPATH "Path to the user policy file")

add_executable(user_policies src/main.cpp ${USER_POLICY})
