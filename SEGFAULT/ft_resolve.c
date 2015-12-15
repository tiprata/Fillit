/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:04:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/10 00:05:47 by tiprata          ###   ########.fr       */
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

char	**ft_call_func(char **tab, int i, int j, char a)
{
  tab = gl_placetab[i].func(tab, j, a);
  return (tab);
}
int	ft_resolve(t_list *begin_list, int tetrinb)
{
  t_list *list;
  char **str;
  int i;
  int x;
  int y;
  int listsize;

  listsize = ft_list_size(&begin_list);
  tetrinb = listsize;
  y = 0;
  x = 0;
  i = 0;
  list = begin_list;
  str = ft_tab_init(ft_sqrt(listsize * 4));
  x = 0;
  list = list->next;
  while (list)
    {
      while (ft_strcmp(gl_placetab[i].s, list->str) != 0 && i < 19)
	i++;
      str = ft_call_func(str, i, ft_sqrt(listsize * 4), list->a);
      i = 0;
      list = list->next;
    }
  //  str = ft_resize_tab(str, listsize * 3);
  ft_putstr("CECI EST L'AFFICHAGE FINAL <--------<\n");
  ft_putab(str);
  return (ft_strlen(str[0]));
}

