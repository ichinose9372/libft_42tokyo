/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:22:45 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/23 15:47:53 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndptr;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		ndptr = (*lst)-> next;
		ft_lstdelone((*lst), (del));
		*lst = ndptr;
	}
	(*lst) = NULL;
}
