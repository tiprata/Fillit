/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:40:25 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/01 17:00:46 by tiprata          ###   ########.fr       */
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
	char	**total;
	int		tetrinb;
}				t_file;

int     ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
size_t  ft_line_count(char const *s, char c);
char    **ft_strsplit(char const *s, char c);
char    *ft_strcat(char *s1, const char *s2);
char    *ft_dupstrcat(char *s1, char *s2);
t_file	ft_fillit_read_open(char **av);
void    *ft_memset(void *b, int c, size_t n);
void    *ft_memalloc(size_t size);
int     ft_error_check(t_file file);
#endif
