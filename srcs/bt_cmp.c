/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 12:25:03 by blee              #+#    #+#             */
/*   Updated: 2017/11/04 16:22:14 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		bt_cmpname(t_btree *t1, t_btree *t2)
{
	t_file	*node1;
	t_file	*node2;

	node1 = (t_file*)t1->data;
	node2 = (t_file*)t2->data;
	return (ft_strcmp(node1->name, node2->name));
}
