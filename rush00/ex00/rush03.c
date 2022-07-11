/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:50:04 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/03 15:37:27 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	print_full_line(int linelen)
{
	int	current_x;

	current_x = 2;
	if (linelen > 2)
	{
		ft_putchar('A');
		while (current_x < linelen)
		{
			ft_putchar('B');
			current_x++;
		}
		write(1, "C\n", 2);
	}
	else
	{
		if (linelen == 1)
		{
			write(1, "A\n", 2);
		}
		if (linelen == 2)
		{	
			write(1, "AC\n", 3);
		}
	}
}

void	print_middle_line(int linelen)
{
	int	current_x;

	current_x = 2;
	if (linelen > 2)
	{
		ft_putchar('B');
		while (current_x < linelen)
		{
			ft_putchar(32);
			current_x++;
		}
		write(1, "B\n", 2);
	}
	else
	{
		if (linelen == 1)
		{
			write(1, "B\n", 2);
		}
		if (linelen == 2)
		{
			write(1, "BB\n", 3);
		}
	}	
}

void	rush(int x, int y)
{
	int	current_y;

	current_y = 2;
	if (x > 0 && y > 0)
	{
		if (y > 2)
		{
			print_full_line(x);
			while (current_y < y)
			{
				print_middle_line(x);
				current_y++;
			}
		}
		else
		{
			if (y == 2)
			{
				print_full_line(x);
			}
		}
		print_full_line(x);
	}
}
