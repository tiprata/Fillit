/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:42:10 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 18:48:46 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_s(char *str, char **str, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str[i][j] == '.' && str[i][j + 1] == '.' && str[i][j + 2] == '.' &&
			str[i + 1][j] == '.')
		{
			str[i][j] = '#';
			str[i][j + 1] = '#';
			str[i][j + 2] = '#';
			str[i + 1][j] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (j == (k * 3) - 4)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}

char	**ft_ill(char *str, char **str, int k)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < (k * 3) - 3 && j < (k * 3) - 2)
	{
		if (str[i][j] == '.' && str[i + 1][j] == '.'
			&& str[i + 2][j] == '.' && str[i + 2][j - 1] == '.')
		{
			str[i][j] = '#';
			str[i + 1][j] = '#';
			str[i + 2][j] = '#';
			str[i + 2][j - 1] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (j = (k * 3) - 3)
		{
			i++;
			j = 1;
		}
	}
	return (str);
}

char	**ft_isl(char *str, char **str, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 4 && j < (k * 3) - 1)
	{
		if (str[i][j] == '.' && str[i + 1][j] == '.' && str[i + 2][j] == '.' &&
			str[i + 2][j + 1] == '.')
		{
			str[i][j] = '#';
			str[i + 1][j] = '#';
			str[i + 2][j] = '#';
			str[i + 2][j + 1] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (k == (k * 3) - 2)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}

char	**ft_irsl(char *str, char **str, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str[i][j] == '.' && str[i][j + 1] == '.' && str[i][j + 2] == '.' &&
			str[i + 1][j + 2] == '.')
		{
			str[i][j] = '#';
			str[i][j + 1] = '#';
			str[i][j + 2] = '#';
			str[i + 1][j + 2] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (j == (k * 3) - 3)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}
