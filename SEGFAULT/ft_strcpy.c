/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:44:57 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 17:35:55 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	size_t size;

	size = 0;
	while (src[size])
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
