/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sharp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:48:11 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/03 01:46:19 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_sharp(char *str, t_form form)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	if (str[i + 1] == '#' && str[i + 3] == '#' && str[i + 4] == '#')
		form.s++;
	if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		form.z++;
	if (str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
		form.ups++;
	if (str[i + 3] == '#' && str[i + 4] == '#' && str[i + 7] == '#')
		form.upz++;
	return (form);
}
