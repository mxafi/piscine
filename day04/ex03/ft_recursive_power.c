/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:45:34 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 22:12:58 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (nb * ft_recursive_power(nb, power - 1));
		}
	}
}
