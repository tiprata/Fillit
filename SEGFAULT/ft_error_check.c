/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:49:44 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/05 17:57:31 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_error_check(t_file file)
{
	while (file.stock[file.count])
	{
		if (file.stock[file.count] != '#' && file.stock[file.count] != '.'
			&& file.stock[file.count] != '\n' && file.stock[file.count] != '\0')
			return (-1);
		if (file.stock[file.count] == '#')
			file.err++;
		file.count++;
	}
	if (file.tetrinb > 26 || file.err != 4 * file.tetrinb ||
		file.tetrinb * BUF_SIZE - 1 != ft_strlen(file.stock) || file.fd == -1)
		return (-1);
	return (0);
}
