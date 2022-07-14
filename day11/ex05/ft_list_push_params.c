/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:56:51 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/13 16:14:08 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*out;
	t_list	*tmp;
	int		i;

	if (ac < 1)
		return (NULL);
	out = NULL;
	i = 0;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = out;
		out = tmp;
		i++;
	}
	return (out);
}
