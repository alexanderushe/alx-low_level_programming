#!/bin/bash

# Compile all .c files into object files
if gcc *.c -c -fPIC; then
    echo "Compiled .c files to object files successfully."

    # Create the dynamic library
    if gcc *.o -shared -o liball.so; then
        echo "Dynamic library liball.so has been created."
        
        # Clean up object files
        rm -f *.o
    else
        echo "Error: Failed to create the dynamic library."
    fi
else
    echo "Error: Compilation of .c files failed."
fi
