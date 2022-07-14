/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:02:30 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 22:02:47 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*i;

	if (*begin_list != 0)
	{
		i = *begin_list;
		while (i->next != 0)
			i = i->next;
		i->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
