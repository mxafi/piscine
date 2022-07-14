/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:49:40 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 23:20:15 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av);

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

int	main(int argc, char **argv)
{
	t_list	*my_list;

	my_list = ft_list_push_params(argc, argv);
	putlist(my_list);
	return (0);
}
