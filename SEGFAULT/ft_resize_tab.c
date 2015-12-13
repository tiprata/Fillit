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
  while (i < (x - y))
    {
      if (!(tab[i] = (char *)malloc(sizeof(char) * (x - y) + 1)))
	return (NULL);
      while (str[i][j] && j < (x - y))
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
  int tmp;
  int tmp2 = 0;

  tmp = 0;
  w = 1;
  y = 0;
  j = 0;
  i = 0;
  i = 0;
      
  tmp2 = -1;
  ft_putab(str);
  while(str[i])
    {
      tmp = i;
      i = 0;
      j = x - w;
      tmp2 = j;
      while (str[i][j] == '.' && str[i + 1] != NULL && i < (x - w))
	i++;
      ft_putstr("YOLOKIIIII=======");
      ft_putnbr(i);
      ft_putchar('\n');
      ft_putstr("YOLOKJJJJJ=======");
      ft_putnbr(j);
      ft_putchar('\n');
      while (j && str[i][j] == '.')
	j--;
      if (i == x - w && j == 0 && str[i][j] == '.')
	{
	  ft_putstr("JJJ ==== ");
	  ft_putnbr(tmp2);
	  ft_putchar('\n');
	  ft_putstr("I ==== ");
	  ft_putnbr(tmp);
	  ft_putchar('\n');
	  ft_putendl("ET ENFIN");
	  ft_putchar(str[i][j]);
	  ft_putendl("+++++");
	  y++;
	}
      else
	{
	  ft_putstr("TMP = ");
	  ft_putnbr(tmp);
	  ft_putchar('\n');
	  ft_putstr("Y = ");
	  ft_putnbr(y);
	  ft_putchar('\n');
	  ft_putstr("J = ");
	  ft_putnbr(j);
	  ft_putchar('\n');
	  return (ft_transfotab(x, str, y));
	}
      w++;
     }
  return (str);
}

