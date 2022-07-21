/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_helpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:41:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 17:27:33 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	*init_cur_find(void)
{
	int	*cur_find;

	cur_find = allocate_int_array(3);
	cur_find[0] = 0;
	cur_find[1] = 1;
	cur_find[2] = 0;
	return (cur_find);
}

int	*init_big_find(void)
{
	int	*big_find;

	big_find = allocate_int_array(3);
	big_find[0] = 0;
	big_find[1] = 1;
	big_find[2] = 0;
	return (big_find);
}

int	*init_c_row_col_flg(void)
{
	int	*c_row_col_flg;

	c_row_col_flg = allocate_int_array(3);
	c_row_col_flg[0] = 1;
	c_row_col_flg[1] = 1;
	c_row_col_flg[2] = 0;
	return (c_row_col_flg);
}

char	*init_empty_obsticle_chars(char **grid)
{
	char	*empty_obsticle_chars;

	empty_obsticle_chars = allocate_char_array(2);
	empty_obsticle_chars[0] = parse_hdr_empty(grid);
	empty_obsticle_chars[1] = parse_hdr_obsticle(grid);
	return (empty_obsticle_chars);
}
