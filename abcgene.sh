#!/bin/bash

read id

head=`expr $id / 100`
echo $head

if [ $head -eq 0 ]; then
    cd ../atcoder/ABC0
elif [ $head -eq 1 ]; then
    cd ../atcoder/ABC1
else
    cd ../atcoder/ABC2
fi

if [ -d "./ABC${id}" ]; then
    return 0
fi

mkdir ABC${id}
cd ABC${id}

dirnames=`echo 'ABCDEFGH' | fold -s1`
for dirname in $dirnames
do
    mkdir $dirname
    cd $dirname
    cp ../../../../library_cpp/pre.hpp main.cpp
    cp ../../../../library_cpp/Makefile .
    cd ../
done
