/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:53:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 21:59:40 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int	*b);

int main(void)
{
	int	a = 10;

	int	b = 73;

	int*	apoint = &a;

	int*	bpoint = &b;

	printf("a before: %d\n", a);

	printf("b before: %d\n", b);

	ft_swap(apoint, bpoint);

	printf("a after: %d\n", a);

	printf("b after: %d\n", b);

	return (0);
}
