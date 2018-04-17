/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:43:59 by blee              #+#    #+#             */
/*   Updated: 2018/04/16 17:14:12 by blee             ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int				i;
	t_param			*param;

	i = 0;
	param = new_param(ac, av);
	if (param == NULL)
		return (1);
	ft_ls(param);
	if (param->flags[0] != 'l')
		ft_putchar('\n');
	return (0);
}
