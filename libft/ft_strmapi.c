/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:43:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/14 12:12:30 by ichinoseyuu      ###   ########.fr       */
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

// char	ft_plusone(unsigned int i, char c)
// {
// 	return (1 + c);
// }

// char	ft_plusi(unsigned int i, char c)
// {
// 	return (i + c);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("abcdefg", ft_plusone));
// 	printf("%s\n", ft_strmapi("abcdefg", ft_plusi));
// 	printf("%s\n", ft_strmapi("abcdefg", NULL));
// 	printf("%s\n", ft_strmapi("", ft_plusi));
// 	return (0);
// }
