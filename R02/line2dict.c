/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line2dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:28:16 by jregenia          #+#    #+#             */
/*   Updated: 2020/08/01 18:58:45 by jregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

static char	*get_number(char *str)
{
	char *number;

	number = (char *)malloc(sizeof(char));
	while (*str && *str != ' ' && *str != '\t' &&
			*str != '\v' && *str != '\f' && *str != '\r')
		str++;
	while (*str && *str != ' ' && *str != ':')
	{
		*number = *str;
		number++;
		str++;
	}
	*number = '\0';
	return (number);
}

static char	*get_letter(char *str)
{
	char *letter;

	letter = (char *)malloc(sizeof(char));
	while (*str && *str != ':')
		str++;
	while (*str && (*str == ':' || *str == ' ' || *str == '\t' ||
			*str == '\v' || *str == '\r' || *str == '\f'))
		str++;
	while (*str)
	{
		*letter = *str;
		letter++;
		str++;
	}
	*letter = '\0';
	return (letter);
}

t_line	*line2dict(char *str)
{
	t_line	*temp;

	temp = (t_line *)malloc(sizeof(t_line));
	temp->number = get_number(str);
	temp->letter = get_letter(str);
	if (!temp->number || !temp->letter)
		return (NULL);
	return (temp);
}
