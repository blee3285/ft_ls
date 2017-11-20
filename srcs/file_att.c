/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_att.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 15:22:13 by blee              #+#    #+#             */
/*   Updated: 2017/11/20 12:41:35 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	check_filetype(mode_t mode)
{
	int		i;

	i = mode & S_IFMT;
	if (i == S_IFDIR)
		return 'd';
	else if (i == S_IFCHR)
		return 'c';
	else if (i == S_IFBLK)
		return 'b';
	else if (i == S_IFREG)
		return 'r';
	else if (i == S_IFIFO)
		return 'f';
	else if (i == S_IFLNK)
		return 'l';
	else if (i == S_IFSOCK)
		return 's';
	else
		return 'r';
}
