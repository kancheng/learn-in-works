cmake_minimum_required(VERSION 2.8)
project (useHello)

# 共享函式庫
add_library(hello_shared SHARED libHello.cpp)

add_executable(useHello useHello.cpp)

# 共享函式庫 Link
target_link_libraries(useHello hello_shared)