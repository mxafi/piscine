/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:53:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 23:00:21 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b);

int main(void)
{
	int	a = 6;

	int	b = 3;

	int*	pXa = &a;

	int*	pXb = &b;

	printf("a before: %d\n", a);

	printf("b before: %d\n", b);

	ft_ultimate_div_mod(pXa, pXb);

	printf("a (div) after: %d\n", a);

	printf("b (mod) after: %d\n", b);

	return (0);
}
