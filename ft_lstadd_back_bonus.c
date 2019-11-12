/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:24:47 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/12 17:47:53 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *item;

	if (!*alst && new)
		*alst = new;
	else if (*alst && new)
	{
		item = *alst;
		while (item->next)
			item = item->next;
		item->next = new;
	}
}
