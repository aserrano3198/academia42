/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:43:46 by aserrano          #+#    #+#             */
/*   Updated: 2019/10/11 11:10:54 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srclength;
	unsigned int copyntimes;
	unsigned int i;

	i = 0;
	srclength = ft_strlen(src);
	copyntimes = size - 1;
	while ((src[i] && dest[i]) && copyntimes)
	{
		dest[i] = src[i];
		i++;
		copyntimes--;
	}
	while (dest[i] != 0)
	{
		dest[i] = '\0';
		i++;
	}
	return (srclength);
}
