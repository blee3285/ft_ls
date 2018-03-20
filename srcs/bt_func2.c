/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 19:43:27 by blee              #+#    #+#             */
/*   Updated: 2018/03/19 22:32:41 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		bt_cmpmtime(t_btree *t1, t_btree *t2)
{
	t_file	*node1;
	t_file	*node2;
	long	mtime1;
	long	mtime2;

	node1 = (t_file*)t1->data;
	mtime1 = (long)&node1->mtime;
	node2 = (t_file*)t2->data;
	mtime2 = (long)&node2->mtime;
	return (mtime1 - mtime2);
}
