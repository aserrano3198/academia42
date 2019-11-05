/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:20:34 by aserrano          #+#    #+#             */
/*   Updated: 2019/10/12 20:09:09 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
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
			diff = (s1[i] - s2[i]);
			return (diff);
		}
	}
	return (diff);
}
