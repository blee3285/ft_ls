/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:50:56 by blee              #+#    #+#             */
/*   Updated: 2018/02/22 18:26:00 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_file	*new_file(char *str, t_param *param)
{
	t_file		*new;
	struct stat	info;
	int			valid;

	valid = stat(str, &info);
	if (!(new = (t_file*)malloc(sizeof(t_file))))
		return (NULL);
	new->name = ft_strdup(str);
	new->type = check_filetype(info.st_mode);
	new->perm = get_perm(info.st_mode);
	new->links = (long)info.st_nlink;
	new->usr_name = usr_name(info.st_uid);
	new->grp_name = grp_name(info.st_gid);
	new->size = (long long)info.st_size;
	new->mtime = info.st_mtimespec;
	param->blocks += (long long)info.st_blocks;
	return (new);
}

t_param	*new_param(int ac, char **av)
{
	t_param		*param;
	t_file		*file;
	int			i;

	i = 1;
	file = NULL;
	if (!(param = (t_param*)malloc(sizeof(t_file))))
		return (NULL);
	param->flags = check_inputs(ac, av);
	param->count = 0;
	param->blocks = 0;
	param->files = NULL;
	ls_build_tree(ac, av, param);
	ft_printf("Files Found: %d\n", param->count);
	ft_printf("Total Blocks: %lld\n", param->blocks);
	return (param);
}
