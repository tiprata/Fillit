/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 05:07:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/10 05:14:15 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_transfotab(int x, char **str, int y)
{
  char **tab;
  int i;
  int j;

  i = 0;
  j = 0;
  if (!(tab = (char **)malloc(sizeof(char *) * (x - y) + 1 )))
    return (NULL);
  while (i <= (x - y))
    {
      if (!(tab[i] = (char *)malloc(sizeof(char) * (x - y) + 1)))
	return (NULL);
      //      ft_putnbr(x - y);
      //      ft_putchar('\n');	  
      while (str[i][j] && j <= (x - y))
	{
	  tab[i][j] = str[i][j];
	  j++;
	}
      tab[i][j] = '\0';
      j = 0;
      i++;
    }
  tab[i] = NULL;
  free(str);
  return (tab);
}

char	**ft_resize_tab(char **str, int x)
{
  int i;
  int j;
  int y;
  int w;
  int xu;
  int yu;

  xu = 0;
  yu = 0;
  w = 1;
  y = 0;
  j = 0;
  i = 0;
  x--;
  while(str[i])
    {
      i = 0;
      j = ft_strlen(str[i]) - w;
      if (str[i][j] == '.')
	{
	  while (str[i][j] == '.' && str[i + 1] != NULL)
	      i++;
	  while (j && str[i][j] == '.')
	      j--;
	  ft_putstr("\nCECI EST LE I == ");
	  ft_putnbr(i);
	  ft_putchar('\n');
	  ft_putstr("\nCECI EST LE y == ");
	  ft_putnbr(y);
	  ft_putchar('\n');
	  ft_putstr("\nCECI EST LE j == ");
	  ft_putnbr(j);
	  ft_putchar('\n');
	  ft_putstr("\nCECI EST LE w == ");
	  ft_putnbr(w);
	  ft_putchar('\n');
	  ft_putstr("\nCECI EST LE X == ");
	  ft_putnbr(x);
	  ft_putchar('\n');
	  if (i == x && j == 0)
	    {
	      ft_putstr("taiiiin");
	      y++;
	    }
	  else
	    {
	      ft_putstr("NUMBER\n");
	      return (ft_transfotab(i, str, y));
	    }
	  w++;
	}
      //      i++;
    }
  return (str);
}
