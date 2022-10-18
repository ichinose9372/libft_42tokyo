/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:04:20 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/10 22:31:04 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;
	char	*str_new;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(len + 1);
	if (str == 0)
		return (0);
	str_new = str;
	while (*s1 != 0)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (*s2 != 0)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = 0;
	return (str_new);
}
