/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 12:25:03 by blee              #+#    #+#             */
/*   Updated: 2017/10/27 18:49:42 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		bt_cmptest(t_btree *t1, t_btree *t2)
{
	t_test	*node1;
	t_test	*node2;

	node1 = (t_test*)t1->data;
	node2 = (t_test*)t2->data;
	return (ft_strcmp(node1->str, node2->str));
}
