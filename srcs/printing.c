/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/03/29 15:49:02 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//flags: -l -R -a -r -t

void	first_print(t_param *param)
{
	if (param->flags[1] == 'R')
	{
		//use recrusive ls
	}
	else
	{
		//print files first, then dir
		ls_btinfix(param->files, param, print_file);
		ls_btinfix(param->files, param, print_dir);
	}
}

void	other_print(t_param *param)
{
	if (param->flags[1] == 'R')
	{
		//use recursive ls
	}
	else
	{
		ls_btinfix(param->files, param, print_all);
	}
}

void	ls_print(t_param *param)
{
	if (param->firstls)
	{
		first_print(param);
	}
	else
	{
		other_print(param);
	}
}
