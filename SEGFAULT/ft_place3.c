/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:42:03 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/09 17:38:18 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	**ft_irll(char **str2, int k, char a)
{
	int i;
 	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 3 && j < (k * 3) - 2)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i + 1][j + 1] == '.'
		    && str2[i + 2][j + 1] == '.' && j <= i)
		{
			str2[i][j] = a;
			str2[i][j + 1] = a;
			str2[i + 1][j + 1] = a;
			str2[i + 2][j + 1] = a;
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

char	**ft_lt(char **str2, int k, char a)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < (k * 3) - 3 && j < (k * 3) - 2)
	{
		if (str2[i][j] == '.' && str2[i + 1][j - 1] == '.' && str2[i + 1][j] == '.'
		    && str2[i + 2][j] == '.' && j <= i)
		{
			str2[i][j] = a;
			str2[i + 1][j - 1] = a;
			str2[i + 1][j] = a;
			str2[i + 2][j] = a;
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

char	**ft_rit(char **str2, int k, char a)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 3 && j < (k * 3) - 2)
	{
		if (str2[i][j] == '.' && str2[i + 1][j + 1] == '.'
			&& str2[i + 1][j] == '.' && str2[i + 2][j] == '.' && j <= i)
		{
			str2[i][j] = a;
			str2[i + 1][j + 1] = a;
			str2[i + 1][j] = a;
			str2[i + 2][j] = a;
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

char	**ft_t(char **str2, int k, char a)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str2[i][j] == '.' && str2[i][j + 1] == '.' && str2[i][j + 2] == '.' &&
			str2[i + 1][j + 1] == '.' && j <= i)
		{
			str2[i][j] = a;
			str2[i][j + 1] = a;
			str2[i][j + 2] = a;
			str2[i + 1][j + 1] = a;
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

char	**ft_rt(char **str2, int k, char a)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i < (k * 3) - 2 && j < (k * 3) - 3)
	{
		if (str2[i][j] == '.' && str2[i + 1][j - 1] == '.' && str2[i + 1][j] == '.'
			&& str2[i + 1][j + 1] == '.' && j <= i)
		{
			str2[i][j] = a;
			str2[i + 1][j - 1] = a;
			str2[i + 1][j] = a;
			str2[i + 1][j + 1] = a;
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
