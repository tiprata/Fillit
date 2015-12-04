/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:41:50 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 17:25:30 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_is_l(char *str, t_list *list)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
		ft_list_push_back(list, "ll");
	if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		ft_list_push_back(list, "rll");
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		ft_list_push_back(list, "sl");
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
		ft_list_push_back(list, "rsl");
	if (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
		ft_list_push_back(list, "ill");;
	if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		ft_list_push_back(list, "isl");;
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
		ft_list_push_back(list, "irsl");;
	if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		ft_list_push_back(list, "irll");;
}
