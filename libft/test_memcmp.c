/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:51:09 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 13:06:11 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"
#include<string.h>

int	main(void)
{
	char	s1[] = "aab";
	char	s2[] = "baaa";
	char	s3[] = "aabaa";
	printf("s1, s2, 0 = %d\t%d\n", ft_memcmp(s1, s2, 0), memcmp(s1, s2, 0));
	printf("s1, s2, 1 = %d\t%d\n", ft_memcmp(s1, s2, 1), memcmp(s1, s2, 1));
	printf("s1, s2, 2 = %d\t%d\n", ft_memcmp(s1, s2, 2), memcmp(s1, s2, 2));
	printf("s1, s2, 3 = %d\t%d\n", ft_memcmp(s1, s2, 3), memcmp(s1, s2, 3));
	printf("s1, s2, 4 = %d\t%d\n", ft_memcmp(s1, s2, 4), memcmp(s1, s2, 4));
	printf("s1, s2, 5 = %d\t%d\n", ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
	printf("s2, s1, 0 = %d\t%d\n", ft_memcmp(s2, s1, 0), memcmp(s2, s1, 0));
	printf("s2, s1, 1 = %d\t%d\n", ft_memcmp(s2, s1, 1), memcmp(s2, s1, 1));
	printf("s2, s1, 2 = %d\t%d\n", ft_memcmp(s2, s1, 2), memcmp(s2, s1, 2));
	printf("s2, s1, 3 = %d\t%d\n", ft_memcmp(s2, s1, 3), memcmp(s2, s1, 3));
	printf("s2, s1, 4 = %d\t%d\n", ft_memcmp(s2, s1, 4), memcmp(s2, s1, 4));
	printf("s2, s1, 5 = %d\t%d\n", ft_memcmp(s2, s1, 5), memcmp(s2, s1, 5));
	printf("s1, s1, 0 = %d\t%d\n", ft_memcmp(s1, s1, 0), memcmp(s1, s1, 0));
	printf("s1, s1, 1 = %d\t%d\n", ft_memcmp(s1, s1, 1), memcmp(s1, s1, 1));
	printf("s1, s1, 2 = %d\t%d\n", ft_memcmp(s1, s1, 2), memcmp(s1, s1, 2));
	printf("s1, s1, 3 = %d\t%d\n", ft_memcmp(s1, s1, 3), memcmp(s1, s1, 3));
	printf("s1, s1, 4 = %d\t%d\n", ft_memcmp(s1, s1, 4), memcmp(s1, s1, 4));
	printf("s1, s1, 5 = %d\t%d\n", ft_memcmp(s1, s1, 5), memcmp(s1, s1, 5));
	printf("s1, s3, 0 = %d\t%d\n", ft_memcmp(s1, s3, 0), memcmp(s1, s3, 0));
	printf("s1, s3, 1 = %d\t%d\n", ft_memcmp(s1, s3, 1), memcmp(s1, s3, 1));
	printf("s1, s3, 2 = %d\t%d\n", ft_memcmp(s1, s3, 2), memcmp(s1, s3, 2));
	printf("s1, s3, 3 = %d\t%d\n", ft_memcmp(s1, s3, 3), memcmp(s1, s3, 3));
	printf("s1, s3, 4 = %d\t%d\n", ft_memcmp(s1, s3, 4), memcmp(s1, s3, 4));
	printf("s1, s3, 5 = %d\t%d\n", ft_memcmp(s1, s3, 5), memcmp(s1, s3, 5));
}
