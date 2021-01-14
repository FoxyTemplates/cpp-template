#!/bin/bash

# Current Dir
ScriptDir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd $ScriptDir

# Cmake
dir=build
if [[ ! -e $dir ]]; then
    mkdir $dir
fi
cd $dir
 
# Conan
conan install ..