/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:07:50 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/02 20:09:57 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		if (nb == 0)
		{
			return (1);
		}
		else
		{
			while (nb > 1)
			{
				ans = ans * nb;
				nb--;
			}
			return (ans);
		}
	}
}
