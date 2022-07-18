# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 11:14:09 by malaakso          #+#    #+#              #
#    Updated: 2022/07/17 20:04:40 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = srcs/main.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -Iincludes

.PHONY: clean

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
