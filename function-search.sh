#!/bin/bash

# If directory not passed
if [ -z "$1" ] 
    then
        # Print error and quit
        echo "No file or directory given. Exiting."
        exit 2
fi

# Get directory
path=$1;

# Recursively search for all TypeScript files
files=$(find $path | grep ".*\.ts$")

# For each file
while read -r line; do
    # Find number of function declarations
    length=$(cat "$line" | grep "(" | grep --color -n "function" | wc -l)
    # If function declarations exist
    if [ $length -gt 0 ]
        then
        # Print path
        printf "\n$line\n";
        # Print function definitions
        cat "$line" | grep "(" | grep --color -n "function" 
    fi
done <<< $files
