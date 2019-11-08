/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:20:34 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/09 00:22:33 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	int				diff;

	diff = 0;
	i = 0;
	while ((s1[i] || s2[i]) && n)
	{
		if (s1[i] == s2[i])
		{
			i++;
			n--;
		}
		else
		{
			diff = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (diff);
		}
	}
	return (diff);
}
