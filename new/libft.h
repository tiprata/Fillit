/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:40:25 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/03 02:44:33 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# define BUF_SIZE 21

typedef struct	s_file
{
	int		count;
	int		err;
	int		fd;
	int		ret;
	char	*stock;
	int		tetrinb;
}				t_file;

typedef struct	s_form
{
	int	su; // stick up
	int	sd; // stick down
	int	square; // explicit
	int	ll; // L
	int	rll; // reverse long L
	int	sl; // short L
	int	rsl; // reverse short L
	int	ill; // invert long L
	int	isl; // invert short L
	int	irsl; // invert reverse short L
	int	irll; // invert reverse long L
	int	t; // T
	int	rt; // Reverse T
	int	lt; // left T
	int	rit; // right T
	int	s; // s
	int	z; // z
	int	ups; // up s
	int	upz; // down z
}				t_form;
int     ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
char    *ft_strcat(char *s1, const char *s2);
char    *ft_dupstrcat(char *s1, char *s2);
t_file	ft_fillit_read_open(char **av);
void    *ft_memset(void *b, int c, size_t n);
void    *ft_memalloc(size_t size);
int     ft_error_check(t_file file);
t_form   ft_is_sharp(char *str, t_form form);
t_form   ft_is_square(char *str, t_form form);
t_form   ft_is_stick(char *str, t_form form);
t_form   ft_is_t(char *str, t_form form);
t_form  ft_detect_forms(t_file file);
void    ft_putnbr(int n);
#endif
