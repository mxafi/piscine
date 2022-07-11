#!/bin/sh

touch -A -01 -af bomb.txt
stat -r bomb.txt | cut -d ' ' -f 9 
