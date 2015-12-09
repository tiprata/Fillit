/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:04:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 17:35:00 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const t_place gl_placetab[] = {
	{"su", &ft_su},
	{"sd", &ft_sd},
	{"square", &ft_square},
	{"ll", &ft_ll},
	{"rll", &ft_rll},
	{"sl", &ft_sl},
	{"rsl", &ft_rsl},
	{"ill", &ft_ill},
	{"isl", &ft_isl},
	{"irsl", &ft_irsl},
	{"irll", &ft_irll},
	{"t", &ft_t},
	{"rt", &ft_rt},
	{"lt", &ft_lt},
	{"rit", &ft_rit},
	{"s", &ft_s},
	{"z", &ft_z},
	{"ups", &ft_ups},
	{"upz", &ft_upz}
};

char	**ft_call_func(char **tab, int i, int j)
{
	tab = gl_placetab[j].func(tab, i);
	return (tab);
}
void	ft_resolve(t_list **begin_list, int k, int sizelist)
{
	t_list *list;
	char **str;
	int j;

	j = 0;
	list = *begin_list;
	str = ft_tab_init(sizelist);
	list = list->next;
	while (list->next)
	{
		ft_putstr(list->str);
		ft_putchar('\n');
		list = list->next;
	}
	while (list->next)
	{
		while (ft_strcmp(gl_placetab[j].s, list->str) != 0 && j < 19)
		{
			j++;
		}
//		ft_putchar('\n');
//		ft_putstr(list->str);
//		ft_putchar('\n');
		str = ft_call_func(str, sizelist, k);
		j = 0;
		list = list->next;
	}
/*	ft_putstr(str[0]);
	ft_putstr(str[1]);
	ft_putstr(str[2]);
	ft_putstr(str[3]);
	ft_putstr(str[4]);
	ft_putstr(str[5]);*/
}
