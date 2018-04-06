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

# Cat each file and search for function definitions
while read -r line; do
    cat "$line" | grep "(" | grep --color -n "function"
done <<< $files
