/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stick.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:41:20 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 20:43:10 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_stick(t_file file, t_form form, t_pos pos, int i)
{
	while (file.total[pos.x][pos.y] != '#' && file.total[pos.x][pos.y])
	{
		if (file.total[pos.x][pos.y] == '\n')
			pos.x++;
		pos.y++;
	}
	if (file.total[pos.x][pos.y + 1] == '#')
	{
		while (file.total[pos.x][pos.y] == '#')
			pos.y++;
		if (pos.y == 3 * i)
			form.sd++;
	}
	if (file.total[pos.x + 1][pos.y] == '#')
	{
		while (file.total[pos.x][pos.y] == '#')
			pos.x++;
		if (pos.x == 3 * i)
			form.su++;
	}
    return (form);
}
