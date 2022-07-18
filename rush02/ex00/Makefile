# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 11:14:09 by malaakso          #+#    #+#              #
#    Updated: 2022/07/17 13:08:06 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRCS = srcs/main.c srcs/stdin.c srcs/display.c srcs/ft.c srcs/pat_rush_helpers.c srcs/00rush.c srcs/01rush.c srcs/02rush.c srcs/03rush.c srcs/04rush.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -Iincludes

.PHONY: clean

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all