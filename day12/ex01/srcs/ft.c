/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:32:18 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 18:09:11 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	ft_putchar(int file_desc, char c)
{
	write(file_desc, &c, 1);
}

void	ft_putstr(int file_desc, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(file_desc, str[i]);
		i++;
	}
}
