cmake_minimum_required(VERSION 3.24)
project(MaskinAfl2 C)

set(CMAKE_C_STANDARD 11)

add_executable(MaskinAfl2
        AddToDeck.c Linkedlists.c Main.h Main.c Load.c Save.c Split.c View.c Split.c Quit.c Delete.c)