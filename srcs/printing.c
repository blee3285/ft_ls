/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:21:49 by blee              #+#    #+#             */
/*   Updated: 2018/02/27 19:08:04 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		print_recursive()
{
	return (0);
}

int		print_once()
{
	return (0);
}

int		print_long()
{
	return (0);
}

int		print_short()
{
	return (0);
}

int		ls_print(t_param *param)
{
	char	*flags;

	flags = param->flags;
	if (flags[1])
	{
		print_recursive();
	}
	else
		print_once;
	return (0);
}
