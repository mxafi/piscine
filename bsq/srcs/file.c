/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:17:51 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 20:48:00 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

char	*str_double_and_free(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = malloc(sizeof(*dup) * ((len * 2) + 1));
	if (!dup)
		exit(1);
	dup[(len * 2) + 1] = '\0';
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	free(src);
	return (dup);
}

int	open_input(int is_stdin, char *filename)
{
	int		fd;

	fd = 0;
	if (!is_stdin)
		fd = open(filename, O_RDWR);
	if (fd == -1)
		return (-1);
	return (fd);
}

char	*read_input_to_str(int fd)
{
	char	c;
	char	*str;
	int		size;
	int		i;

	if (fd == -1)
		return (0);
	size = 2000;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		exit(1);
	str[size] = '\0';
	i = 0;
	while (read(fd, &c, sizeof c))
	{
		if (i >= size)
		{
			str = str_double_and_free(str);
			size = size * 2;
		}
		str[i] = c;
		i++;
	}
	return (str);
}
