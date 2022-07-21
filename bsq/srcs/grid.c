/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:49:24 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 23:34:32 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

char	**create_grid_empty(char *str)
{
	char	**grid;
	int		i;
	int		height;
	int		width;

	height = calc_rows_str(str);
	width = calc_max_columns_str(str);
	grid = malloc(sizeof(grid) * height);
	if (!grid)
		exit (1);
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(*grid[i]) * (width + 1));
		if (!grid[i])
			exit(1);
		grid[i][width] = '\0';
		i++;
	}
	return (grid);
}

void	destroy_grid(char **grid, int row_count)
{
	int	i;

	i = 0;
	while (i < row_count)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

char	**fill_grid_str(char *str)
{
	char	**grid;
	int		i;
	int		curre_line;
	int		curre_char;

	grid = create_grid_empty(str);
	i = 0;
	curre_line = 0;
	while (str[i] != '\0')
	{
		curre_char = 0;
		while (str[i] != '\n' && str[i] != '\0')
		{
			grid[curre_line][curre_char] = str[i];
			i++;
			curre_char++;
		}
		grid[curre_line][curre_char] = str[i];
		i++;
		curre_line++;
	}
	return (grid);
}

void	print_grid_headerless(char **grid, int row_count)
{
	int	i;
	int	len;

	len = ft_strlen(grid[1]);
	i = 1;
	while (i < row_count)
	{
		write(1, grid[i], len);
		i++;
	}
}
