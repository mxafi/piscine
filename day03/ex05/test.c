/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 23:13:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/01 23:35:53 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main(void)
{
//	char string[] = "This is a test.";
	char*	pXstring = "This is a test.";

	ft_putstr(pXstring);
	return (0);
}
