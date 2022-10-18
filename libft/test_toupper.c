/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:12:35 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 17:22:17 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("a => %c\n", toupper('a'));
	printf("f => %c\n", toupper('f'));
	printf("A => %c\n", toupper('A'));
	printf("$ => %c\n", toupper('$'));
	printf("-----------------------------\n");
	printf("a => %c\n", ft_toupper('a'));
	printf("f => %c\n", ft_toupper('f'));
	printf("A => %c\n", ft_toupper('A'));
	printf("$ => %c\n", ft_toupper('$'));
	return (0);
}

