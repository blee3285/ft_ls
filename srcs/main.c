/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 14:43:59 by blee              #+#    #+#             */
/*   Updated: 2017/09/20 16:05:35 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char *av[])
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

	test();
	return (0);
}
