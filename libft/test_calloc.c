/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:18:14 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/10 13:40:35 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	main(void)
{
	printf("%p %p\n", ft_calloc(1, 2), calloc(1, 2));
	printf("%p %p\n", ft_calloc(SIZE_MAX, 2), calloc(SIZE_MAX, 2));
	printf("%p %p\n", ft_calloc(SIZE_MAX, SIZE_MAX), calloc(SIZE_MAX, SIZE_MAX));
	printf("%p %p\n", ft_calloc(0, 0), calloc(0, 0));
	printf("%p %p\n", ft_calloc(1, 0), calloc(1, 0));
	printf("%p %p\n", ft_calloc(0, 0), calloc(0, 0));
	return (0);
}
