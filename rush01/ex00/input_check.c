/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:16:03 by kkyppo            #+#    #+#             */
/*   Updated: 2022/07/10 00:24:56 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	char_checker(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '1' && str[i] <= '9') || str[i] == '.')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	input_check(int argc, char **argv)
{
	int	i;

	if (argc != 10)
	{
		return (0);
	}
	i = 1;
	while (i <= 9)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	i = 1;
	while (i <= 9)
	{
		if (char_checker(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
