/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:11:57 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 17:38:11 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sl(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  if (k ==1)
    {
      str2[i][j] = a;
      str2[i + 1][j] = a;
      str2[i + 1][j + 1] = a;
      str2[i + 1][j + 2] = a;
      return (str2);
    }
  while (i < k - 2 && j < k - 3)
    {
      if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 1][j + 1] == '.'
	  && str2[i + 1][j + 2] == '.')
	{
	  str2[i][j] = a;
	  str2[i + 1][j] = a;
	  str2[i + 1][j + 1] = a;
	  str2[i + 1][j + 2] = a;
	  return (str2);
	}
      else
	{
	  j++;
	}
      if (j == k - 4)
	{
	  i++;
	  j = 0;
	}
    }
  return (str2);
}

char	**ft_rsl(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2 && j < k - 3)
    {
      if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
	  str2[i + 1][j] == '.')
	{
	  str2[i][j] = a;
	  str2[i][j + 1] = a;
	  str2[i][j + 2] = a;
	  str2[i + 1][j] = a;
	  return (str2);
	}
      else
	{
	  j++;
	}
      if (j == k - 4)
	{
	  i++;
	  j = 0;
	}
    }
  return (str2);
}

char	**ft_ill(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 1;
  while (i < k - 3 && j < k - 2)
    {
      if (str2[i][j] == '.' && str2[i + 1][j] == '.'
	  && str2[i + 2][j] == '.' && str2[i + 2][j - 1] == '.')
	{
	  str2[i][j] = a;
	  str2[i + 1][j] = a;
	  str2[i + 2][j] = a;
	  str2[i + 2][j - 1] = a;
	  return (str2);
	}
      else
	{
	  j++;
	}
      if (j == k - 3)
	{
	  i++;
	  j = 1;
	}
    }
  return (str2);
}

char	**ft_isl(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 4 && j < k - 1)
    {
      if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 2][j] == '.' &&
	  str2[i + 2][j + 1] == '.')
	{
	  str2[i][j] = a;
	  str2[i + 1][j] = a;
	  str2[i + 2][j] = a;
	  str2[i + 2][j + 1] = a;
	  return (str2);
	}
      else
	{
	  j++;
	}
      if (j == k - 2)
	{
	  i++;
	  j = 0;
	}
    }
  return (str2);
}

char	**ft_irsl(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2 && j < k - 3)
    {
      if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
	  str2[i + 1][j + 2] == '.')
	{
	  str2[i][j] = a;
	  str2[i][j + 1] = a;
	  str2[i][j + 2] = a;
	  str2[i + 1][j + 2] = a;
	  return (str2);
	}
      else
	{
	  j++;
	}
      if (j == k - 3)
	{
	  i++;
	  j = 0;
	}
    }
  return (str2);
}
