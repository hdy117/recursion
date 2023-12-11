cmake_minimum_required(VERSION 3.14.0)

project(recursion)

add_executable(recursion_print_stars ${CMAKE_CURRENT_SOURCE_DIR}/print_stars.cpp)
target_link_libraries(recursion_print_stars ${lib_sys})

add_executable(recursion_tail ${CMAKE_CURRENT_SOURCE_DIR}/tail_recursion.cpp)
target_link_libraries(recursion_tail ${lib_sys})

add_executable(recursion_stackoverflow ${CMAKE_CURRENT_SOURCE_DIR}/stackoverflow.cpp)
target_link_libraries(recursion_stackoverflow ${lib_sys})

add_executable(recursion_print_names ${CMAKE_CURRENT_SOURCE_DIR}/print_names.cpp)
target_link_libraries(recursion_print_names ${lib_sys})

add_executable(recursion_print_N ${CMAKE_CURRENT_SOURCE_DIR}/print_N.cpp)
target_link_libraries(recursion_print_N ${lib_sys})

add_executable(recursion_sum ${CMAKE_CURRENT_SOURCE_DIR}/sum_product.cpp)
target_link_libraries(recursion_sum ${lib_sys})

add_executable(recursion_swap_array ${CMAKE_CURRENT_SOURCE_DIR}/swap_array.cpp)
target_link_libraries(recursion_swap_array ${lib_sys})

add_executable(recursion_reverse_linkedlist ${CMAKE_CURRENT_SOURCE_DIR}/reverse_linkedlist.cpp)
target_link_libraries(recursion_reverse_linkedlist ${lib_sys})

add_executable(recursion_string_palindrome ${CMAKE_CURRENT_SOURCE_DIR}/string_palindrome.cpp)
target_link_libraries(recursion_string_palindrome ${lib_sys})

add_executable(recursion_fabonacci ${CMAKE_CURRENT_SOURCE_DIR}/fabonacci.cpp)
target_link_libraries(recursion_fabonacci ${lib_sys})

add_executable(recursion_subsequence ${CMAKE_CURRENT_SOURCE_DIR}/subsequence.cpp)
target_link_libraries(recursion_subsequence ${lib_sys})

add_executable(recursion_sum_of_subsequence_is_k ${CMAKE_CURRENT_SOURCE_DIR}/sum_of_subsequence_is_k.cpp)
target_link_libraries(recursion_sum_of_subsequence_is_k ${lib_sys})

