/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:49:25 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 20:55:15 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	is_hdr_row_count_valid(char **grid, char *str)
{
	char	full;
	char	empty;
	char	obsticle;
	int		hdr_row_claim;
	int		grd_row_claim;

	hdr_row_claim = parse_hdr(grid, &empty, &obsticle, &full);
	if (hdr_row_claim < 1)
		return (0);
	grd_row_claim = calc_rows_str(str);
	if (grd_row_claim < 2)
		return (0);
	if (hdr_row_claim != (grd_row_claim - 1))
		return (0);
	return (1);
}

int	is_line_ok(char **grid)
{
	int		cur_row;
	int		len;
	int		rows;
	char	obsticle;
	char	empty;

	rows = parse_hdr_nbr(grid) + 1;
	len = ft_strlen(grid[1]);
	if (len < 2)
		return (0);
	cur_row = 2;
	while (cur_row < rows)
	{
		if (len != ft_strlen(grid[cur_row]))
			return (0);
		cur_row++;
	}
	obsticle = parse_hdr_obsticle(grid);
	empty = parse_hdr_empty(grid);
	if (obsticle == empty)
		return (0);
	return (1);
}

int	is_valid_chars(char **grid)
{
	int		cur_row;
	int		cur_col;
	int		rows;
	char	empty;
	char	obsticle;

	empty = parse_hdr_empty(grid);
	obsticle = parse_hdr_obsticle(grid);
	rows = parse_hdr_nbr(grid) + 1;
	cur_row = 1;
	while (cur_row < rows)
	{
		cur_col = 0;
		while (grid[cur_row][cur_col] != 0)
		{
			if ((grid[cur_row][cur_col] != empty)
				&& (grid[cur_row][cur_col] != obsticle)
				&& (grid[cur_row][cur_col] != '\n'))
				return (0);
			cur_col++;
		}
		cur_row++;
	}
	return (1);
}

int	is_hdr_char_count_valid(char **grid)
{
	int	len;
	int	i;

	len = ft_strlen(grid[0]);
	if (grid[0][len - 1] != '\n')
		return (0);
	i = 0;
	while (i < len - 4)
	{
		if (grid[0][i] < '0' || grid[0][i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	input_is_valid(char **grid)
{
	if (!is_hdr_char_count_valid(grid))
	{
		handle_error();
		return (0);
	}
	if (!is_line_ok(grid))
	{
		handle_error();
		return (0);
	}
	if (!is_valid_chars(grid))
	{
		handle_error();
		return (0);
	}
	return (1);
}
