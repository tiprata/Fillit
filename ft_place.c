/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:12:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/08 14:48:58 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_su(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 3 && j < (k * 3) - 1)
	{
		if (str2[i][j] == '.' && str2[i + 1][j] == '.' && str2[i + 2][j] == '.' &&
			str2[i + 3][j] == '.')
		{
			str2[i][j] = '#';
			str2[i + 1][j] = '#';
			str2[i + 2][j] = '#';
			str2[i + 3][j] = '#';
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

char	**ft_sd(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 1 && j < (k * 3) - 4)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
			str2[i][j + 3] == '.')
		{
			str2[i][j] = '#';
			str2[i][j + 1] = '#';
			str2[i][j + 2] = '#';
			str2[i][j + 3] = '#';
			return (str2);
		}
		else
		{
			j++;
		}
		if (j == (k * 3) - 5)
		{
			j = 0;
			i++;
		}
	}
	return (str2);
}

char	**ft_square(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 2)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i + 1][j] == '.' &&
			str2[i + 1][j + 1] == '.')
		{
			str2[i][j] = '#';
			str2[i][j + 1] = '#';
			str2[i + 1][j] = '#';
			str2[i + 1][j + 1] = '#';
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

char	**ft_ll(char *str1, char **str2, int k)
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

char	**ft_rll(char *str1, char **str2, int k)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 4 && j < (k * 3) - 1)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i + 1][j] == '.' &&
			str2[i + 2][j] == '.')
		{
			str2[i][j] = '#';
			str2[i][j + 1] = '#';
			str2[i + 1][j] = '#';
			str2[i + 2][j] = '#';
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
