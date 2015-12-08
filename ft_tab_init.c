/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 18:35:23 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 16:48:00 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_tab_init(int i)
{
	int j;
	char **str;

	j = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (i * 3) + 1)))
		return (NULL);
	while (j != i * 3)
	{
		if (!(str[j] = (char *)malloc(sizeof(char) * i * 3 + 1)))
			return (NULL);
		ft_memset(str[j], '.', i * 3);
		str[j][i * 3 + 1] = '\0';
		j++;
	}
	return (str);
}
