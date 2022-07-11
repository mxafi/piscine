/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:53:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 21:50:19 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int	thething = 5;

	int*	pointer1 = &thething;

	int**	pointer2 = &pointer1;

	int***	pointer3 = &pointer2;

	int****	pointer4 = &pointer3;

	int*****	pointer5 = &pointer4;

	int******	pointer6 = &pointer5;

	int*******	pointer7 = &pointer6;

	int********	pointer8 = &pointer7;

	int*********	pointer9 = &pointer8;
	

	printf("thing before: %d\n", thething);

	ft_ultimate_ft(pointer9);

	printf("thing after: %d\n", thething);

	return (0);
}
