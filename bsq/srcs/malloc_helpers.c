/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:12:58 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 17:13:43 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	*allocate_int_array(int size)
{
	int	*out;

	out = malloc(sizeof(*out) * size);
	if (!out)
		exit(1);
	return (out);
}

char	*allocate_char_array(int size)
{
	char	*out;

	out = malloc(sizeof(*out) * size + 1);
	if (!out)
		exit(1);
	out[size] = 0;
	return (out);
}
