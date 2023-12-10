cmake_minimum_required(VERSION 3.14.0)

project(recursion)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} src_files)

add_library(${tail_recursion} ${src_files})