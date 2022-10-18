/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:04:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/16 18:14:00 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*mem;

	if (number == 0 || size == 0)
	{
		number = 1;
		size = 1;
	}
	if (number > SIZE_MAX / size)
		return (NULL);
	mem = (void *)malloc(number * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, number * size);
	return ((void *)mem);
}
