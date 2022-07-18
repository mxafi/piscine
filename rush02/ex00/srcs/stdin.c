/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:37:35 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 17:04:56 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

int	calc_lines(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			c++;
		i++;
	}
	return (c);
}

int	calc_line_chars(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

void	read_stdin(char *big_str)
{
	char	c;
	int		i;

	i = 0;
	while (((read(0, &c, sizeof c)) > 0) && (i < 5000000))
	{
		big_str[i] = c;
		i++;
	}
	big_str[i] = '\0';
}

void	give_input(char *big_str, int *save_input_x, int *save_input_y)
{
	int	i;
	int	longest_line_length;
	int	current_line_length;

	read_stdin(big_str);
	*save_input_y = calc_lines(big_str);
	i = 1;
	longest_line_length = 0;
	while (i <= *save_input_y)
	{
		current_line_length = calc_line_chars(big_str);
		if (current_line_length > longest_line_length)
			longest_line_length = current_line_length;
		i++;
	}
	*save_input_x = longest_line_length;
}
