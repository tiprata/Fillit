/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:04:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/08 17:39:17 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header.h"

extern t_place gl_placetab[19];

char	**ft_call_func(char *str, char **tab, int i, int j)
{
	tab = gl_placetab[j].func(str, tab, i);
	return (tab);
}
void	ft_resolve(t_list **begin_list, int k)
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
		while (gl_placetab[j].s != list->str)
			j++;
		str = ft_call_func(list->str, str, i, k);
		j = 0;
		list = list->next;
	}
}
