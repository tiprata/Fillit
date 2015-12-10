`/* ************************************************************************** */
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

char **ft_transfotab(int x, int y, char **str)
{
  char **tab;
  int i;
  int j;

  free(str);
  return (tab);
}

char	**ft_resize_tab(char **str, int x)
{
  int i;
  int j;
  int y;
    
    j = 0;
  i = 0;
  while(str[i])
    {
      j = ft_strlen(str[i]) - 1;
      if (str[i][j] == '.')
	{
	  while (j && str[i][j] == '.' && str[i])
	      i++;
	  if (i == x)
	      y++;
	  else
	    return (transfortab(i, j);
	  j--;
	  i--;
	}
      i++;
    }
}
