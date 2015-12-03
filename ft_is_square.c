/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 20:36:47 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/03 02:23:21 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_form   ft_is_square(char *str, t_form form)
{
	int i;

	i = 0;
	while (str[i] != '#' && str[i])
		i++;
	if (str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
		form.square++;
	return (form);
}
