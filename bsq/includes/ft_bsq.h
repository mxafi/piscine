/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:26:58 by ikosheva          #+#    #+#             */
/*   Updated: 2022/07/20 20:51:41 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		open_input(int is_stdin, char *filename);
char	*read_input_to_str(int fd);
void	handle_error(void);
int		calc_rows_str(char *str);
int		calc_max_columns_str(char *str);
char	**fill_grid_str(char *str);
char	*read_input_to_str(int fd);
int		open_input(int is_stdin, char *filename);
void	destroy_grid(char **grid, int row_count);
void	print_grid(char **grid, int row_count);
void	print_grid_headerless(char **grid, int row_count);
int		ft_atoi(char *orig_str);
int		parse_hdr(char **grd, char *r_emp, char *r_obs, char *r_ful);
int		parse_hdr_nbr(char **grid);
char	parse_hdr_full(char **grid);
char	parse_hdr_obsticle(char **grid);
char	parse_hdr_empty(char **grid);
int		*allocate_int_array(int size);
char	*allocate_char_array(int size);
void	map_logic_loop(char **grid);
void	map_fill(char **grid, int *sq_data);
int		*init_cur_find(void);
int		*init_big_find(void);
int		*init_c_row_col_flg(void);
char	*init_empty_obsticle_chars(char **grid);
int		is_hdr_row_count_valid(char **grid, char *str);
int		input_is_valid(char **grid);

#endif
