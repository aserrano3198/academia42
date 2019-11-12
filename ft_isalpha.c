/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:29:00 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/12 18:59:49 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if ((c < 'A') || (c < 'a' && c > 'Z'))
	{
		return (0);
	}
	if (c > 'z')
	{
		return (0);
	}
	return (1);
}
