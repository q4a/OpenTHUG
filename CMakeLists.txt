cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
cmake_policy(VERSION 3.2)

set(THUG_VERSION "0.1.0")
project(thug VERSION ${THUG_VERSION} LANGUAGES CXX)

include(${PROJECT_SOURCE_DIR}/cmake/utils.cmake)

add_definitions(-D__PLAT_WN32__ -D__NOPT_DEBUG__ -D__NOPT_FINAL__ -D_CRT_SECURE_NO_WARNINGS -DNOGDI -DMMNOSOUND)

add_subdirectory(src)
