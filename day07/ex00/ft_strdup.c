/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:03:08 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 21:22:52 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = malloc(sizeof * dup * len + 1);
	if (dup == NULL)
		return (NULL);
	dup[len + 1] = '\0';
	while (len >= 0)
	{
		dup[len] = src[len];
		len--;
	}
	return (dup);
}
