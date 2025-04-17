#!/bin/bash

# Compile the C code
gcc c_start.c -o c_start.p

# Check if compilation succeeded
if [ $? -eq 0 ]; then
    # Run the compiled C program
    ./c_start.p "$@"
else
    echo "Compilation failed!"
    exit 1
fi
