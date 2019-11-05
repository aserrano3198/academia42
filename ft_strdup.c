/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:06:46 by aserrano          #+#    #+#             */
/*   Updated: 2019/10/19 04:32:40 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strcpy(char *dest, char *src)
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

char		*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
	{
		i++;
	}
	dup = (char*)malloc(sizeof(char) * (i + 1));
	ft_strcpy(dup, src);
	return (dup);
}
