/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:51:34 by eemuston          #+#    #+#             */
/*   Updated: 2022/07/17 11:25:10 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	rush01_base(int x, char *pattern)
{
	if (x > 0)
	{
		unsafe_append_char(pattern, '/');
	}
	while (x - 2 > 0)
	{
		unsafe_append_char(pattern, '*');
		x--;
	}
	if (x > 1)
	{	
		unsafe_append_char(pattern, '\\');
	}	
}

void	rush01_base1(int x, char *pattern)
{
	if (x > 0)
	{
		unsafe_append_char(pattern, '*');
	}
	while (x - 2 > 0)
	{
		unsafe_append_char(pattern, ' ');
		x--;
	}
	if (x > 1)
	{
		unsafe_append_char(pattern, '*');
	}
}

void	rush01_base2(int x, char *pattern)
{
	if (x > 0)
	{
		unsafe_append_char(pattern, '\\');
	}
	while (x - 2 > 0)
	{
		unsafe_append_char(pattern, '*');
		x--;
	}
	if (x > 1)
	{
		unsafe_append_char(pattern, '/');
	}
}

void	rush01(int x, int y, char *pattern)
{
	if (x < 1 || y < 1)
	{
		return ;
	}
	if (y > 0)
	{
		rush01_base(x, pattern);
	}
	if (y > 1)
	{
		unsafe_append_char(pattern, '\n');
	}
	while (y - 2 > 0)
	{
		rush01_base1(x, pattern);
		unsafe_append_char(pattern, '\n');
		y--;
	}
	if (y > 1)
	{
		rush01_base2(x, pattern);
	}
	unsafe_append_char(pattern, '\n');
}

char	*gen_pat_1(int x, int y)
{
	char	*pattern;

	pattern = malloc(sizeof(char) * ((x * y) + y + 1));
	if (!pattern)
		return (NULL);
	pattern[0] = 0;
	rush01(x, y, pattern);
	return (pattern);
}
