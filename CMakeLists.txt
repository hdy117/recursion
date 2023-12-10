cmake_minimum_required(VERSION 3.14.0)

project(recursion)

# env info
set(root_dir ${CMAKE_CURRENT_SOURCE_DIR})

# sub modules
set(tail_recursion tail_recursion)

add_compile_options(-Wall)

# include dirs
include_directories(${root_dir} ${root_dir}/src)

# libs
set(lib_sys pthread)

# main src
aux_source_directory(${root_dir}/src src_files)

# sub directories
add_subdirectory(${root_dir}/recursion)
add_subdirectory(${root_dir}/sort)