/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:24:33 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/10 22:25:31 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
int	main(void)
{
	printf("%s\t%s\n", ft_strjoin("hello", "world"), "helloworld");
	printf("%s\t%s\n", ft_strjoin("", "world"), "world");
	printf("%s\t%s\n", ft_strjoin("hello", ""), "hello");
	printf("%s\t%s\n", ft_strjoin("", ""), "");
	return (0);
}
