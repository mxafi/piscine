/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:39:10 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/15 20:32:37 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <stdlib.h>

void	btree_apply_infix(t_btree *root, void (*applyf)(void *));

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

void    print(void *str)
{
    printf("%s", str);
}

int main(void)
{
    t_btree *head;
    void (*applyf)(void *);
    applyf = &print;
    head = btree_create_node("1");
    head->left = btree_create_node("2");
    head->right = btree_create_node("3");
    head->left->left = btree_create_node("4");
    head->left->right = btree_create_node("5");
    head->right->left = btree_create_node("6");
    head->right->right = btree_create_node("7");
    printf("Infix: ");
    btree_apply_infix(head, applyf);
    return (0);
}