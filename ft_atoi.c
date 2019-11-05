/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:44:58 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/04 14:31:05 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_minus(char *str, int i)
{
	if (str[i] == '-')
		return (1);
	return (0);
}

int		ft_count_numbers(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		i++;
	}
	return (count);
}

int		tenpow(int i)
{
	int		pow;

	pow = 1;
	if (i == 0)
	{
		return (pow);
	}
	while (i >= 1)
	{
		pow = 10 * pow;
		i--;
	}
	return (pow);
}

int		ft_atoi(char *str)
{
	int c;
	int num;
	int aux;
	int i;

	i = 0;
	num = 0;
	while ((str[i] == ' ' || str[i] == 9) || (str[i] == 10
			|| str[i] == 11) || (str[i] == 12 || str[i] == 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		aux = ft_minus(str, i);
		i++;
	}
	c = ft_count_numbers(str, i);
	while (c > 0)
	{
		num = (str[i] - '0') * tenpow(c - 1) + num;
		c--;
		i++;
	}
	if (aux == 1)
		num = num * (-1);
	return (num);
}
