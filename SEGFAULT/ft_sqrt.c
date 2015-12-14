/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:59:00 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/14 13:59:02 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_sqrt(int x)
{
  int left;
  int right;
  double result;
  int mid;
  int reres;

  left = 1;
  right = x;
  if (x == 0)
    return (0);
  while (left <= right)
    {
      mid = left + ((right - left) / 2);
      if (mid <= x / mid)
	{
	  left = mid + 1;
	  result = mid;
	}
      else
	right = mid - 1;
    }
  if (result / 10 != 0)
      result++;
  reres = result;
  return (reres);
}
