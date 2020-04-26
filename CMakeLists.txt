cmake_minimum_required(VERSION 2.8.0)
project(thug)

include(${PROJECT_SOURCE_DIR}/cmake/utils.cmake)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

message("CMake build ${CMAKE_BUILD_TYPE}, CFLAGS=${CMAKE_C_FLAGS}, CXXFLAGS=${CMAKE_CXX_FLAGS}")
add_definitions(-D__PLAT_WN32__)

include_directories(${INCLUDE_DIRECTORIES} ${PROJECT_SOURCE_DIR}/src)

add_subdirectory(src)

add_executable(thug WIN32 ./src/sk/Main.cpp)

target_link_libraries(thug core gel gfx sk sys)
