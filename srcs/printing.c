/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/03/02 20:43:03 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//flags: -l -R -a -r -t

void		print_recursive()
{
}

void		print_once(t_btree *node, t_param *param)
{
	if (param->flags[0] == 'l')
	{
		//print_long
	}
	else
	{
		ls_print_short(node, param);
	}
}

void		ls_print(t_btree *node, t_param *param)
{
	if (param->flags[1] == 'R')
	{
		print_recursive();
	}
	else
		print_once(node, param);
}
