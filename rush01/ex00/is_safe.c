/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:01:16 by analves           #+#    #+#             */
/*   Updated: 2022/07/09 21:20:30 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_square(int **grid, int start_row, int start_col, int num)
{
	int	row;
	int	col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + start_row][col + start_col] == num)
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}

int	check_row(int **grid, int row, int num)
{
	int	col;

	col = 0;
	while (col < 9)
	{
		if (grid[row][col] == num)
			return (1);
		col++;
	}
	return (0);
}

int	check_col(int **grid, int col, int num)
{
	int	row;

	row = 0;
	while (row < 9)
	{
		if (grid[row][col] == num)
			return (1);
		row++;
	}
	return (0);
}

int	is_safe(int **grid, int row, int col, int num)
{
	if (!check_col(grid, col, num))
	{
		if (!check_row(grid, row, num))
		{
			if (!check_square(grid, row - (row % 3), col - (col % 3), num))
			{
				if (grid[row][col] == 0)
					return (1);
			}
		}
	}
	return (0);
}
