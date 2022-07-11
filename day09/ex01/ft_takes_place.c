/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:02:15 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 14:44:20 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	a;

	if (hour >= 24 || hour < 0)
		return ;
	if (hour >= 0 && hour < 1)
	{
		a = hour + 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", a, a + 1);
	}
	if (hour >= 1 && hour < 12)
	{
		a = hour;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", a, a + 1);
	}
	if (hour >= 12 && hour < 24)
	{	
		a = hour - 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 P.M.\n", a, a + 1);
	}
}
