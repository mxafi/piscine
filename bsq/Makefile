# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 13:15:32 by malaakso          #+#    #+#              #
#    Updated: 2022/07/21 14:59:04 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COM = gcc
CFLGS = -Wall -Wextra -Werror
OBJS = $(SRCS:srcs/%.c=%.o)
SRCS = srcs/error.c srcs/file.c srcs/ft_fill_map.c srcs/ft_functions.c \
srcs/grid_helpers.c srcs/grid.c srcs/main.c srcs/map_helpers.c srcs/map.c \
srcs/parse.c srcs/validity.c srcs/malloc_helpers.c
NAME = bsq

all: $(NAME)

$(NAME): $(OBJS)
	$(COM) $(CFLGS) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(COM) $(CFLGS) -c $(SRCS) -Iincludes

.PHONY: clean

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
