/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:36:29 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 17:30:56 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

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

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
