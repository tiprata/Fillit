/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:04:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 15:08:13 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_resolve(t_list **begin_list)
{
	int i;
	t_list *list;
	char **str;
	int j;

	j = 0;
	i = ft_list_size(begin_list);
	str = ft_tab_init(i);
	list = *begin_list;
	while (list->next)
	{
		while (*gl_place[j].str != list->str)
		{
			j++;
		}
		str = gl_place[j].func(list->str, str);
		i++;
		j = 0;
		list = list->next;
	}
}
