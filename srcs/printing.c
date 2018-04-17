/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/04/16 15:54:47 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//flags: -l -R -a -r -t

void	first_print(t_param *param)
{
	ls_btinfix(param->files, param, print_file);
	ls_btinfix(param->files, param, print_first_dir);
}

void	other_print(t_param *param)
{
	ls_btinfix(param->files, param, print_all);
	if (param->flags[1] == 'R')
		ls_btinfix(param->files, param, print_dir);
}

void	ls_print(t_param *param)
{
	if (param->firstls)
		first_print(param);
	else
		other_print(param);
}
