/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_short.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:24:36 by blee              #+#    #+#             */
/*   Updated: 2018/02/27 19:40:14 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//might need to change loop add new traversal functions to include new parameters

void	print_short_a(t_btree *node)
{
}

void	print_short_reg(t_btree *node)
{
	t_file	*file;

	file = node->data;
	if ((ft_strcmp(file->name, ".") != 0) && (ft_strcmp(file->name,  "..") != 0))
	{
		ft_printf(file->name)
	}

}

void	print_short(t_param *param)
{
	if (param->flags[2] == 'a')
	{
		print_short_a(param->files);
	}
	else
	{
		print_short_reg(param->files);
	}
}
