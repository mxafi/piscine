/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:31:46 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 22:37:41 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		out;
	t_list	*i;

	out = 0;
	i = begin_list;
	while (i != 0)
	{
		out++;
		i = i->next;
	}
	return (out);
}
