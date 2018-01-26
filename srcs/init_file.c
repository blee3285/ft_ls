/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:50:56 by blee              #+#    #+#             */
/*   Updated: 2018/01/25 19:17:12 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*get_perm(mode_t fmode)
{
	char	*new;

	new = ft_strnew(10);
	if (fmode & S_IRUSR)
		new[0] = 'r';
	else
		new[0] = '-';
	if (fmode & S_IWUSR)
		new[1] = 'w';
	else
		new[1] = '-';-
}

t_file	*new_file(char *str)
{
	t_file		*new;
	struct stat	info;
	int			valid;

	valid = stat(str, &info);
	if (!(new = (t_file*)malloc(sizeof(t_file))))
		return (NULL);
	new->name = ft_strdup(str);
	new->type = 0;
	return (new);
}
