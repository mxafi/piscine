/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:41:47 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 18:08:13 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

void	find_obs(char **grid, int *s_ro_co_flg, int *cur_find, char obsticle)
{
	int	cur_row;
	int	cur_col;

	cur_col = s_ro_co_flg[1];
	while (cur_col <= cur_find[0] + s_ro_co_flg[1])
	{
		if (grid[s_ro_co_flg[0] + cur_find[0]][cur_col] == obsticle)
		{
			s_ro_co_flg[2] = 0;
			break ;
		}
		cur_col++;
	}
	cur_row = s_ro_co_flg[0];
	while (cur_row <= cur_find[0] + s_ro_co_flg[0])
	{
		if (grid[cur_row][s_ro_co_flg[1] + cur_find[0]] == obsticle)
		{
			s_ro_co_flg[2] = 0;
			break ;
		}
		cur_row++;
	}
}

void	find_big_sq(char **grid, int *s_ro_co_flg, int *cur_find, int *big_find)
{
	char	obsticle;

	obsticle = parse_hdr_obsticle(grid);
	cur_find[0] = 1;
	s_ro_co_flg[2] = 1;
	while ((cur_find[0] + s_ro_co_flg[0] < parse_hdr_nbr(grid) + 1)
		&& (cur_find[0] + s_ro_co_flg[1] < ft_strlen(grid[1]) - 1)
		&& (s_ro_co_flg[2]))
	{
		find_obs(grid, s_ro_co_flg, cur_find, obsticle);
		if (s_ro_co_flg[2])
			cur_find[0]++;
	}
	if (cur_find[0] > big_find[0])
	{
		big_find[0] = cur_find[0];
		big_find[1] = s_ro_co_flg[0];
		big_find[2] = s_ro_co_flg[1];
	}
}

void	map_logic_loop(char **grid)
{
	char	*emp_obs_chars;
	int		*cur_find;
	int		*big_find;
	int		*c_row_col_flg;

	emp_obs_chars = init_empty_obsticle_chars(grid);
	cur_find = init_cur_find();
	big_find = init_big_find();
	c_row_col_flg = init_c_row_col_flg();
	while (c_row_col_flg[0] < parse_hdr_nbr(grid) + 1)
	{
		c_row_col_flg[1] = 0;
		while (c_row_col_flg[1] < ft_strlen(grid[1]) - 1)
		{
			if (grid[c_row_col_flg[0]][c_row_col_flg[1]] == emp_obs_chars[0])
				find_big_sq(grid, c_row_col_flg, cur_find, big_find);
			c_row_col_flg[1]++;
		}
		c_row_col_flg[0]++;
	}
	map_fill(grid, big_find);
	free(emp_obs_chars);
	free(cur_find);
	free(big_find);
	free(c_row_col_flg);
}
