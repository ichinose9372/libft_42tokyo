/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:36:11 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/19 20:39:10 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*ndPtr;

	ndPtr = malloc(sizeof(t_list));
	if (!ndPtr)
		return (NULL);
	ndPtr -> content = content;
	ndPtr -> next = NULL;
	return (ndPtr);
}
