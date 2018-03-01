/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:05:56 by blee              #+#    #+#             */
/*   Updated: 2018/02/28 18:13:01 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		bt_cmpname(t_btree *t1, t_btree *t2)
{
	t_file *node1;
	t_file *node2;

	node1 = (t_file*)t1->data;
	node2 = (t_file*)t2->data;
	return (ft_strcmp(node1->name, node2->name));
}

int		bt_dircheck(t_btree *node)
{
	t_file	*file;

	file = node->data;
	if (file->type == 'd')
		return (1);
	else
		return (0);
}

void	bt_infix_ls(t_btree *root, void (*func)(t_btree*, t_param*))
{
	if (root)
	{
		bt_infix_ls(root->left, func);
		func(root);
		bt_infix_ls(root->right, func);
	}
}
