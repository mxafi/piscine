/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:39:57 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 20:05:52 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>

void	ft_putchar(int file_desc, char c);
void	ft_putstr(int file_desc, char *str);
void	handle_error(int error, char *arg_name);
int		display_file(char *filename);
void	display_stdin(void);
#endif