/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:12:36 by yichinos          #+#    #+#             */
/*   Updated: 2023/01/29 15:51:29 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
	if (n == 0)
		return (i);
	while (n > 1)
	{
		if (*src != '\0')
			*dest++ = *src++;
		else
			break ;
		n--;
	}
	*dest = '\0';
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char *dst1 = calloc(10, sizeof(char));
//   	char *dst2 = calloc(10, sizeof(char));
//   	char *src1 = calloc(10, sizeof(char));
//   	char *src2 = calloc(10, sizeof(char));
// 	memset(dst1, 'A', 9);
//   	memset(src1, 'z', 3);
//   	memset(src2, 'z', 3);
// 	size_t	num;

// 	num = ft_strlcpy(dst1, src1, 6);
// 	printf("%s   %zu\n", dst1, num);
// 	return (0);
// }
