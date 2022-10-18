/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:16:49 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 12:35:28 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	char			*ptr;
	unsigned char	tmp;

	ptr = buf;
	tmp = ch;
	if (n == 0)
		return (buf);
	while (n > 0)
	{
		*ptr = tmp;
		ptr++;
		n--;
	}
	return (buf);
}
