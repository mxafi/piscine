# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 15:40:03 by malaakso          #+#    #+#              #
#    Updated: 2022/07/12 13:53:14 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COM = gcc
CFLGS = -Wall -Wextra -Werror
OBJS = $(SRCS:srcs/%.c=%.o)
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
NAME = libft.a

all: $(NAME)

$(NAME): create_objects
	ar rcs $(NAME) $(OBJS)

create_objects:
	$(COM) $(CFLGS) -c $(SRCS) -Iincludes

.PHONY: clean

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
