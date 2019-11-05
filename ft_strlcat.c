/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:13:52 by aserrano          #+#    #+#             */
/*   Updated: 2019/10/15 14:59:21 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;
	unsigned int ret;

	ret = ft_strlen(dest) + ft_strlen(src) + 1;
	i = 0;
	n = 0;
	if (size < ft_strlen(dest))
		return (ret);
	while (dest[i])
	{
		i++;
		size--;
	}
	while (src[n] && (size - 1))
	{
		dest[i] = src[n];
		i++;
		n++;
		size--;
	}
	dest[i] = '\0';
	return (ret);
}
