/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:12:22 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/10 19:33:57 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		problem_solver(int **grid);

int	**create_grid(void)
{
	int	**grid;
	int	i;

	grid = malloc(sizeof(grid) * 9);
	i = 0;
	while (i < 9)
	{
		grid[i] = malloc(sizeof(*grid[i]) * 9);
		i++;
	}
	return (grid);
}

int	**transform_grid(char **argv)
{
	int	**int_grid;
	int	i;
	int	j;

	int_grid = create_grid();
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if ((argv[i + 1][j] >= '1') && (argv[i + 1][j] <= '9'))
				int_grid[i][j] = argv[i + 1][j] - '0';
			else if (argv[i + 1][j] == '.')
				int_grid[i][j] = 0;
			else
				return (0);
			j++;
		}
		i++;
	}
	return (int_grid);
}

void	destroy_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

void	print_grid(int **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 8)
		{
			ft_putchar(grid[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar(grid[i][j] + '0');
		ft_putchar('\n');
		i++;
	}
}

void	grid_ops(int **grid)
{
	if (problem_solver(grid) == 1)
	{
		print_grid(grid);
		destroy_grid(grid);
	}
	else
	{
		destroy_grid(grid);
		ft_putstr("Error\n");
	}
}
