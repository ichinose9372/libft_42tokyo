/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:01 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/06 11:37:27 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>
#include"libft.h"


int	main(void)
{
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha(' '));
	printf("%d\n", isalpha('+'));
	printf("%d\n", isalpha('null'));
	printf("%d\n", isalpha(1));
	printf("--------------------------\n");
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('+'));
	printf("%d\n", ft_isalpha('null'));
	printf("%d\n", ft_isalpha(1));

	return (0);
}
