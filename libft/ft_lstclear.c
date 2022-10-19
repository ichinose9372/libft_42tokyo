/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:51:36 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/19 16:35:22 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndPtr;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		ndPtr = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = ndPtr;
	}
	*lst = NULL;
}
