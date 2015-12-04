/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_forms.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:07:16 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 18:13:34 by tiprata          ###   ########.fr       */
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

void	ft_detect_forms(char *str, t_list *list)
{
	ft_is_t(str, list);
	ft_is_square(str, list);
	ft_is_stick(str, list);
	ft_is_sharp(str, list);
	ft_is_l(str, list);
}
