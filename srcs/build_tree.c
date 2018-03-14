/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:50:27 by blee              #+#    #+#             */
/*   Updated: 2018/03/13 17:33:48 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ls_btadd(char *name, t_param *param)
{
	t_file		*file;

	file = new_file(name, param);
	ft_btadd(&(param->files), ft_btnew(file, sizeof(t_file)), bt_cmpname);
	param->count++;
	return (0);
}

int		ls_btadd_dir(char *path, char *name, t_param *param)
{
	t_file		*file;

	file = new_dir_file(path, name, param);
	ft_btadd(&(param->files), ft_btnew(file, sizeof(t_file)), bt_cmpname);
	param->count++;
	return (0);
}

int		ls_build_tree(int ac, char **av, t_param *param)
{
	int			i;

	i = 1;
	while ((i < ac) && (av[i][0] == '-'))
		i++;
	if (i == ac)
		ls_btadd(".", param);
	else
		while (i < ac)
		{
			ls_btadd(av[i], param);
			i++;
		}
	return (1);
}

int		ls_open_dir(char *dir_name, t_param *param)
{
	t_file			*file;
	DIR				*dir;
	struct dirent	*sd;
	char			*pre_dir;

	file = NULL;
	pre_dir = ft_strjoin(dir_name, "/");
	if (!(dir = opendir(dir_name)))
		return (0);
	while ((sd = readdir(dir)) != NULL)
	{
		if (sd->d_name[0] != '.' || (param->flags[2] == 'a'))
			ls_btadd_dir(pre_dir, sd->d_name, param);
	}
	closedir(dir);
	free(pre_dir);
	return (1);
}
