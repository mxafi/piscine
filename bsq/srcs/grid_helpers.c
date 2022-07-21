/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:59:32 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 23:34:51 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	calc_rows_str(char *str)
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

int	calc_col_on_row_str(char *str, int target_row)
{
	int	i;
	int	c;
	int	current_row;

	i = 0;
	c = 0;
	current_row = 1;
	while (str[i] != '\0')
	{
		while (str[i] != '\n' && str[i] != '\0')
		{
			if (current_row == target_row)
				c++;
			else if (current_row > target_row)
				return (c + 1);
			i++;
		}
		i++;
		current_row++;
	}
	return (c + 1);
}

int	calc_max_columns_str(char *str)
{
	int	current_col;
	int	max_col;
	int	current_row;
	int	max_row;

	max_row = calc_rows_str(str);
	max_col = 0;
	current_row = 1;
	while (current_row < max_row)
	{
		current_col = calc_col_on_row_str(str, current_row);
		if (current_col > max_col)
			max_col = current_col;
		current_row++;
	}
	return (max_col);
}
