/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:43:59 by blee              #+#    #+#             */
/*   Updated: 2018/03/02 20:48:28 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	bt_putstr(t_btree *node)
{
	t_file	*test;
	char	*mod_time;

	test = node->data;
	mod_time = ctime((const long*)&test->mtime);
	ft_putstr(test->name);
	ft_putchar('\n');
	ft_printf("Permissions: %c", test->type);
	ft_printf("%s\n", test->perm);
	ft_printf("Links: %D\n", test->links);
	ft_printf("UID: %s\n", test->usr_name);
	ft_printf("GID: %s\n", test->grp_name);
	ft_printf("Size: %lld\n", test->size);
	ft_printf("mTime: %s\n", mod_time);
}
/*
int main(void)
{

	DIR	*dir;
	struct dirent *sd;

	if (ac == 2)
		dir = opendir(av[1]);
	else 
		dir = NULL;
	if (dir == NULL)
		ft_printf("Error!");
	else
	{
		while ((sd=readdir(dir)) != NULL)
		{
			ft_printf(">> %s\n", sd->d_name);
		}
	}
	closedir(dir);

	b_tree *test;
	char	str1[] = "aaa";
	char	str2[] = "bbb";
	char	str3[] = "ccc";
	char	str4[] = "abc";
	char	str5[] = "abb";
	size_t	test_size;

	test_size = sizeof(t_test);
	test = ft_btnew(struct_new(str1), test_size);
	ft_btadd(&test, ft_btnew(struct_new(str2), test_size), bt_cmptest);
	ft_btadd(&test, ft_btnew(struct_new(str3), test_size), bt_cmptest);
	ft_btadd(&test, ft_btnew(struct_new(str4), test_size), bt_cmptest);
	ft_btadd(&test, ft_btnew(struct_new(str5), test_size), bt_cmptest);
	ft_btinfix(test, bt_putstr);
	return (0);
}
*/

int		main(int ac, char **av)
{
	int				i;
	t_param			*param;
	//struct stat		info;
	//mode_t			mode;

	i = 0;
	param = new_param(ac, av);
	if (param == NULL)
	{
		return (0);
	}
	ft_ls(param);
	//stat(av[2], &info);
	//mode = info.st_mode;
	//ft_printf("%c", check_filetype(mode));
	ft_putchar('\n');
	return (0);
}
