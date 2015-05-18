cmake_minimum_required(VERSION 3.2)
project(Test)


set(Boost_ADDITIONAL_VERSIONS "1.58" "1.58.0")

set(BOOST_ROOT "C:/MinGW/boost_1_58_0")
set(BOOST_INCLUDE_DIR "C:/MinGW/boost_1_58_0/boost")
set(BOOST_LIBRARY_DIRS "C:/MinGW/boost_1_58_0/libs")
set(BOOST_LIBRARIES "C:/MinGW/boost_1_58_0/libs")

set(Boost_USE_STATIC_LIBS        OFF)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME     OFF)
set(BOOST_ALL_DYN_LINK           ON)   # force dynamic linking for all libraries

find_package(BOOST 1.58 COMPONENTS filesystem  unit_test_framework  REQUIRED)
message(status "** Boost Include: ${Boost_INCLUDE_DIR}")
message(status "** Boost Libraries: ${Boost_LIBRARY_DIRS}")
message(status "** Boost Libraries: ${Boost_LIBRARIES}")

find_package(BOOST 1.58 COMPONENTS filesystem  unit_test_framework  REQUIRED)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/build/")
set(LIBRARY_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/build/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Test ${SOURCE_FILES} Headers/game_defines.h Headers/game_file.h Headers/gmae_tools.h Headers/game_menus.h Headers/game_player.h Enums/game_enum.h Headers/game_StarDust.h)
target_link_libraries(Test ${CMAKE_DL_LIBS} ${BOOST_LIBRARIES})

