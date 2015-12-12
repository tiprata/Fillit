/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:21:38 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/05 18:26:40 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_list **begin_list)
{
	t_list *list;
	int i;

	i = 0;
	list = *begin_list;

	while (list->next)
	{
		i++;
		list = list->next;
	}
	return (i);
}
