/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:22:19 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 21:23:37 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rng;

	i = 0;
	if (min >= max)
		return (0);
	rng = malloc(sizeof * rng * (max - min));
	if (rng == NULL)
		return (NULL);
	while (i < (max - min))
	{
		rng[i] = min + i;
		i++;
	}
	return (rng);
}
