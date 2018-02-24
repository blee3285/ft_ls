/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 15:50:27 by blee              #+#    #+#             */
/*   Updated: 2018/02/23 21:59:46 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		ls_build_tree(int ac, char **av, t_param *param)
{
	t_file		*file;
	int			i;

	i = 1;
	file = NULL;
	while ((i < ac) && (av[i][0] == '-'))
		i++;
	if (i == ac)
	{
		file = new_file(".", param);
		ft_btadd(&(param->files), ft_btnew(file, sizeof(t_file)), bt_cmpname);
		param->count++;
	}
	else
		while (i < ac)
		{
			file = new_file(av[i], param);
			ft_btadd(&(param->files), ft_btnew(file, sizeof(t_file)), bt_cmpname);
			i++;
			param->count++;
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
		file = new_dir_file(pre_dir, sd->d_name, param);
		ft_btadd(&(param->files), ft_btnew(file, sizeof(t_file)), bt_cmpname);
		param->count++;
	}
	closedir(dir);
	free(pre_dir);
	return (1);
}
