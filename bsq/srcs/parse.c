/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:08:24 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/20 23:34:19 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_bsq.h"

int	parse_hdr_nbr(char **grid)
{
	int		nbr_char_len;
	char	*nbr_string;
	int		nbr;
	int		i;

	nbr_char_len = ft_strlen(grid[0]) - 4;
	nbr_string = malloc(sizeof(char) * nbr_char_len + 1);
	if (!nbr_string)
		exit(1);
	nbr_string[nbr_char_len] = 0;
	i = 0;
	while (i < nbr_char_len)
	{
		nbr_string[i] = grid[0][i];
		i++;
	}
	nbr = ft_atoi(nbr_string);
	free(nbr_string);
	return (nbr);
}

char	parse_hdr_full(char **grid)
{
	return (grid[0][ft_strlen(grid[0]) - 2]);
}

char	parse_hdr_obsticle(char **grid)
{
	return (grid[0][ft_strlen(grid[0]) - 3]);
}

char	parse_hdr_empty(char **grid)
{
	return (grid[0][ft_strlen(grid[0]) - 4]);
}

int	parse_hdr(char **grd, char *r_emp, char *r_obs, char *r_ful)
{
	int	hdr_nbr;

	*r_ful = parse_hdr_full(grd);
	*r_obs = parse_hdr_obsticle(grd);
	*r_emp = parse_hdr_empty(grd);
	hdr_nbr = parse_hdr_nbr(grd);
	if (hdr_nbr == 0)
		return (-1);
	return (hdr_nbr);
}
