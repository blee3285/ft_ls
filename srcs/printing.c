/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/03/06 20:44:59 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//flags: -l -R -a -r -t

void	print_first(t_param *param)
{
	t_btree	*node;

	node = param->files;
	ls_btinfix(node, param, print_file);
}

void	ls_print(t_param *param)
{
	if (param->flags[1] == 'R')
	{
	}
	else
	{
		if (param->count == 1 && bt_dircheck(param->files))
		{
			//opendir and print
		}
		else if (param->firstls)
		{
			print_first(t_param *param);
		}
	}
}
