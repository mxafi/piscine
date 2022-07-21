/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:18:39 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 23:39:40 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

void	run_ops(char **input_grid, int size)
{
	if (!input_is_valid(input_grid))
	{
		destroy_grid(input_grid, size);
		return ;
	}
	map_logic_loop(input_grid);
	print_grid_headerless(input_grid, size);
	destroy_grid(input_grid, size);
}

void	logic_ops(int is_stdin, char *filename)
{
	char	**input_grid;
	char	*input_str;
	int		size;

	input_str = read_input_to_str(open_input(is_stdin, filename));
	if (!input_str)
	{
		handle_error();
		return ;
	}
	size = calc_rows_str(input_str);
	input_grid = fill_grid_str(input_str);
	if (!is_hdr_row_count_valid(input_grid, input_str))
	{
		free(input_str);
		destroy_grid(input_grid, size);
		handle_error();
		return ;
	}
	free(input_str);
	run_ops(input_grid, size);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			logic_ops(0, av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
	{
		logic_ops(1, NULL);
		ft_putchar('\n');
	}
	return (0);
}
