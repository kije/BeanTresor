cmake_minimum_required(VERSION 2.8.4)
project(SQLiteSample)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3 -lpthread -ldl")

set(SOURCE_FILES src/lib/sqlite-amalgamation/sqlite3.c src/main.cpp)
add_executable(SQLiteSample ${SOURCE_FILES})