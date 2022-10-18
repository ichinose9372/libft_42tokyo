/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:18:43 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/10 20:21:21 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
{
	char *s = "libft-test-tokyo";
	printf("%s\n%s\n\n", ft_substr(s, 0, 100), s);
	printf("%s\n%s\n\n", ft_substr(s, 5, 100), s + 5);
	printf("%s\n%s\n\n", ft_substr(s, 10, 100), s + 10);
	printf("%s\n%s\n\n", ft_substr(s, 15, 100), s + 15);
	printf("%s\n%s\n\n", ft_substr(s, 20, 100), "");
	printf("%s\n%s\n\n", ft_substr(s, 0, 5), "libft");
	printf("%s\n%s\n\n", ft_substr(s, 5, 5), "-test");
	printf("%s\n%s\n\n", ft_substr(s, 10, 5), "-toky");
	printf("%s\n%s\n\n", ft_substr(s, 15, 5), "o");
	printf("%s\n%s\n\n", ft_substr(s, 20, 5), "");
	printf("%s\n%s\n\n", ft_substr(s, 0, 0), "");
	printf("%s\n%s\n\n", ft_substr(s, 5, 0), "");
	printf("%s\n%s\n\n", ft_substr(s, 10, 0), "");
	printf("%s\n%s\n\n", ft_substr(s, 15, 0), "");
	printf("%s\n%s\n\n", ft_substr(s, 20, 0), "");
	return (0);
}
