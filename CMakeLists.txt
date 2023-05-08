cmake_minimum_required(VERSION 3.24)
project(MaskinAfl2 C)

set(CMAKE_C_STANDARD 11)

add_executable(MaskinAfl2 main.c CardMove.c Split.c Command.c Save.c Deck.c)