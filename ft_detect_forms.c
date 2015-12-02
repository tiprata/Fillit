/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_forms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:07:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/02 20:53:14 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		t_form = ft_is_square(file, form, pos);
		i++;
	}
	return (form);
}
