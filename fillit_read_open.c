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
#include <string.h>

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

char    *ft_strxdup(char const *s, size_t x, size_t y)
{
  size_t          i;
  char            *str;

  i = 0;
  if (!(str = (char *)malloc(sizeof(char) * y - x + 1)))
    return (NULL);
  while (x < y)
    {
      str[i] = s[x];
      i++;
      x++;
    }
  str[i] = '\0';
  return (str);
}

size_t  ft_line_count(char const *s, char c)
{
  size_t i;
  size_t result;
  size_t k;

  k = 0;
  result = 0;
  i = 0;
  while (s[i])
    {
      if (s[i] == c)
	{
	  while (s[i] == c)
	    if (s[++i] == '\0' && k == 0)
	      return (result);
	  result++;
	}
      else
	{
	  k = 1;
	  if (s[++i + 1] == '\0' && result == 0)
	    return (1);
	}
    }
  return (s[i - 1] == c && k == 1 && result != 1 ? result - 1 : result);
}

char    **ft_strsplit(char const *s, char c)
{
  size_t  i;
  size_t  j;
  size_t  x;
  size_t  y;
  char    **str;

  x = 0;
  y = 0;
  i = 0;
  j = ft_line_count(s, c);
  if (!(str = (char **)malloc(sizeof(char *) * j + 1)))
    return (NULL);
  while (i < j)
    {
      x = y;
      while (s[x] == c && s[x++])
	y = x;
      while (s[y] != c && s[y])
	y++;
      str[i] = ft_strxdup(s, x, y);
      i++;
      while (s[y] == c && s[y])
	y++;
    }
  return (str);
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

char	**ft_fillit_read_open(char **av)
{
	char	buf[BUF_SIZE + 1];
	char **re_turn;
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
	re_turn = ft_strsplit(file.stock, '\n');
	return (re_turn);
}

int		main(int ac, char **av)
{
  char **ok;

	if (ac > 1)
	  {
		ok = ft_fillit_read_open(av);
		ft_putstr(ok[0]);
		ft_putstr("============\n");
		ft_putstr(ok[1]);
		ft_putstr("============\n");
		ft_putstr(ok[2]);
		ft_putstr("============\n");
	  }
	return (0);
}
