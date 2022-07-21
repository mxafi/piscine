/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjunttil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 22:49:59 by jjunttil          #+#    #+#             */
/*   Updated: 2022/07/16 12:40:45 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*new;

	(*cmpf)("item", "item");
	new = btree_create_node(item);
	if (!root)
		root = &new;
	else
	{
		if ((*cmpf)(item, (*root)->item) < 0)
		{
			if ((*root)->left)
				btree_insert_data(&((*root)->left), item, (*cmpf));
			else
				(*root)->left = new;
		}
		else
		{
			if ((*root)->right)
				btree_insert_data(&((*root)->right), item, (*cmpf));
			else
				(*root)->right = new;
		}
	}
}
