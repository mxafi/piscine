# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 19:13:23 by malaakso          #+#    #+#              #
#    Updated: 2022/07/13 19:19:28 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = main.c

all: $(NAME)

$(NAME): $(SRC)
	gcc -Wall -Werror -Wextra $(SRC) -o $(NAME)

.PHONY: clean

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
