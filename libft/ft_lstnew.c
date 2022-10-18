/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_Istnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:36:11 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/18 16:19:55 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	ndPtr;

	ndPtr = malloc(sizeof(t_list);
	if(!ndPtr)
		return (NULL);
	ndPtr -> content = content;
	ndPtr -> next = NULL;
	return (ndPtr);
}
