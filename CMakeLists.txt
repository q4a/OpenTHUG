cmake_minimum_required(VERSION 2.8.0)
project(thug)

include(${PROJECT_SOURCE_DIR}/cmake/utils.cmake)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

if(${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
  add_definitions(-D__OS_WIN__)
  set(CMAKE_CXX_FLAGS "/std:c++17")
  #set(CMAKE_CXX_FLAGS "/std:c++17 /Za /permissive-")
elseif(${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
  add_definitions(-D__OS_LIN__)
  set(CMAKE_CXX_FLAGS "-std=c++17 -fpermissive ${CMAKE_CXX_FLAGS}")
else()
endif()

add_definitions(-D__PLAT_WN32__)

message(STATUS "CMAKE_CXX_COMPILER_ID = ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "CMake build ${CMAKE_BUILD_TYPE}, CFLAGS=${CMAKE_C_FLAGS}, CXXFLAGS=${CMAKE_CXX_FLAGS}")

include_directories(${INCLUDE_DIRECTORIES} ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR} ${PROJECT_SOURCE_DIR}/src)

add_subdirectory(src)

#add_executable(thug WIN32 ./src/sk/Main.cpp)
add_executable(thug WIN32 ./src/core/Math/math.cpp)

target_link_libraries(thug core gel gfx sk sys)
