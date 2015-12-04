/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:08:47 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/04 20:23:39 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *s1, char *s2)
{
    size_t size;
    size_t count;

    count = 0;
    size = ft_strlen(s1);
    while (s2[count])
    {
        s1[size] = s2[count];
        size++;
        count++;
    }
    s1[size] = '\0';
    return (s1);
}
