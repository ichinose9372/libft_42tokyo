/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:49:03 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/18 12:13:41 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include"libft.h"
#include <string.h>
#include <stdio.h>

int	main()
{
	unsigned char	dst1[10] = "123456789";
	unsigned char	dst2[10] = "123456789";
	unsigned char	dst3[10] = "123456789";
	unsigned char	dst4[10] = "123456789";
	unsigned char	dst5[10] = "123456789";
	unsigned char	src1[10] = "abcdefghij";
	unsigned char	src2[10] = "abcdefghij";
	unsigned char	src3[10] = "abcdefghij";
	unsigned char	src4[10] = "abcdefghij";
	unsigned char	src5[10] = "abcdefghij";

	printf("********* memmove **********\n");
	printf("---------------------------\n");
	printf("memmove    =\t%s\n", memmove(dst1, src1, 5));
	// printf("ft_memmove =\t%s\n", ft_memmove(dst1, src1, 5));
	// printf("---------------------------\n");
	// printf("---------------------------\n");
	// printf("memmove    =\t%s\n", memmove(dst2, src2, 10));
	// printf("ft_memmove =\t%s\n", ft_memmove(dst2, src2, 10));
	// printf("---------------------------\n");
	// printf("---------------------------\n");
	// printf("memmove    =\t%s\n", memmove(dst3, src3, 8));
	// printf("ft_memmove =\t%s\n", ft_memmove(dst3, src3, 8));
	// printf("---------------------------\n");
	// printf("---------------------------\n");
	// printf("memmove    =\t%s\n", memmove(dst4, src4, 0));
	// printf("ft_memmove =\t%s\n", ft_memmove(dst4, src4, 0));
	// printf("---------------------------\n");
	// printf("---------------------------\n");
	// printf("memmove    =\t%s\n", memmove(dst5, src5, 1));
	// printf("ft_memmove =\t%s\n", ft_memmove(dst5, src5, 1));
	// printf("---------------------------\n");
	return (0);
}
