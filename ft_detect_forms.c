/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_forms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:07:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/03 02:08:51 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-2147483648");
    if (n < 0 && n > -2147483648)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n < 10 && n > -2147483648)
        ft_putchar(n + 48);
    else if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

t_form	ft_init_form(t_form form)
{
	form.su = 0;
	form.sd = 0;
	form.square = 0;
	form.ll = 0;
	form.rll = 0;
	form.sl = 0;
	form.rsl = 0;
	form.ill = 0;
	form.isl = 0;
	form.irsl = 0;
	form.irll = 0;
	form.t = 0;
	form.rt = 0;
	form.lt = 0;
	form.rit = 0;
	form.sh = 0;
	form.rsh = 0;
	form.ush = 0;
	form.ursh = 0;
	return (form);
}
t_form	ft_detect_forms(char *str)
{
	t_form form;

	form = ft_init_form(form);
	form = ft_is_square(file, form);
	form = ft_is_stick(file, form);
	form = ft_is_t(file, form);
	form = ft_is_sharp(file, form);
	while (i < 20)
	{
		ft_putstr(file.total[i]);
		ft_putchar('|');
		i++;
}
	return (form);
}
