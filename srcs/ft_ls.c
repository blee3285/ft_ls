/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:38:21 by blee              #+#    #+#             */
/*   Updated: 2018/02/22 19:35:17 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	**ls_open_dir(char *dir_name)
{
	DIR				*dir;
	struct dirent	*sd;
	char			**out;
	int				i;

	out = NULL;
	i = 0;
	dir = opendir(dir_name);
	if (!dir)
		return (NULL);
	return (out);
}

int		ft_ls(t_param *param)
{
	char	**next_input;

	next_input = NULL;
	ft_printf("%s\n", param->flags);
	ft_btinfix(param->files, bt_putstr);
	if (param->count == 1)
	{
		if (bt_dircheck(param->files))
		{

		}
	}
	return (0);
}

//int		ft_lsdir(char *path)
//{
//	DIR				*dir;
//	struct dirent	*sd;
//	t_btree			*files;

//	dir = opendir(path);
//	while ((sd = readdir(dir)) != NULL)
//	{
		//ft_btadd(&files, ft_btnew(new_file(sd->d_name), sizeof(t_file)), bt_cmpname);:
//	}
//	ft_putchar('\n');
//	ft_btinfix(files, bt_putstr);
//	return (0);
//}

/*
 *Populating files
 *Use stat, check if valid. If link, use lstat.
 *if valid, get name (strdup)
 *from the stat struct, get type, permissions, user, group, size, time, device type?, blocks
 *will probably need a function for each info
*/

/**
 * Plan:
 * 1. check for flags
 * 2. init bt, add inputs (with name/time/type/etc), or add current dir if no inputs
 * 3. if DIR types are found use read dir and add names to bt
 * 4. adding to bt using appropirate cmp funtion, based on the flags used
 * 5. print bt, based on what flags are used
 * 6. if multiple DIR are found, call ft_ls on them at end of function and print the name of
 * directory before the rest of the contents?
**/
