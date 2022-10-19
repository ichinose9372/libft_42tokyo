/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:15:06 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/19 15:48:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ndPtr;

	ndPtr = lst;
	if (ndPtr== NULL)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst-> next;
	}
	return (lst);
}
