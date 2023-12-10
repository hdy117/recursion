#!/bin/bash

root_dir=$(pwd)
build_dir=$root_dir/build

mkdir -p $build_dir

cd $build_dir && cmake -DCMAKE_BUILD_TYPE=Debug .. && make -j

cd $root_dir