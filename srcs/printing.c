/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/02/28 21:27:22 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

//flags: -l -R -a -r -t

int		print_recursive()
{
	return (0);
}

void		print_once(t_param *param)
{
	if (param->flags[0])
	{
		//print_long
	}
	else
	{
		ls_print_short();
	}
}

void		ls_print(t_param *param)
{
	if (param->flags[1])
	{
		print_recursive();
	}
	else
		print_once;
}
