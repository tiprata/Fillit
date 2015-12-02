/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sharp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:48:11 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 20:49:46 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_sharp(t_file file, t_form form, t_pos pos)
{
	while (file.total[pos.x][pos.y] != '#' && file.total[pos.x][pos.y])
	{
		if (file.total[pos.x][pos.y] == '\n')
			pos.x++;
		pos.y++;
	}
	if (file.total[pos.x][pos.y + 1] == '#')
	{
		if (file.total[pos.x + 1][pos.y] == '#' &&
			file.total[pos.x + 1][pos.y + 1] == '#')
			form.rsh++;
		if (file.total[pos.x + 1][pos.y] == '#' &&
			file.total[pos.x + 1][pos.y - 1] == '#')
			form.sh++;
	}
	if (file.total[pos.x + 1][pos.y] == '#')
	{
		if (file.total[pos.x + 1][pos.y + 1] == '#' &&
			file.total[pos.x + 2][pos.y + 1] == '#')
			form.ush++;
		if (file.total[pos.x + 1][pos.y - 1] == '#' &&
			file.total[pos.x + 2][pos.y - 1] == '#')
			form.ursh++;
	}
}
