/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:15:06 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 17:41:29 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ndPtr;

	ndPtr = lst;
	if (!lst)
		return (NULL);
	while (ndPtr -> next != NULL)
		ndPtr = ndPtr -> next;
	return (ndPtr);
}
