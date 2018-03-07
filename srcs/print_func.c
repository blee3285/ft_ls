/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 17:46:47 by blee              #+#    #+#             */
/*   Updated: 2018/03/06 20:32:56 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_long(t_file *file, t_param *param)
{
}

void	print_short(t_file *file, t_param *param)
{
	ft_printf("%-*s ", param->namelen, file->name);
}

void	print_file(t_btree *node, t_param *param)
{
	t_file	*file;

	file = node->data;
	if (file->type != 'd')
		if (param->flags[2] == 'a')
		{
			if (param->flags[0] == 'l')
				//print long format
			else
				print_short(file, param);
		}
		else
		{
			if (file->name[0] != '.')
				if (param->flags[0] == 'l')
					//print long format skip hidden files
				else
					print_short(file, param);
		}
}
