/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem_solver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:10:19 by analves           #+#    #+#             */
/*   Updated: 2022/07/10 00:30:27 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_safe(int **grid, int row, int col, int num);
int	find_zeroes_row(int **grid);
int	find_zeroes_col(int **grid);

int	problem_solver(int **grid)
{
	int	num;
	int	row;
	int	col;

	num = 1;
	row = find_zeroes_row(grid);
	col = find_zeroes_col(grid);
	if ((find_zeroes_row(grid) == -1) && (find_zeroes_col(grid) == -1))
	{
		return (1);
	}
	while (num <= 9)
	{
		if (is_safe(grid, row, col, num))
		{
			grid[row][col] = num;
			if (problem_solver(grid))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	find_zeroes_row(int **grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[row][col] == 0)
				return (row);
			col++;
		}
		row++;
	}
	return (-1);
}

int	find_zeroes_col(int **grid)
{
	int	row;
	int	col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (grid[row][col] == 0)
				return (col);
			col++;
		}
		row++;
	}
	return (-1);
}
