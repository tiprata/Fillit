/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:13:34 by tiprata           #+#    #+#             */
/*   Updated: 2015/11/30 14:15:12 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *str;
    size_t  j;

    j = start;
    i = 0;
    if (!(str = (char *)malloc(sizeof(char) * len)))
        return (NULL);
    while (start < len + j)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
