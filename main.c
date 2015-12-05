/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:57:14 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/05 18:09:17 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     main(int ac, char **av)
{
	t_file file;

	if (ac != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	file = ft_fillit_read_open(av);
	if (ft_error_check(file) == -1)
	{
		write(1, "error\n", 6);
		return (0);
	}
//	write (1, file.total[0], ft_strlen(file.total[0]));
    return (0);
}
