/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:50:56 by blee              #+#    #+#             */
/*   Updated: 2018/02/08 16:59:10 by blee             ###   ########.fr       */
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
		new[1] = '-';
	return (NULL);
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
	new->type = check_filetype(info.st_mode);
	return (new);
}

t_param	*new_param(int ac, char **av)
{
	t_param		*new;

	if (!(new = (t_param*)malloc(sizeof(t_file))))
		return (NULL);
	new->flags = check_inputs(ac, av);
	new->count = ac;
	new->files = build_tree(ac, av);
	return (new);
}
