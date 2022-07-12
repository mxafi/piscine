/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:34:56 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 21:00:43 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length == 0 || length == 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (((f)(tab[i], tab[i + 1])) > 0)
			return (0);
		i++;
	}
	return (1);
}
