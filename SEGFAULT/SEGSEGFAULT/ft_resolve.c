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

t_ret	ft_call_func(t_ret ret, int i, int j, char a)
{
  ret = gl_placetab[i].func(j, a, ret);
  return (ret);
}
int	ft_resolve(t_list *begin_list, int tetrinb)
{
  t_list *list;
  t_ret ret;
  int i;
  int count;
  t_alg *structure;
  int count2;
  char *tmp;
  char temp;

  temp = 0;
  tmp = NULL;
  ret.i = 0;
  count2 = 0;
  if (!(structure = (t_alg *)malloc(sizeof(t_alg) * tetrinb + 1)))
    return (0);
  count = tetrinb;
  i = 0;
  list = begin_list;
  ret.str = ft_tab_init(ft_sqrt(tetrinb * 4));
  list = list->next;
  while (list)
    {
      structure[count2].str = list->str;
      structure[count2].a = list->a;
      list = list->next;
      count2++;
    }
  structure[count2].str = NULL;
  count2 = 0;
  while (structure[count2].str != NULL)
    {
      ft_putendl(structure[0].str);
      ft_putendl(structure[1].str);
      ft_putendl(structure[2].str);
      ft_putendl(structure[3].str);
      ft_putendl(structure[4].str);
      ft_putendl("_______________________");      
      while (ft_strcmp(gl_placetab[i].s, structure[count2].str) != 0 && i < 19)
	  i++;
      ret = ft_call_func(ret, i, ft_sqrt(tetrinb * 4), structure[count2].a);
      i = 0;
      count2++;
      count--;
      if (count != 0  && ret.i != 1)
	{
	  ft_putstr("POKABAWABOUNGA\n");
	  count = tetrinb;
	  tmp = ft_strdup(structure[count2].str);
	  temp = structure[count2].a;
	  free(structure[count2].str);
	  structure[count2].str = ft_strdup(structure[count2 + 1].str);
	  structure[count2].a = structure[count2 + 1].a;
	  free(structure[count2 + 1].str);
	  structure[count2 + 1].str = ft_strdup(tmp);
	  structure[count2 = 1].a = temp;
	  free(ret.str);
	  ret.str = ft_tab_init(ft_sqrt(tetrinb * 4));
	}
      ret.i = 0;
    }
  ft_putab(ret.str);
  return (0);
}
