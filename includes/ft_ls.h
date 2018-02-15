/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:07:56 by blee              #+#    #+#             */
/*   Updated: 2018/02/14 17:52:47 by blee             ###   ########.fr       */
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
	char		*perm;
	long		links;
	char		*usr_name;
	//char		*grp_name;
	//long long	size;
	//
}				t_file;

typedef struct	s_param
{
	t_btree		*files;
	int			*flags;
	int			count;
}				t_param;

//	init file
int		bt_cmpname(t_btree *t1, t_btree *t2);
t_file	*new_file(char *str);
char	check_filetype(mode_t mode);
char	*get_perm(mode_t fmode);
int		*check_inputs(int ac, char **av);
t_btree	*build_tree(int total, char **av);
t_param	*new_param(int ac, char **av);

//	printing
void	bt_putstr(t_btree *node);

//	main func
int		ft_ls(t_param *param);
int		ft_lsdir(char *path);

#endif
