/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:51:18 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/19 23:54:57 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

// sq_data[0] Size of the square
// sq_data[1] Starting row
// sq_data[2] Starting column
void	map_fill(char **grid, int *sq_data)
{
	char	full;
	int		current_row;
	int		current_col;
	int		size;

	size = sq_data[0];
	full = grid[0][ft_strlen(grid[0]) - 2];
	current_row = sq_data[1];
	while (current_row < sq_data[1] + size)
	{
		current_col = sq_data[2];
		while (current_col < sq_data[2] + size)
		{	
			grid[current_row][current_col] = full;
			current_col++;
		}
	current_row++;
	}
}
