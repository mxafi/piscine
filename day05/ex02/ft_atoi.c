/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:13:27 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/05 14:12:46 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	ans;
	int	sign;

	ans = 0;
	sign = 1;
	if (*str == '\0')
		return (0);
	while ((*str == ' ') || (*str == '\t') || (*str == '\n'))
		str++;
	while ((*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (sign * ans);
}
