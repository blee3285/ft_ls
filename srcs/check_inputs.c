/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:17:19 by blee              #+#    #+#             */
/*   Updated: 2017/10/27 19:00:38 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		check_inputs(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac == 1)
		return (0);
	if (av[i][0] == '-')
	{
		ft_printf("Found Flags\n");
		i++;
	}
	while (i < ac)
	{
		ft_printf("{cyan}%s{noc}\n", av[i]);
		i++;
	}
	return (i - 1);
}
