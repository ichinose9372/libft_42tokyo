/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:01:30 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 23:22:11 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndPtr;

	if (!new)
		return ;
	if (*lst)
	{
		*lst = new;
		return ;
	}
	ndPtr = ft_lstlast(*lst);
	ndPtr -> next = NULL;
}
