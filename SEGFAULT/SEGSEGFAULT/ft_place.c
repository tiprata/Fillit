/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:12:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 17:38:02 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ret	ft_su(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 3)
    {
      j = 0;
      while (j < k)
	{
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j] == '.' && ret.str[i + 2][j] == '.' &&
	      ret.str[i + 3][j] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.str[i + 3][j] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_sd(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k)
    {
      j = 0;
      while (j < k - 3)
	{
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i][j + 2] == '.' &&
	      ret.str[i][j + 3] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i][j + 2] = a;
	      ret.str[i][j + 3] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_square(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 1)
    {
      j = 0;
      while (j < k - 1)
	{
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i + 1][j] == '.' &&
	      ret.str[i + 1][j + 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 1][j + 1] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_ll(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2)
    {
      j = 0;
      while (j < k - 1)
	{
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j] == '.' && ret.str[i + 2][j] == '.' &&
	      ret.str[i + 2][j + 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.str[i + 2][j + 1] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_rll(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2)
    {
      j = 0;
      while (j < k - 1)
	{
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i + 1][j] == '.' &&
	      ret.str[i + 2][j] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.i = 0;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}
