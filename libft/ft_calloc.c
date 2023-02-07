/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:04:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/01/26 14:00:22 by yichinos         ###   ########.fr       */
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
