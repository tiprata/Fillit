/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:09:19 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/30 15:03:24 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_strsplit(char const *s, char c)
{
	size_t  i;
	size_t  j;
	size_t  x;
	char    **str;

	x = 0;
	i = 0;
	j = ft_line_count(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * j + 1)))
		return (NULL);
	while (i < j)
	{
		str[i] = ft_strsub(s, x, 5);
		x += 5;
		i++;
	}
	return (str);
}
