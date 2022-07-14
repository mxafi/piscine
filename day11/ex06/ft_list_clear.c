/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:21:30 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 23:38:22 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	if (*begin_list || begin_list)
	{
		while (*begin_list)
		{
			tmp = (*begin_list)->next;
			free(*begin_list);
			*begin_list = tmp;
		}
	}
}
