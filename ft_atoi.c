/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:44:58 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/08 23:41:07 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	long long int	num;
	long long int	aux;
	int				i;

	i = 0;
	aux = 1;
	num = 0;
	while ((str[i] == ' ' || str[i] == 9) || (str[i] == 10
			|| str[i] == 11) || (str[i] == 12 || str[i] == 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			aux = -1;
		i++;
	}
	while (str[i] && !(str[i] < '0' || '9' < str[i]))
	{
		num = (long long int)(str[i] - '0') + (num * 10);
		i++;
	}
	return (num * aux);
}
