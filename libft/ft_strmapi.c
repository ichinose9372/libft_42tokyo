/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:43:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/19 13:44:49 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*n_str;
	size_t	i;

	if (!s || !f)
		return (0);
	n_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (n_str == 0)
		return (0);
	i = 0;
	while (s[i] != 0)
	{
		n_str[i] = f(i, s[i]);
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
