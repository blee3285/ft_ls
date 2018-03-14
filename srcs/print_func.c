/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 17:46:47 by blee              #+#    #+#             */
/*   Updated: 2018/03/13 16:24:35 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_short(t_file *file, t_param *param)
{
	ft_printf("%-*s ", param->namelen, file->name);
}

void	print_flagl(t_file *file, t_param *param)
{
	if (param->flags[2] == 'l')
	{
		//print long
	}
	else
	{
		print_short(file, param);
	}
}

void	print_all(t_btree *node, t_param *param)
{
	t_file *file;

	file = node->data;
	print_flagl(file, param);
}

void	print_file(t_btree *node, t_param *param)
{
	t_file	*file;

	file = node->data;
	if (file->type != 'd')
		print_all(node, param);
}

void	print_dir(t_btree *node, t_param *param)
{
	t_file	*file;
	t_param	*new_dir;

	file = node->data;
	new_dir = NULL;
	if (file->type == 'd')
	{
		new_dir = new_param_dir(file->name, param);
		//ft_printf("%s:\n", file->name);
		ft_ls(new_dir);
	}
}
