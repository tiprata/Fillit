/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:42:03 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 17:38:18 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_ret	ft_irll(int k, char a, t_ret ret)
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
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i + 1][j + 1] == '.'
	      && ret.str[i + 2][j + 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i + 1][j + 1] = a;
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

t_ret	ft_lt(int k, char a, t_ret ret)
{
  int i;
  int j;
  
  i = 0;
  j = 1;
  while (i < k - 2)
    {
      j = 1;
      while (j < k)
	{
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j - 1] == '.' && ret.str[i + 1][j] == '.'
	      && ret.str[i + 2][j] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j - 1] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;	  
	}
      i++;
    }
  return (ret);
}

t_ret	ft_rit(int k, char a, t_ret ret)
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
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j + 1] == '.'
	      && ret.str[i + 1][j] == '.' && ret.str[i + 2][j] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j + 1] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 2][j] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  j++;
	}
      i++;
    }
  return (ret);
}

t_ret	ft_t(int k, char a, t_ret ret)
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
	  if (ret.str[i][j] == '.' && ret.str[i][j + 1] == '.' && ret.str[i][j + 2] == '.' &&
	      ret.str[i + 1][j + 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i][j + 1] = a;
	      ret.str[i][j + 2] = a;
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

t_ret	ft_rt(int k, char a, t_ret ret)
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
	  if (ret.str[i][j] == '.' && ret.str[i + 1][j - 1] == '.' && ret.str[i + 1][j] == '.'
	      && ret.str[i + 1][j + 1] == '.')
	    {
	      ret.str[i][j] = a;
	      ret.str[i + 1][j - 1] = a;
	      ret.str[i + 1][j] = a;
	      ret.str[i + 1][j + 1] = a;
	      ret.i = 1;
	      return (ret);
	    }
	  i++;
	}
      i++;
    }
  return (ret);
}
