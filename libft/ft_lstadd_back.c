/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:01:30 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 18:14:19 by yichinos         ###   ########.fr       */
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
	nbPtr = ft_lstlast(*lst);
	ndPtr -> next = NULL;
}
