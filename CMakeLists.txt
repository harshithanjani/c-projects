cmake_minimum_required(VERSION 3.7)
project(myproj)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Fibo.c Reverse.c fizzbuzz.c edigits.c vowel.c palin.c "Count .c" swap.c)
add_executable(myproj ${SOURCE_FILES})