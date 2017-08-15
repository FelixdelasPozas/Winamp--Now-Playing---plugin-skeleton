#
# NOWPLAYING CMake configuration.
#
project(NowPlaying)

cmake_minimum_required (VERSION 2.8.6)

# Version Number
set (NOWPLAYING_VERSION_MAJOR 1)
set (NOWPLAYING_VERSION_MINOR 0)
set (NOWPLAYING_VERSION_PATCH 0)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-deprecated -std=c++11 -mwindows -m32 -static")

# Include Winamp SDK directory (modify this with the path in your computer).
include_directories("D:/Desarrollo/Bibliotecas/WinampSDK/")

configure_file("${PROJECT_SOURCE_DIR}/resources.rc.in" "${PROJECT_BINARY_DIR}/resources.rc")
set(CORE_SOURCES ${CORE_SOURCES} ${CMAKE_CURRENT_BINARY_DIR}/resources.rc)
set(CMAKE_RC_COMPILE_OBJECT "<CMAKE_RC_COMPILER> -O coff -o <OBJECT> -i <SOURCE>")
enable_language(RC)

include_directories(
  ${CMAKE_SOURCE_DIR}
  ${PROJECT_BINARY_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_BINARY_DIR}          # Generated .h files
  ${CMAKE_CURRENT_BINARY_DIR}  # For wrap/ui files
  )

set (CORE_SOURCES
  # project files
  ${CORE_SOURCES}
  plugin.cpp
)

add_library(gen_NowPlaying SHARED ${CORE_SOURCES})
set_target_properties(gen_NowPlaying PROPERTIES PREFIX "")
set_target_properties(gen_NowPlaying PROPERTIES OUTPUT_NAME "gen_NowPlaying")
