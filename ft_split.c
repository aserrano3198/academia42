/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:08:26 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/05 17:41:50 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_countwords(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	while (s[i] == c)
		i++;
	words = 0;
	if (i == 0)
		words++;
	while (s[i])
	{
		if ((i > 0) && (s[i - 1] == c && s[i] != c))
			words++;
		i++;
	}
	return (words);
}

int		size_nextword(char const *s, char c, int i)
{
	int counter;

	while (s[i] == c)
		i++;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (counter);
		counter++;
		i++;
	}
	return (counter);
}

int		save_word(char *str, char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			str[j] = '\0';
			return (i);
		}
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (i);
}

char	**ft_split2(char const *s, char c, int max)
{
	int		j;
	char	*str;
	char	**tab;
	int		i;

	i = ft_countwords(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	tab[i] = NULL;
	max = i;
	i = 0;
	j = 0;
	while (j < max)
	{
		if (!(tab[j] = malloc(sizeof(char) * (size_nextword(s, c, i) + 1))))
		{
			while (j-- >= 0)
				free(tab[j]);
			free(tab);
			return (NULL);
		}
		i = save_word(tab[j], s, c, i);
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int max;

	max = 0;
	return (ft_split2(s, c, max));
}
