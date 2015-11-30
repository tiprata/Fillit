/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:57:14 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/30 21:24:16 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     main(int ac, char **av)
{
	t_file file;

	if (ac > 1)
	{
		file = ft_fillit_read_open(av);
		file = ft_analysis(file);
	}
    return (0);
}
