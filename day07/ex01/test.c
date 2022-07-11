/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:38:35 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 19:32:12 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	int	*arr;
	int i = 0;
	int min = 5;
	int max = 10;
	int len = max - min;
	arr = ft_range(min, max);
	while (i < len)
	{
		printf("%d, ",arr[i]);
		i++;
	}
	return (0);
}
