/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_forms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:07:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 14:41:13 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_form	ft_is_square(t_file file, t_form form, t_pos pos)
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

static t_form	ft_is_stick(t_file file, t_form form, t_pos pos, int i)
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
	return (form)
}

t_form	ft_detect_forms(t_file file)
{
	t_form form;
	t_pos pos;
	int i;

	pos.x = 0;
	pos.y = 0;
	while (i < file.tetrinb)
	{
		pos.x = i * 5;
		pos.y = 0;
		t_form = ft_is_square(file, form, pos, i);
		i++;
	}
	return (form);
}
