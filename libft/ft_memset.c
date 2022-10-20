/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:16:49 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/20 14:06:06 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*tmp;

	tmp = buf;
	if (n == 0)
		return (buf);
	while (n > 0)
	{
		*tmp = ch;
		tmp++;
		n--;
	}
	return (buf);
}
