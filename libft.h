/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:40:25 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 22:03:00 by tiprata          ###   ########.fr       */
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
	struct s_list	*next;
}				t_list;
typedef char	**(t_s_place)(char **, int);
typedef struct	s_place
{
	char *s;
	t_s_place *func;
}				t_place;
extern const t_place gl_placetab[19];

void	ft_putendl(char *s);
char	**ft_call_func(char **tab, int i, int j);
char	**ft_su(char **str2, int k);
char	**ft_sd(char **str2, int k);
char	**ft_square(char **str2, int k);
char	**ft_ll(char **str2, int k);
char	**ft_rll(char **str2, int k);
char	**ft_sl(char **str2, int k);
char	**ft_rsl(char **str2, int k);
char	**ft_ill(char **str2, int k);
char	**ft_isl(char **str2, int k);
char	**ft_irsl(char **str2, int k);
char	**ft_irll(char **str2, int k);
char	**ft_lt(char **str2, int k);
char	**ft_rit(char **str2, int k);
char	**ft_t(char **str2, int k);
char	**ft_rt(char **str2, int k);
char	**ft_s(char **str2, int k);
char	**ft_z(char **str2, int k);
char	**ft_ups(char **str2, int k);
char	**ft_upz(char **str2, int k);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcat(char *s1, char *s2);
char	*ft_dupstrcat(char *s1, char *s2);
t_file	ft_fillit_read_open(char **av);
void	*ft_memset(void *b, int c, size_t n);
void	*ft_memalloc(size_t size);
int		ft_error_check(t_file file);
void	ft_is_sharp(char *str, t_list **list);
void	ft_is_square(char *str, t_list **list);
void	ft_is_stick(char *str, t_list **list);
void	ft_is_t(char *str, t_list **list);
void	ft_is_l(char *str, t_list **list);
void	ft_detect_forms(char *str, t_list **list);
void	ft_putnbr(int n);
t_list	*ft_create_elem(char *elem);
char	*ft_strdup(char *s1);
char	*ft_strcpy(char *dest, char *src);
void	ft_list_push_back(t_list **begin_list, char *newelem);
char	*ft_strjoin(char *s1, char *s2);
int		ft_list_size(t_list **begin_list);
void	ft_resolve(t_list *begin_list, int k, int sizelist);
char	**ft_tab_init(int i);
void	*ft_memset(void *b, int c, size_t n);
#endif
