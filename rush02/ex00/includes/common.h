/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:32:23 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/17 12:26:47 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	unsafe_append_char(char *dest, char c);
char	*gen_pat_0(int x, int y);
char	*gen_pat_1(int x, int y);
char	*gen_pat_2(int x, int y);
char	*gen_pat_3(int x, int y);
char	*gen_pat_4(int x, int y);
char	*gen_pat(int pattern, int x, int y);
void	give_input(char *save_input_str, int *save_input_x, int *save_input_y);
void	display_result(int pattern, int x, int y, int match_count);

#endif