/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:03:57 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 18:00:54 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list *ndPtr;

	ndPtr = lst;
	count = 0;
	while (ndPtr -> next != NULL)
	{
		count++;
		ndPtr = ndPtr -> next;
	}
	return (count);
}
