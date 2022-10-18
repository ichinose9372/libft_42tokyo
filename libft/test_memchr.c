/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:41:23 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 13:04:38 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include"libft.h"

int	main(void)
{
	char str_1[100] = "0123456789";
	printf("%p\t%p\n", ft_memchr(str_1, 0, 0), memchr(str_1, 0, 0));
	printf("%p\t%p\n", ft_memchr(str_1, '6', 5), memchr(str_1, '6', 5));
	printf("%p\t%p\n", ft_memchr(str_1, '6', 100), memchr(str_1, '6', 100));
	printf("%p\t%p\n", ft_memchr(str_1, 'g', 5), memchr(str_1, 'g', 5));
	return (0);
}
