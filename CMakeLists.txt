cmake_minimum_required(VERSION 3.2)
project(Test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Test ${SOURCE_FILES} Headers/game_defines.h Headers/game_file.h Headers/gmae_tools.h Headers/game_menus.h Headers/game_player.h Enums/game_enum.h)