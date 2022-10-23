/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:36:11 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/22 11:49:26 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*ndptr;

	ndptr = malloc(sizeof(t_list));
	if (!ndptr)
		return (NULL);
	ndptr -> content = content;
	ndptr -> next = NULL;
	return (ndptr);
}
