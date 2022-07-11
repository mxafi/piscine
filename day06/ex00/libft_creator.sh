#!/bin/sh

gcc -c -Wall -Wextra -Werror ft_*.c
ar ruvcs libft.a ft_*.o
rm ft_*.o
