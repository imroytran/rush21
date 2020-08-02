/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:10:15 by jregenia          #+#    #+#             */
/*   Updated: 2020/08/01 19:08:43 by jregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	dict
{
	char *number;
	char *letter;
}				t_line;

typedef struct	s_list
{
	struct s_list	*next;
	t_line			*data;
}				t_list;

void	ft_strcat(char *str1, char *str2);
t_list	*ft_create_elem(t_line *item);
void	ft_list_push_front(t_list **list, t_line *data);
t_line	*line2dict(char *str);
t_list	*load_dictionnary(char *filename);
int		ft_strlen(char *str);

#endif
