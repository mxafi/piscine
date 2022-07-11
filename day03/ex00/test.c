/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 20:53:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 21:38:15 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int	thething;

	int*	thingpointer;

	thething = 5;

	thingpointer = &thething;

	printf("thing before: %d\n", thething);

	ft_ft(thingpointer);

	printf("thing after: %d\n", thething);

	return (0);
}
