/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:39:15 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 18:44:57 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list *begin_list, char *newelem)
{
	t_list *list;

	if (!(begin_list))
	{
		ft_putstr("NEIN\n");
		begin_list = ft_create_elem(newelem);
	}
	else
	{
										ft_putstr(newelem);
										ft_putstr("_\n");
		list = begin_list;
		while (list->next)
		{

			list = list->next;
		}
		if (list->next == NULL)
		{
			ft_putstr("\n|__________|______|\n");
			list->next = ft_create_elem(newelem);
		}
	}
}
