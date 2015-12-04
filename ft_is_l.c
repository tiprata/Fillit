/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_l.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 10:41:50 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 11:11:40 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_l(char *str, t_form form)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	if (str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
		form.ll++;
	if (str[i + 1] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
		form.rll++;
	if (str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
		form.sl++;
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
		form.rsl++;
	if (str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
		form.ill++;
	if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		form.isl++;
	if (str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
		form.irsl++;
	if (str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		form.irll++;
	return (form);
}
