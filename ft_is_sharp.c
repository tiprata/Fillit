/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sharp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:48:11 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 21:00:51 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_is_sharp(char *str, t_list **list)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		ft_list_push_back(list, "s");
	if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		ft_list_push_back(list, "z");;
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
		ft_list_push_back(list, "ups");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		ft_list_push_back(list, "upz");
}
