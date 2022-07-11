/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:07:50 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 21:30:10 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
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
			while (power > 0)
			{
				ans = ans * nb;
				power--;
			}
			return (ans);
		}
	}
}
