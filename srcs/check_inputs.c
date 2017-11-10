/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:17:19 by blee              #+#    #+#             */
/*   Updated: 2017/11/09 16:51:14 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		flag_id(char c, char *flags)
{
	int		i;

	i = 0;
	while (flags[i])
	{
		if (c == flags[i])
			return (i);
		i++;
	}
	return (-1);
}

int		*parse_inputs(char *input)
{
	//return int array with flags
	//flags: -l -R -a -r -t
	int		*flags;
	int		id;

	id = 0;
	flags = ft_intarray(6);
	while (*input)
	{
		if ((id = flag_id(*input, "lRart")) != -1)
			flags[id] = 1;
		input++;
	}
	return (flags);
}

int		*check_inputs(int ac, char **av)
{
	int		i;
	int		*flags;

	i = 1;
	if (ac == 1)
		return (0);
	if (av[1][0] == '-')
	{
		ft_printf("Found Flags\n");
		flags = parse_inputs(av[1]);
		i++;
	}
	else
		flags = ft_intarray(6);
	while (i < ac)
	{
		ft_printf("{cyan}%s{eoc}\n", av[i]);
		i++;
	}
	return (flags);
	//return array for flags, and sort av
}
