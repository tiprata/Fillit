/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:11:57 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/08 14:43:54 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_sl(char *str1, char **str2, int k)
{
	int i;
 	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 1][j + 1] == '.'
			&& str2[i + 1][j + 2] == '.')
		{
			str2[i][j] = '#';
			str2[i + 1][j] = '#';
			str2[i + 1][j + 1] = '#';
			str2[i + 1][j + 2] = '#';
			return (str2);
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
	return (str2);
}

char	**ft_rsl(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
			str2[i + 1][j] == '.')
		{
			str2[i][j] = '#';
			str2[i][j + 1] = '#';
			str2[i][j + 2] = '#';
			str2[i + 1][j] = '#';
			return (str2);
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
	return (str2);
}

char	**ft_ill(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < (k * 3) - 3 && j < (k * 3) - 2)
	{
		if (str2[i][j] == '.' && str2[i + 1][j] == '.'
			&& str2[i + 2][j] == '.' && str2[i + 2][j - 1] == '.')
		{
			str2[i][j] = '#';
			str2[i + 1][j] = '#';
			str2[i + 2][j] = '#';
			str2[i + 2][j - 1] = '#';
			return (str2);
		}
		else
		{
			j++;
		}
		if (j == (k * 3) - 3)
		{
			i++;
			j = 1;
		}
	}
	return (str2);
}

char	**ft_isl(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 4 && j < (k * 3) - 1)
	{
		if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 2][j] == '.' &&
			str2[i + 2][j + 1] == '.')
		{
			str2[i][j] = '#';
			str2[i + 1][j] = '#';
			str2[i + 2][j] = '#';
			str2[i + 2][j + 1] = '#';
			return (str2);
		}
		else
		{
			j++;
		}
		if (j == (k * 3) - 2)
		{
			i++;
			j = 0;
		}
	}
	return (str2);
}

char	**ft_irsl(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
			str2[i + 1][j + 2] == '.')
		{
			str2[i][j] = '#';
			str2[i][j + 1] = '#';
			str2[i][j + 2] = '#';
			str2[i + 1][j + 2] = '#';
			return (str2);
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
	return (str2);
}
