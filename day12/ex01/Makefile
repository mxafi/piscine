# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 19:13:23 by malaakso          #+#    #+#              #
#    Updated: 2022/07/14 18:58:56 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRCS = srcs/main.c srcs/file.c srcs/errors.c srcs/ft.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -Iincludes

.PHONY: clean

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
