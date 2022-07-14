/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:49:40 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/12 18:54:29 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int	main(void)
{
	t_list	*my_list;
	char	*my_data;

	my_data = "This is my data string.";
	my_list = ft_create_elem(my_data);
	printf("%s\n", my_list->data);
	return (0);
}
