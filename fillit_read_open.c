/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_read_open.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:32:24 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/01 19:15:22 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file		ft_fillit_read_open(char **av)
{
	char	buf[BUF_SIZE + 1];
	t_file	file;

	file.fd = open(av[1], O_RDONLY);
	file.stock = ft_memalloc(7);
	file.tetrinb = 0;
	while ((file.ret = read(file.fd, buf, BUF_SIZE)))
	{
		file.tetrinb++;
		buf[file.ret] = '\0';
		file.stock = ft_dupstrcat(file.stock, buf);
	}
	file.total = ft_strsplit(file.stock, '\n');
	return (file);
}
