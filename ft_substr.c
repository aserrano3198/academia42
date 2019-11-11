/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <aserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:08:43 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/11 17:53:04 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlen5(const char *str)
{
	size_t i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

static void			fill_substr(char *substr, char const *s, int start, int len)
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

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			counter;
	int				i;
	char			*substr;

	i = start - 1;
	counter = 0;
	if (s == NULL)
		return (NULL);
	while (start < (unsigned int)ft_strlen5(s) && start >= 0 && s[++i])
		counter++;
	if (counter < len)
	{
		if (!(substr = (char *)malloc(sizeof(char) * (counter + 1))))
			return (substr);
		fill_substr(substr, s, start, counter);
	}
	else
	{
		if (!(substr = (char *)malloc(sizeof(char) * ((int)len + 1))))
			return (substr);
		fill_substr(substr, s, start, (int)len);
	}
	return (substr);
}
