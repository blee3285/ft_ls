/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 18:44:11 by blee              #+#    #+#             */
/*   Updated: 2018/03/14 20:53:12 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_first_dir(t_btree *node, t_param *param)
{
	if (param->count == 1 && bt_dircheck(node))
	{
		//print dir
	}
	else 
	{
		//loop use ls_btinfix
		//print all dir with the name first
	}
}

void	print_first_files(t_btree *node, t_param *param)
{

}
