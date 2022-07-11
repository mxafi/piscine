#!/bin/sh

ifconfig | grep -E ' ..:..:..:..:..:..[ |\n]' -o | tr -d ' '

