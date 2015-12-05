/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:04:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/05 19:44:56 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_resolve(t_list **begin_list)
{
	int i;
	t_list *list;
	char **str;

	i = ft_list_size(begin_list);
	str = ft_tab_init(i);
	list = *begin_list;
	while (list->next)
	{
		ft_place_into_map(str, list->str);
		list = list->next;
	}
}
