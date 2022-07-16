/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:39:10 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/15 22:23:08 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *));

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->item = item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, applyf);
}

int	ft_strcmp(void *s1, void *s2)
{
	int	i;

	i = 0;
	while ((((char *)s1)[i] != '\0') && (((char *)s1)[i] == ((char *)s2)[i]))
		i++;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

void	print(void *str)
{
	printf("%s ", str);
}

int	main(void)
{
	t_btree	*head;
	head = NULL;
	// head = btree_create_node("1");

	btree_insert_data(&head, "hello", &ft_strcmp);
	btree_insert_data(&head, "norm", &ft_strcmp);
	btree_insert_data(&head, "lmao", &ft_strcmp);
	btree_insert_data(&head, "eff", &ft_strcmp);
	btree_insert_data(&head, "shee", &ft_strcmp);
	btree_insert_data(&head, "whoareu", &ft_strcmp);
	btree_insert_data(&head, "wotm8", &ft_strcmp);
	btree_apply_infix(head, &print);
	return (0);
}
