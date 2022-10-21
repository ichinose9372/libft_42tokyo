/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:21:27 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/21 15:55:51 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ndptr;

	ndPtr = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (ndptr -> next != NULL)
	{
		ndptr = ndptr -> next;
	}
	ndptr -> next = new;
}
