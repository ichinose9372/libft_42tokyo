/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:39:14 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 11:54:33 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)buf1;
	q = (unsigned char *)buf2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*p != *q)
			return (*p - *q);
		n--;
		p++;
		q++;
	}
	return (0);
}
