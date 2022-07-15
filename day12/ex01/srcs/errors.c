/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:28:40 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 19:00:46 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/common.h"

void	err_2(char *arg_name)
{
	write(2, "cat: ", 5);
	ft_putstr(2, arg_name);
	write(2, ": No such file or directory\n", 28);
}

void	err_21(char *arg_name)
{
	write(2, "cat: ", 5);
	ft_putstr(2, arg_name);
	write(2, ": Is a directory\n", 17);
}

void	handle_error(int error, char *arg_name)
{
	if (error == 2)
		err_2(arg_name);
	if (error == 21)
		err_21(arg_name);
}
