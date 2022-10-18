/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:39:38 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/13 14:30:33 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*n_s;
	size_t	s_size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set,*s1))
		s1++;
	s_size = ft_strlen(s1);
	while (s_size > 0 && ft_strchr(set, s1[s_size]))
		s_size--;
	n_s = ft_substr((char *)s1, 0, s_size + 1);
	return (n_s);
}
