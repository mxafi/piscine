/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:39:10 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/14 21:45:35 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree	*btree_create_node(void *item);

int	main(void)
{
	t_btree	*my_node1;
	char	*my_item1;

	my_item1 = "This is my item string.";
	my_node1 = btree_create_node(my_item1);
	printf("%s\n", my_node1->item);
	return (0);
}
