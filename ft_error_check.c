/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:49:44 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/01 17:20:18 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		ft_error_check(t_file file)
{
	while (file.stock[file.count++])
	{
		if (file.stock[file.count] != '#' && file.stock[file.count] != '.'
			&& file.stock[file.count] != '\n')
		{
			ft_putchar();
			return (-1);
		}
		if (file.stock[file.count] == '#')
			file.err++;
	}
	if (file.tetrinb > 26 || file.err != 4 *file.tetrinb  ||
		file.err * BUF_SIZE != ft_strlen(file.stock))
		return (-1);
	ft_putchar(file.err + 48);
	return (0);
}
