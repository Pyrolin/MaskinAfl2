cmake_minimum_required(VERSION 3.24)
project(MaskinAfl2 C)

set(CMAKE_C_STANDARD 11)
FILE(GLOB MyCSources *.c)
ADD_EXECUTABLE(MaskinAfl2 ${MyCSources})
