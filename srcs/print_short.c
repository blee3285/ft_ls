/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_short.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:24:36 by blee              #+#    #+#             */
/*   Updated: 2018/03/02 20:47:44 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//void	print_short_a(t_btree *node)
//{
//}

void	print_short_reg(t_btree *node, t_param *param)
{
	t_file	*file;

	file = node->data;
	if (file->name[0] != '.')
	{
		ft_printf("%-*s ", param->namelen, file->name);
	}
}

void	ls_print_short(t_btree *node, t_param *param)
{
	if (param->flags[2] == 'a')
	{
		//print_short_a(param->files);
	}
	else
	{
		print_short_reg(node, param);
	}
}
