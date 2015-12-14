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

int	ft_sqrt(int x)
{
  int left;
  int right;
  int result;
  int mid;
  
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
  return (result);
}

