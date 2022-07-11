#!/bin/sh

echo "Starting purge in specified directory."
cd $1
rm -rf .git .gitignore
echo "Purged .git folder and .gitignore file from specified directory/repo."
