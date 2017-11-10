/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:07:56 by blee              #+#    #+#             */
/*   Updated: 2017/11/09 16:38:56 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "../libft/includes/libft.h"
# include <sys/types.h>
# include <dirent.h>
# include <time.h>
# include <grp.h>
# include <uuid/uuid.h>
# include <pwd.h>
# include <sys/xattr.h>
# include <stdio.h>

typedef struct	s_file
{
	char		*name;
	char		type;

}				t_file;

int		bt_cmpname(t_btree *t1, t_btree *t2);
t_file	*file_new(char *str);
char	check_filetype(mode_t mode);
int		*check_inputs(int ac, char **av);

#endif
