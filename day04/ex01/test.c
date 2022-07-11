/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:31:18 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 20:56:20 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main(void)
{
	int	returnval;

	printf("Starting tests.\n");

	returnval = ft_recursive_factorial(-5);
	printf("Testing factorial: -5, expected: 0, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(0);
	printf("Testing factorial: 0, expected: 1, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(1);
	printf("Testing factorial: 1, expected: 1, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(2);
	printf("Testing factorial: 2, expected: 2, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(5);
	printf("Testing factorial: 5, expected: 120, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(11);
	printf("Testing factorial: 11, expected: 39916800, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(12);
	printf("Testing factorial: 12, expected: 479001600, actual: %d\n", returnval);

	returnval = ft_recursive_factorial(13);
	printf("Testing factorial: 13, expected: 6227020800 or 0, actual: %d\n", returnval);

	printf("Testing complete!\n");
	return (0);
}
