#include "libft.h"

char	*ft_dupstrcat(char *s1, char *s2)
{

}

char **ft_fillit_read_open(char **av)
{
	char	buf[BUF_SIZE + 1];
	char **re_turn;
	t_file	*file;

	if (!(file->stock = (char *)malloc(sizeof(char) * 7)))
		return (NULL);
	file->fd = open(av[1], O_RDONLY);
	while (file->ret = read(file->fd, buf, BUF_SIZE))
	{
		buf[file->ret] = '\0';
		file->stock = stack it (file->stock, buf);
	}

	tab = tab_it(stock);
	return (tab);
}
