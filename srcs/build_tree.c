/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:50:27 by blee              #+#    #+#             */
/*   Updated: 2018/02/20 20:04:05 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_btree		*build_tree(int total, char **av)
{
	t_btree		*tree;
	int			i;

	i = 1;
	tree = NULL;
	while (av[i][0] == '-')
		i++;
	while (i < total)
	{
		//ft_btadd(&tree, ft_btnew(new_file(av[i]), sizeof(t_file)), bt_cmpname);
		i++;
	}
	return (tree);
}

int		ls_add_node(t_btree *tree, t_file *new_node)
{
	if (new_node)
	{
		ft_btadd(&tree, ft_btnew(new_node, sizeof(t_file)), bt_cmpname);
		return(1);
	}
	return (0);
}
