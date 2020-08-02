/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 18:15:55 by jregenia          #+#    #+#             */
/*   Updated: 2020/08/01 19:07:09 by jregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void	write_to_dict(char *filename, char *str)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR);
	if (fd == -1)
		return ;
	write(fd, str, ft_strlen(str));
	close(fd);
}
