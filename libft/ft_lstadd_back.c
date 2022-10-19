/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:21:27 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/19 21:47:42 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndPtr;

	ndPtr = *lst;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while (ndPtr -> next != NULL)
	{
		ndPtr = ndPtr -> next;
	}
	ndPtr -> next = new;
}
