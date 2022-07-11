/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:13:54 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/04 21:02:26 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{	
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(nb * -1);
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
}
