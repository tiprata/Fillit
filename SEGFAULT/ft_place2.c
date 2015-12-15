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

t_ret	ft_sl(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  if (k == 1)
    {
      ret.str[i][j] = a;
      ret.str[i + 1][j] = a;
      ret.str[i + 1][j + 1] = a;
      ret.str[i + 1][j + 2] = a;
      ret.i = 1;
      return (ret);
    }
  while (i < k - 1)
    {
      j = 0;
      while (j < k - 2)
	{
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j] == '.' && ret.str[i + 1][j + 1] == '.'
	      && ret.str[i + 1][j + 2] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 1][j + 1] = a;
	      ret.str[i + 1][j + 2] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_rsl(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2)
    {
      j = 0;
      while (j < k - 3)
	{
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i][j + 2] == '.' &&
	      ret.str[i + 1][j] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i][j + 2] = a;
	      ret.str[i + 1][j] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_ill(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 1;
  while (i < k - 3)
    {
      j = 1;
      while (j < k - 2)
	{
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j] == '.'
	      && ret.str[i + 2][j] == '.' && ret.str[i + 2][j - 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.str[i + 2][j - 1] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_isl(int k, char a, t_ret ret)
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

t_ret	ft_irsl(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (i < k - 2)
    {
      j = 0;
      while (j < k - 3)
	{
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i][j + 2] == '.' &&
	      ret.str[i + 1][j + 2] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i][j + 2] = a;
	      ret.str[i + 1][j + 2] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}
