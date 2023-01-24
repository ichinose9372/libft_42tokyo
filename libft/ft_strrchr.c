/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:58:09 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/01/24 14:23:15 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	s_size;
	char	*p_s;

	p_s = (char *)str;
	s_size = ft_strlen(str);
	while (s_size > 0)
	{
		if (p_s[s_size] == (char) c)
			return (&p_s[s_size]);
		s_size--;
	}
	if (p_s[0] == (char) c)
		return (p_s);
	return (NULL);
}
