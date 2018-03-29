/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_long.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:02:27 by blee              #+#    #+#             */
/*   Updated: 2018/03/29 15:46:52 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	print_time(t_file *file)
{
	char	*str;

	str = ctime((const long*)&file->mtime);
	ft_printf("%4.3s", &str[4]);
	ft_printf("%3.2s", &str[8]);
	ft_printf("%6.5s ", &str[11]);
}

void	print_long(t_file *file, t_param *param)
{
	ft_printf("%c", file->type);
	ft_printf("%s  ", file->perm);
	ft_printf("%*d ", param->linklen, file->links);
	ft_printf("%*s  ", param->usrlen, file->usr_name);
	ft_printf("%*s  ", param->grplen, file->grp_name);
	ft_printf("%*ld", param->sizelen, file->size);
	print_time(file);
	ft_printf("%s\n", file->name);
}
