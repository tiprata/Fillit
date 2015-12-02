/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_t.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:43:19 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 20:47:57 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_t(t_file file, t_form form, t_pos pos)
{
    while (file.total[pos.x][pos.y] != '#' && file.total[pos.x][pos.y])
	{
		if (file.total[pos.x][pos.y] == '\n')
			pos.x++;
		pos.y++;
	}
	if (file.total[pos.x + 1][pos.y] == '#' &&
		file.total[pos.x + 2][pos.y] == '#')
	{
		if (file.total[pos.x + 1][pos.y - 1] == '#')
			form.lt++;
		if (file.total[pos.x + 1][pos.y + 1] == '#')
			form.rit++;
	}
	if (file.total[pos.x][pos.y + 1] == '#' &&
		file.total[pos.x][pos.y + 2] == '#')
		if (file.total[pos.x + 1][pos.y + 1] == '#')
			form.t++;
	if (file.total[pos.x + 1][pos.y - 1] == '#' &&
		file.total[pos.x + 1][pos.y] == '#')
		if (file.total[pos.x + 1][pos.y + 1] == '#')
			form.rt++;
	return (form);
}
