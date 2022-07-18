/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:57:53 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 12:15:10 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	print_matched_pattern(int pattern, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putchar(pattern + '0');
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	display_result(int pattern, int x, int y, int match_count)
{
	if (match_count == 0)
		print_matched_pattern(pattern, x, y);
	else
	{
		ft_putstr(" || ");
		print_matched_pattern(pattern, x, y);
	}
}
