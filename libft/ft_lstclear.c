/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:22:45 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/21 15:55:30 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndptr;

	if ((*lst) == NULL)
		return ;
	while ((*lst) != NULL)
	{
		ndptr = (*lst)->next;
		ft_lstdelone((*lst), (del));
		*lst = ndPtr;
	}
}
