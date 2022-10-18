/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:12:54 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/07 16:21:43 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include<string.h>
int	main(void)
{
	char *s = "libft-test-tokyo";
	printf("01\t%s\t%s\n", ft_strchr(s, 'l'), strchr(s, 'l'));
	printf("02\t%s\t%s\n", ft_strchr(s, 'i'), strchr(s, 'i'));
	printf("03\t%s\t%s\n", ft_strchr(s, 'b'), strchr(s, 'b'));
	printf("04\t%s\t%s\n", ft_strchr(s, 'f'), strchr(s, 'f'));
	printf("05\t%s\t%s\n", ft_strchr(s, 't'), strchr(s, 't'));
	printf("06\t%s\t%s\n", ft_strchr(s, '-'), strchr(s, '-'));
	printf("07\t%s\t%s\n", ft_strchr(s, 't'), strchr(s, 't'));
	printf("08\t%s\t%s\n", ft_strchr(s, 'e'), strchr(s, 'e'));
	printf("09\t%s\t%s\n", ft_strchr(s, 's'), strchr(s, 's'));
	printf("10\t%s\t%s\n", ft_strchr(s, 't'), strchr(s, 't'));
	printf("11\t%s\t%s\n", ft_strchr(s, '-'), strchr(s, '-'));
	printf("12\t%s\t%s\n", ft_strchr(s, 't'), strchr(s, 't'));
	printf("13\t%s\t%s\n", ft_strchr(s, 'o'), strchr(s, 'o'));
	printf("14\t%s\t%s\n", ft_strchr(s, 'k'), strchr(s, 'k'));
	printf("15\t%s\t%s\n", ft_strchr(s, 'y'), strchr(s, 'y'));
	printf("16\t%s\t%s\n", ft_strchr(s, 'o'), strchr(s, 'o'));
	printf("17\t%s\t%s\n", ft_strchr(s, '\0'), strchr(s, '\0'));
	printf("18\t%s\t%s\n", ft_strchr(s, 'l' + 256), strchr(s, 'l' + 256));
	printf("19\t%s\t%s\n", ft_strchr(s, 'i' + 256), strchr(s, 'i' + 256));
	printf("20\t%s\t%s\n", ft_strchr(s, 'l' - 256), strchr(s, 'l' - 256));
	printf("21\t%s\t%s\n", ft_strchr(s, 'i' - 256), strchr(s, 'i' - 256));
	printf("22\t%s\t%s\n", ft_strchr(s, 'z'), strchr(s, 'z'));
	printf("23\t%s\t%s\n", ft_strchr(s, '~'), strchr(s, '~'));
	return (0);
}
