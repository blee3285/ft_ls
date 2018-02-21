/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:17:19 by blee              #+#    #+#             */
/*   Updated: 2018/02/20 14:30:43 by blee             ###   ########.fr       */
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

int		parse_inputs(char *input, char **flags)
{
	//return int array with flags
	//flags: -l -R -a -r -t
	char		*temp;
	int		id;

	id = 0;
	temp = *flags;
	while (*input)
	{
		if ((id = flag_id(*input, "lRart")) != -1)
			temp[id] = *input;
		//else
		//	return (0);
		input++;
	}
	return (1);
}

char	*check_inputs(int ac, char **av)
{
	int		i;
	int		valid;
	char	*flags;

	i = 1;
	valid = 0;
	flags = ft_strnew(7);
	ft_memset(flags, '-', 6);
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
	return (flags);
}
