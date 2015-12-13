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
	  if (str[i][j] == '.')
	    {
	      ft_putstr("\x1B[31m");
	      ft_putchar(str[i][j]);
	      ft_putstr("\033[0m");
	      ft_putchar(' ');
	    }
	  else
	    {
	      ft_putstr("\x1B[32m");
	      ft_putchar(str[i][j]);
	      ft_putstr("\033[0m");
	      ft_putchar(' ');
	    }
	  j++;
	}
      ft_putstr("\x1B[36m");
      ft_putnbr(i);
      ft_putstr("\033[0m");
      ft_putchar('\n');
      j = 0;
      i++;
    }
}
