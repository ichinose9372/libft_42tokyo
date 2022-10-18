/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:59:05 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 12:32:01 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)buf;
	while (n > 0)
	{
		if (*p == (unsigned char)ch)
			return (p);
		p++;
		n--;
	}
	return (0);
}
