/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:02:41 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/13 14:30:42 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	if ((char) c == 0)
		return ((char *)str + ft_strlen(str));
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
