cmake_minimum_required(VERSION 3.0.0)
project(TERM-COLORS VERSION 1.0.0)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(cpp_ansi_escape_lib)

include_directories(include)

add_library(TERM-COLOR src/color.cpp)
add_library(TERM-COLOR-STATIC STATIC src/color.cpp)

target_link_libraries(TERM-COLOR PRIVATE ANSI-ESCAPE-CODES)
target_link_libraries(TERM-COLOR-STATIC PRIVATE ANSI-ESCAPE-CODES-STATIC)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
