cmake_minimum_required(VERSION 3.14.0)

project(recursion)

cmake_minimum_required(VERSION 3.14.0)

project(sort)

add_executable(recursion_print_stars ${CMAKE_CURRENT_SOURCE_DIR}/print_stars.cpp)
target_link_libraries(recursion_print_stars ${lib_sys})

add_executable(recursion_tail ${CMAKE_CURRENT_SOURCE_DIR}/tail_recursion.cpp)
target_link_libraries(recursion_tail ${lib_sys})

add_executable(recursion_stackoverflow ${CMAKE_CURRENT_SOURCE_DIR}/stackoverflow.cpp)
target_link_libraries(recursion_stackoverflow ${lib_sys})