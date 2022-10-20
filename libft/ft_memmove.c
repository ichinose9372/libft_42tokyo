/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:57:39 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/20 14:18:33 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dst;
	char	*p_src;

	p_dst = (char *)dst;
	p_src = (char *)src;
	if (dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			p_dst[len - 1] = p_src[len - 1];
			len--;
		}
	}
	return (dst);
}
