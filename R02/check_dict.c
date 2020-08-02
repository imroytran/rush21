/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:53:00 by jregenia          #+#    #+#             */
/*   Updated: 2020/08/01 19:32:06 by jregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

t_list	*dict_to_list(int fd)
{
	char	*str;
	t_line	*item;
	t_list	*dict;
	char 	c;

	str = (char *)malloc(sizeof(char));
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			item = line2dict(str);
			if (!item && str != 0) 
				return (NULL);
			ft_list_push_front(&dict, item);
			str = 0;
		}
		else
			ft_strcat(str, &c);
	}
	return (dict);
}

t_list	*load_dictionnary(char *filename)
{
	t_list	*temp;
	int		fd;
	
	temp = (t_list *)malloc(sizeof(t_list));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	else
		temp = dict_to_list(fd);
	close(fd);
	return (temp);
}
