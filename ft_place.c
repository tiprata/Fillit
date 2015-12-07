/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiprata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:12:43 by tiprata           #+#    #+#             */
/*   Updated: 2015/12/07 15:11:02 by tiprata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_su(char *str, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 11 && j < 14)
	{
		if (str[i][j] == '.' && str[i + 1][j] == '.' && str[i + 2][j] == '.' &&
			str[i + 3][j] == '.')
		{
			str[i][j] = '#';
			str[i + 1][j] = '#';
			str[i + 2][j] = '#';
			str[i + 3][j] = '#';
			return (str);
		}
		else
		{
			j++;
		}
	}
	return (str);
}

char	**ft_sd(char *str, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 14 && j < 11)
	{
		if (str[i][j] == '.' && str[i][j + 1] == '.' && str[i][j + 2] == '.' &&
			str[i][j + 3] == '.')
		{
			str[i][j] = '#';
			str[i][j + 1] = '#';
			str[i][j + 2] = '#';
			str[i][j + 3] = '#';
			return (str);
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	**ft_square(char *str, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 13 && j < 13)
	{
		if (str[i][j] == '.' && str[i][j + 1] == '.' && str[i + 1][j] == '.' &&
			str[i + 1][j + 1] == '.')
		{
			str[i][j] = '#';
			str[i][j + 1] = '#';
			str[i + 1][j] = '#';
			str[i + 1][j + 1] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (j = 12)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}

char	**ft_ll(char *str, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 11 && j < 14)
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
		if (k == 13)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}

char	**ft_rll(char *str, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 11 && j < 14)
	{
		if (str[i][j] == '.' && str[i][j + 1] == '.' && str[i + 1][j] == '.' &&
			str[i + 2][j] == '.')
		{
			str[i][j] = '#';
			str[i][j + 1] = '#';
			str[i + 1][j] = '#';
			str[i + 2][j] = '#';
			return (str);
		}
		else
		{
			j++;
		}
		if (k == 13)
		{
			i++;
			j = 0;
		}
	}
	return (str);
}
