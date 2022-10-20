/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:12:36 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/20 14:24:46 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
	if (n == 0)
		return (i);
	while (n > 1)
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		else
		{
			break ;
		}
		n--;
	}
	*dest = '\0';
	return (i);
}
