/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:30:49 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/02/07 16:28:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t	len)
{
	size_t	i;
	size_t	j;

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
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *hey;
// 	char *needl;

// 	hey = "12345";
// 	needl = "";
// 	printf("%s\n", strnstr(hey, hey, 0));
// 	printf("%s\n", ft_strnstr(hey, hey, 0));
// 	return (0);
// }
