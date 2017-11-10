/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 14:38:21 by blee              #+#    #+#             */
/*   Updated: 2017/11/09 16:38:10 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_file	*file_new(char *str)
{
	t_file	*new;

	new = (t_file*)malloc(sizeof(t_file));
	if (!new)
		return (NULL);
	new->name = ft_strdup(str);
	new->type = 0;
	return (new);
}

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
