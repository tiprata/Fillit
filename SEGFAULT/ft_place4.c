/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:42:10 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 23:21:35 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_s(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 1;
  while (i < k - 1)
    {
      j = 1;
      while (j < k - 1)
	{
	  if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i + 1][j - 1] == '.'
	      && str2[i + 1][j] == '.')
	    {
	      str2[i][j] = a;
	      str2[i][j + 1] = a;
	      str2[i + 1][j - 1] = a;
	      str2[i + 1][j] = a;
	      return (str2);
	    }
	  j++;
	}
      i++;
    }
  return (str2);
}

char	**ft_z(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 1)
    {
      j = 0;
      while (j < k - 2)
	{
	  if (str2[i][j] == '.' && str2[i][j + 1] == '.'
	      && str2[i + 1][j + 1] == '.' && str2[i + 1][j + 2] == '.')
	    {
	      str2[i][j] = a;
	      str2[i][j + 1] = a;
	      str2[i + 1][j + 1] = a;
	      str2[i + 1][j + 2] = a;
	      return (str2);
	    }
	  j++;
	}
      i++;
    }
  return (str2);
}

char	**ft_ups(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  while (i < k - 2)
    {
      j = 1;
      while (j < k)
	{
	  if (str2[i][j] == '.' && str2[i + 1][j - 1] == '.' && str2[i + 1][j] == '.' &&
	      str2[i + 2][j - 1] == '.')
	    {
	      str2[i][j] = a;
	      str2[i + 1][j - 1] = a;
	      str2[i + 1][j] = a;
	      str2[i + 2][j - 1] = a;
	      return (str2);
	    }
	  j++;
	}
      i++;
    }
  return (str2);
}

char	**ft_upz(char **str2, int k, char a)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  ft_putstr("K=======> ");
  ft_putnbr(k);
  ft_putchar('\n');
  while (i < k - 2)
    {
      j = 0;
      while (j < k - 1)
	{
	  if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 1][j + 1] == '.' &&
	      str2[i + 2][j + 1] == '.')
	    {
	      str2[i][j] = a;
	      str2[i + 1][j] = a;
	      str2[i + 1][j + 1] = a;
	      str2[i + 2][j + 1] = a;
	      return (str2);
	    }
	  j++;
	}
      i++;
    }
  return (str2);
}
