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

  w = 1;
  y = 0;
  j = 0;
  i = 0;
  while(str[i])
    {
      i = 0;
      j = x - w;
      while (str[i][j] == '.' && str[i + 1] != NULL && i < (x - w))
	i++;
      while (j && str[i][j] == '.')
	j--;
      if (i == x - w && j == 0 && str[i][j] == '.')
	  y++;
      else
	  return (ft_transfotab(x, str, y));
      w++;
     }
  return (str);
}

