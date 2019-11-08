/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:28:10 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/08 23:13:09 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcpy1(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*changed;
	int			i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(changed = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strcpy1(changed, s);
	i = 0;
	while (changed[i])
	{
		changed[i] = (*f)(i, changed[i]);
		i++;
	}
	return (changed);
}
