/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:39:15 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 19:01:30 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list *begin_list, char *newelem)
{
	t_list *list;

	if (!(begin_list))
		begin_list = ft_create_elem(newelem);
	else
	{
		list = begin_list;
		while (list->next)
		{
			if (list->next == NULL)
				list->next = ft_create_elem(newelem);
			list = list->next;
		}

	}
}
