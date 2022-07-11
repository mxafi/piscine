/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:50:22 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 23:03:20 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	input;

	printf("Enter fibonacci index: ");
	scanf("%d", &input);
	printf("\nFibonacci number at that index: %d\n", ft_fibonacci(input));
	return (0);
}
