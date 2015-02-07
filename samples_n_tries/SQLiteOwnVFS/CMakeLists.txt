cmake_minimum_required(VERSION 2.8.4)
project(SQLiteOwnVFS)

AUX_SOURCE_DIRECTORY(src AUX_SRC_FILES)
# to make sure, main.cpp is not compiled first, let's remove it from the list...
list(REMOVE_ITEM AUX_SRC_FILES "src/main.cpp")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11  -O3 -lpthread -ldl")

set(SOURCE_FILES src/lib/sqlite-amalgamation/sqlite3.c ${AUX_SRC_FILES} src/main.cpp)
add_executable(SQLiteOwnVFS ${SOURCE_FILES})