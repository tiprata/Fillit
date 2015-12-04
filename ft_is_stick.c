/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stick.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:41:20 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 17:59:54 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_is_stick(char *str, t_list *list)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
		ft_list_push_back(list, "sd");
	if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
		ft_list_push_back(list, "su");
}
