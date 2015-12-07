/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:40:25 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 14:01:12 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <string.h>
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

typedef struct	s_list
{
	char			*str;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;
typedef	char **(t_s_opp)(char *, char **);

typedef struct	s_opp
{
	char *str;
	t_s_opp func;
}				t_opp;

t_opp gl_opptab[] = {
	{"su", &ft_su},								\
	{"sd", &ft_sd},										\
	{"square", &ft_square},								\
	{"ll", &ft_ll},										\
	{"rll", &ft_rll},									\
	{"sl", &ft_sl},										\
	{"rsl", &ft_rsl},									\
	{"ill", &ft_ill},									\
	{"isl", &ft_isl},									\
	{"irsl", &ft_irsl},									\
	{"irll", &ft_irll},									\
	{"t", &ft_t},										\
	{"rt", &ft_rt},										\
	{"lt", &ft_lt},										\
	{"rit", &ft_rit},									\
	{"s", &ft_s},										\
	{"z", &ft_z},										\
	{"ups", &ft_ups}, \
	{"upz", &ft_upz}
};

int     ft_strlen(char *str);
void    ft_putchar(char c);
void    ft_putstr(char *str);
char    *ft_strcat(char *s1, char *s2);
char    *ft_dupstrcat(char *s1, char *s2);
t_file	ft_fillit_read_open(char **av);
void    *ft_memset(void *b, int c, size_t n);
void    *ft_memalloc(size_t size);
int     ft_error_check(t_file file);
void	ft_is_sharp(char *str, t_list **list);
void	ft_is_square(char *str, t_list **list);
void	ft_is_stick(char *str, t_list **list);
void	ft_is_t(char *str, t_list **list);
void	ft_is_l(char *str, t_list **list);
void	ft_detect_forms(char *str, t_list **list);
void    ft_putnbr(int n);
t_list  *ft_create_elem(char *elem);
char	*ft_strdup(char *s1);
char	*ft_strcpy(char *dest, char *src);
void    ft_list_push_back(t_list **begin_list, char *newelem);
char    *ft_strjoin(char *s1, char *s2);
int     ft_list_size(t_list **begin_list);
void    ft_resolve(t_list **begin_list);
char **ft_tab_init(int i);
void    *ft_memset(void *b, int c, size_t n);
#endif
