#include "libft.h"

void	ft_putab(char **str)
{
  int i;
  int j;

  i = 0;
  j = 0;

  while (str[i])
    {
      while (str[i][j])
	{
	  ft_putchar(str[i][j]);
	  ft_putchar(' ');
	  j++;
	}
	ft_putchar('\n');
	j = 0;
	i++;
    }
}
