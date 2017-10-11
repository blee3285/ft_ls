/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:43:59 by blee              #+#    #+#             */
/*   Updated: 2017/10/10 17:32:14 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	bt_putstr(b_tree *node)
{
	t_test	*test;

	test = node->data;
	ft_putstr(test->str);
	ft_putchar('\n');
}

int main(void)
{
/*
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
*/
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
