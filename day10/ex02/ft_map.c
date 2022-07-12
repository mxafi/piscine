/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:54:10 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/11 22:11:54 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*out;

	out = malloc(sizeof(*out) * length);
	i = 0;
	while (i < length)
	{
		out[i] = f(tab[i]);
		i++;
	}
	return (out);
}
