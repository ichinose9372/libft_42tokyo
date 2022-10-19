/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:51:36 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 23:36:52 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ndPtr;

	if ((*lst) == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		ndPtr = (*lst)->next;
		ft_lstdelone((*lst), (del));
		*lst = ndPtr;
	}
}


