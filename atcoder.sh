#!/bin/bash

read id

cd ../atcoder/

if [ -d "${id}" ]; then
    return 0
fi

mkdir ${id}
cd ${id}

dirnames=`echo 'ABCDEFGH' | fold -s1`
for dirname in $dirnames
do
    mkdir $dirname
    cd $dirname
    cp ../../../library_cpp/pre.hpp main.cpp
    cp ../../../library_cpp/Makefile .
    cd ../
done
