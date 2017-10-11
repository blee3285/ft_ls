/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:38:21 by blee              #+#    #+#             */
/*   Updated: 2017/10/10 15:52:25 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		test(void)
{
	ft_printf("TEST\n");
	return (0);
}

t_test	*struct_new(char	*str)
{
	t_test	*new;

	new = (t_test*)malloc(sizeof(t_test));
	if (!new)
		return (NULL);
	new->str = ft_strdup(str);
	new->num = ft_strlen(str);
	return (new);
}
