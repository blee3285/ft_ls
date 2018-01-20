/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:17:19 by blee              #+#    #+#             */
/*   Updated: 2018/01/19 14:22:53 by blee             ###   ########.fr       */
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

int		parse_inputs(char *input, int **flags)
{
	//return int array with flags
	//flags: -l -R -a -r -t
	int		*temp;
	int		id;

	id = 0;
	temp = *flags;
	while (*input)
	{
		if ((id = flag_id(*input, "lRart")) != -1)
			temp[id] = 1;
		else
			return (0);
		input++;
	}
	return (1);
}

int		*check_inputs(int ac, char **av, t_btree **tree)
{
	int		i;
	int		valid;
	int		*flags;

	i = 1;
	valid = 0;
	flags = ft_intarray(6);
	if (ac == 1)
		return (0);
	while (av[i][0] == '-')
	{
		ft_printf("Found Flags\n");
		valid = parse_inputs(av[i], &flags);
		if (!valid)
		{
			free(flags);
			return (NULL);
		}
		i++;
	}
	while (i < ac)
	{
		ft_btadd(tree, ft_btnew(file_new(av[i]), sizeof(t_file)), bt_cmpname);
		i++;
	}
	return (flags);
}