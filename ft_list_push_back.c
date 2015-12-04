/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:39:15 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 15:53:11 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list *begin_list, char *newelem)
{
	t_list *list;

	list = begin_list;
	if (!(begin_list))
	{
		ft_putstr("NEIN\n");
		begin_list = ft_create_elem(newelem);
	}
	while (list->next)
	{
		ft_putstr("}");
		list = list->next;
	}
	ft_putstr("!\n");
	list->next = ft_create_elem(newelem);
}
