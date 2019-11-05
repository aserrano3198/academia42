/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:08:43 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/04 19:00:47 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_substr(char *substr, char *s, int start, int len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		substr[i] = s[start];
		i++;
		start++;
		len--;
	}
	substr[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		counter;
	int		i;
	char	*substr;

	i = start - 1;
	counter = 0;
	while (s[++i])
		counter++;
	if (counter < len)
	{
		if(!(substr = (char *)malloc(sizeof(char) * (counter + 1))))
			return (NULL);
		fill_substr(substr, s, start, counter);
	}
	else
	{
		if(!(substr = (char *)malloc(sizeof(char) * ((int)len + 1))))
			return (
		fill_substr(substr, s, start, (int)len);
	}
	return (substr);
}
