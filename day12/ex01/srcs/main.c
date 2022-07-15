/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:13:18 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 20:42:43 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

int	multi_arg(int argc, char **argv)
{
	int	i;
	int	err;

	err = 0;
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			display_stdin();
		else if (display_file(argv[i]) == 1)
			err = 1;
		i++;
	}
	return (err);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		display_stdin();
	else if (multi_arg(argc, argv) == 1)
		return (1);
	return (0);
}
