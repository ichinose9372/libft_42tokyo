/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:31:28 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/23 11:38:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void(*del)(void *))
{
	t_list	*nd_new;
	t_list	*nd_top;

	if ((*f) == NULL)
		return (NULL);
	nd_top = NULL;
	while (lst != NULL)
	{
		nd_new = ft_lstnew((f)(lst -> content));
		if (nd_new == NULL)
		{
			ft_lstclear(&lst, (del));
			return (NULL);
		}
		ft_lstadd_back(&nd_top, nd_new);
		lst = lst -> next;
	}
	return (nd_top);
}
