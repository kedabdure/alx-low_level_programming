#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the generated object files
ar rcs liball.a *.o

# Clean up by removing the object files
rm *.o

