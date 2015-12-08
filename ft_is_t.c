/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:43:19 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 18:03:06 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_is_t(char *str, t_list **list)
{
	int i;

	i = 0;
	while (str[i] != '#' && str[i] != '\0')
		i++;
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		ft_list_push_back(list, "lt");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
		ft_list_push_back(list, "rit");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
		ft_list_push_back(list, "t");;
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		ft_list_push_back(list, "rt");
}
