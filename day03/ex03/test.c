/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:53:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 22:49:40 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod);

int main(void)
{
	int	a = 6;

	int	b = 3;

	int div;

	int mod;

	int*	pXdiv = &div;

	int*	pXmod = &mod;

	printf("a before: %d\n", a);

	printf("b before: %d\n", b);

	ft_div_mod(a, b, pXdiv, pXmod);

	printf("a after: %d\n", a);

	printf("b after: %d\n", b);

	printf("div after: %d\n", div);

	printf("mod after: %d\n", mod);

	return (0);
}
