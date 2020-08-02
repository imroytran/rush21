/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jregenia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 11:12:13 by jregenia          #+#    #+#             */
/*   Updated: 2020/07/30 13:16:04 by jregenia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"

void	ft_list_push_front(t_list **begin_list, t_line *data)
{
	t_list *temp;

	if (*begin_list)
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
		*begin_list = ft_create_elem(data);
}
