cmake_minimum_required(VERSION 3.14.0)

project(sort)

add_executable(sort_selection ${CMAKE_CURRENT_SOURCE_DIR}/select_sort.cpp)
target_link_libraries(sort_selection ${lib_sys})

add_executable(sort_bubble ${CMAKE_CURRENT_SOURCE_DIR}/bubble_sort.cpp)
target_link_libraries(sort_bubble ${lib_sys})

add_executable(sort_insert ${CMAKE_CURRENT_SOURCE_DIR}/insert_sort.cpp)
target_link_libraries(sort_insert ${lib_sys})

add_executable(sort_merge ${CMAKE_CURRENT_SOURCE_DIR}/merge_sort.cpp)
target_link_libraries(sort_merge ${lib_sys})

add_executable(sort_quick ${CMAKE_CURRENT_SOURCE_DIR}/quick_sort.cpp)
target_link_libraries(sort_quick ${lib_sys})

