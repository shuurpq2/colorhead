cmake_minimum_required(VERSION 3.28)
project(colorhead VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(colorhead STATIC
    src/colorhead.cpp
)

target_include_directories(colorhead PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_library(clrhd::colorhead ALIAS colorhead)

include(CMakePackageConfigHelpers)

install(TARGETS colorhead
    EXPORT colorheadTargets
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include    
)

install(EXPORT colorheadTargets
    FILE colorheadTargets.cmake
    NAMESPACE clrhd::
    DESTINATION lib/cmake/colorhead
)

install(DIRECTORY include/ DESTINATION include)

file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/colorheadConfig.cmake" [[
include(CMakeFindDependencyMacro)
include("${CMAKE_CURRENT_LIST_DIR}/colorheadTargets.cmake")
]])

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/colorheadConfig.cmake" DESTINATION lib/cmake/colorhead)