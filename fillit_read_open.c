/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_read_open.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:32:24 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 17:27:36 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file		ft_fillit_read_open(char **av)
{
	char	buf[BUF_SIZE + 1];
	t_file	file;
	t_form form;
	t_list *list;
	t_list *afflist;

	afflist = list;
	list = ft_create_elem("first");
	file.fd = open(av[1], O_RDONLY);
	file.stock = ft_memalloc(7);
	file.tetrinb = 0;
	while ((file.ret = read(file.fd, buf, BUF_SIZE)))
	{
	  file.tetrinb++;
	  buf[file.ret] = '\0';
	  list = ft_detect_forms(buf, list);
	  file.stock = ft_dupstrcat(file.stock, buf);
	}
	while (afflist)
	{
		ft_putstr(afflist->str);
		ft_putstr("\n__________\n");
		afflist = afflist->next;
	}
	return (file);
}
