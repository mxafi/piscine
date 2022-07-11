/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:36:50 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/10 00:48:23 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		input_check(int argc, char **argv);
int		**transform_grid(char **argv);
void	ft_putstr(char *str);
void	grid_ops(int **grid);

int	main(int argc, char **argv)
{
	int	**grid;

	if (input_check(argc, argv) == 1)
	{
		grid = transform_grid(argv);
		grid_ops(grid);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (0);
}
