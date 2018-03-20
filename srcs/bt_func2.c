/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:43:27 by blee              #+#    #+#             */
/*   Updated: 2018/03/19 20:18:50 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		bt_cmp_mtime(t_btree *t1, t_btree *t2)
{
	t_file	*node1;
	t_file	*node2;

	node1 = (t_file*)t1->data;
	node2 = (t_file*)t2->data;
	return (node1->mtime - node2->mtime);
}
