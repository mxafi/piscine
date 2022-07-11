/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:17:52 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 21:29:16 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
	printf("Starting test.\n");

	printf("1: nb:-5 power:-5 expected:0 output:%d\n", ft_iterative_power(-5, -5));
	printf("2: nb:-5 power:3 expected:-125 output:%d\n", ft_iterative_power(-5, 3));
	printf("3: nb:0 power:3 expected:0 output:%d\n", ft_iterative_power(0, 3));
	printf("4: nb:5 power:3 expected:125 output:%d\n", ft_iterative_power(5, 3));
	printf("5: nb:5 power:-5 expected:0 output:%d\n", ft_iterative_power(5, -5));
	printf("6: nb:5 power:0 expected:1 output:%d\n", ft_iterative_power(5, 0));
	printf("7: nb:5 power:1 expected:5 output:%d\n", ft_iterative_power(5, 1));

	printf("Testing complete!\n");
	return (0);
}
