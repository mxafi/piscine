/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pat_rush_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:06:26 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 12:26:28 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	unsafe_append_char(char *dest, char c)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = c;
	dest[i + 1] = '\0';
}

char	*gen_pat(int pattern, int x, int y)
{
	char	*ret;

	ret = NULL;
	if (pattern == 0)
		ret = gen_pat_0(x, y);
	if (pattern == 1)
		ret = gen_pat_1(x, y);
	if (pattern == 2)
		ret = gen_pat_2(x, y);
	if (pattern == 3)
		ret = gen_pat_3(x, y);
	if (pattern == 4)
		ret = gen_pat_4(x, y);
	return (ret);
}
