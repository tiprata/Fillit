/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 12:39:15 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 21:08:58 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, char *newelem)
{
	t_list *list;
	int i;

	i = 0;
	if (!(*begin_list))
		*begin_list = ft_create_elem(newelem);
	else
	{
		ft_putstr(newelem);
		ft_putchar('\n');
		list = *begin_list;
		if (list)
			ft_putstr("list ok\n");
		else
			ft_putstr("list not ok\n");
		while (list->next)
		{
			ft_putnbr(i++);
			ft_putchar('\n');
			list = list->next;
			if (!list)
				ft_putstr("list not anymore ok\n");
		}
		ft_putstr("\n________\n");
		list->next = ft_create_elem(newelem);
		ft_putstr("ok");
		ft_putchar('\n');

	}
}
