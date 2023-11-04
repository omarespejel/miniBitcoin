cmake_minimum_required(VERSION 3.10)
project(MiniBitcoin VERSION 1.0)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compiler options
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

# Add the main application source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Exclude test files from the main application source files
list(FILTER SOURCES EXCLUDE REGEX ".*_test\\.cpp$")

# Add the executable for the main application
add_executable(MiniBitcoin ${SOURCES})

# Specify include directories
target_include_directories(MiniBitcoin PRIVATE "${PROJECT_SOURCE_DIR}/include")

# Assume JSONCPP is found and set up correctly
# You may need to find the package and link against it if necessary
# find_package(jsoncpp REQUIRED)
# target_link_libraries(MiniBitcoin PRIVATE jsoncpp_lib)

# If there are subdirectories with their own CMakeLists.txt, add them here
# add_subdirectory(subdir_name)
