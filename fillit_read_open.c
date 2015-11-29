/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_read_open.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:32:24 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/29 13:42:49 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char    *ft_strcat(char *s1, const char *s2)
{
	size_t size;
	size_t count;

	count = 0;
	size = ft_strlen(s1);
	while (s2[count])
	{
		s1[size] = s2[count];
		size++;
		count++;
	}
	s1[size] = '\0';
	return (s1);
}
char	*ft_dupstrcat(char *s1, char *s2)
{
	char *str;
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1 + BUF_SIZE)))
		return (NULL);
	str = ft_strcat(s1, s2);
	return (str);
}

char *ft_fillit_read_open(char **av)
{
	char	buf[BUF_SIZE + 1];
//	char **re_turn;
	t_file	file;
	int i;

	i = 0;
	file.fd = open(av[1], O_RDONLY);
	if (!(file.stock = (char *)malloc(sizeof(char) * 7)))
		return (NULL);

	while ((file.ret = read(file.fd, buf, BUF_SIZE)))
	{
		i++;
		buf[file.ret] = '\0';
		file.stock = ft_dupstrcat(file.stock, buf);
	}
	file.stock[i * BUF_SIZE + 1] = '\0';
	return (file.stock);
	//tab = tab_it(stock);
	//return (tab);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(ft_fillit_read_open(av));
	return (0);
}
