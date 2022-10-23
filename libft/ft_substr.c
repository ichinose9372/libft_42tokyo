/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:15:52 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/22 18:29:25 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;

	if (s == '\0')
		return (0);
	if (*s == '\0' || len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_s = (char *)malloc(sizeof(char) * (len + 1));
	if (new_s == 0)
		return (0);
	i = 0;
	while (len > i && s[start] != 0)
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
