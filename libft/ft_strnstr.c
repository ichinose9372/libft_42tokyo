/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:30:49 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/21 11:47:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t	len)
{
	int	i;
	int	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (i < len && *s1 != '\0')
	{
		j = 0;
		while (i + j < len && s1[i + j] != '\0' && s1[i + j] == s2[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}
