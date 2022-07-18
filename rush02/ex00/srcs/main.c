/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:30:58 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 17:58:39 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	compare_n_push(char *input, int *x, int *y)
{
	int		i;
	char	*pattern;
	int		match_count;

	match_count = 0;
	i = 0;
	while (i <= 4)
	{
		if (*x > 0 && *y > 0)
		{
			pattern = gen_pat(i, *x, *y);
			if (ft_strcmp(pattern, input) == 0)
			{
				display_result(i, *x, *y, match_count);
				match_count++;
			}
			free(pattern);
		}
		i++;
	}
	if (match_count == 0 || *x < 1 || *y < 1)
		ft_putstr("none");
	ft_putchar('\n');
}

int	main(void)
{
	char	*input;
	int		*x;
	int		*y;

	input = malloc(sizeof(*input) * 5000000);
	if (!input)
		return (1);
	x = malloc(sizeof(int));
	if (!x)
		return (1);
	y = malloc(sizeof(int));
	if (!y)
		return (1);
	give_input(input, x, y);
	compare_n_push(input, x, y);
	free(input);
	free(x);
	free(y);
	return (0);
}
