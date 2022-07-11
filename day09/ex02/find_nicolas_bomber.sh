#!/bin/sh

cat $1 | cut -f1,2 -s | grep -E -c '([Nn]icolas.[Bb]omber)|([Bb]omber.[Nn]icolas)'
