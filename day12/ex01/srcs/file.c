/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:28:56 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 20:08:30 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

int	display_file(char *filename)
{
	extern int	errno;
	int			file;
	char		c;
	int			ret;

	ret = 0;
	file = open(filename, O_RDWR);
	if (file == -1)
	{
		handle_error(errno, filename);
		ret = 1;
	}
	while ((read(file, &c, sizeof c)) > 0)
	{
		write(1, &c, 1);
	}
	close(file);
	return (ret);
}

void	display_stdin(void)
{
	char	c;

	while ((read(0, &c, sizeof c)) > 0)
	{
		write(1, &c, 1);
	}
}
