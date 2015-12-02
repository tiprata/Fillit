/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:36:47 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 20:37:38 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_square(t_file file, t_form form, t_pos pos)
{
    while (file.total[pos.x][pos.y] != '#' && file.total[pos.x][pos.y])
	{
		if (file.total[pos.x][pos.y] == '\n')
			pos.x++;
		pos.y++;
	}
	if (file.total[pos.x][pos.y + 1] == '#')
		if (file.total[pos.x + 1][pos.y] == '#')
			if (file.total[pos.x + 1][pos.y + 1])
				form.square++;
	return (form);
}
