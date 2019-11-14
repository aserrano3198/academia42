/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserrano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:13:08 by aserrano          #+#    #+#             */
/*   Updated: 2019/11/14 19:12:17 by aserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	
	if (!*lst || !del)
		return ;
	next = *lst;
	if (next->next)
		next = next->next;
	if (next->next)
		ft_lstclear(&next, del);
	(*del)(next->content);
	free(next);
	next = NULL;
}
