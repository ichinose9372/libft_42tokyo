/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:22:45 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/20 09:00:57 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ndPtr;

	if ((*lst) == NULL)
		return ;
	while ((*lst) != NULL)
	{
		ndPtr = (*lst)->next;
		ft_lstdelone((*lst), (del));
		*lst = ndPtr;
	}
}
