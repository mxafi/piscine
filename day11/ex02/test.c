/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:49:40 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/13 20:33:14 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data);

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	putlist(t_list *list)
{
	while (list != 0)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*my_list;
	char	*my_data;
	char	*my_data2;

	my_data = "This is my data string.";
	my_list = ft_create_elem(my_data);
	my_data2 = "Second string lmao.";
	printf("---BEFORE---\n");
	printf("%s\n", my_list->data);
	ft_list_push_front(&my_list, my_data2);
	printf("---AFTER----\n");
	putlist(my_list);
	return (0);
}
