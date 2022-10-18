/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:12:35 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 17:24:58 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("a => %c\n", tolower('Q'));
	printf("f => %c\n", tolower('f'));
	printf("A => %c\n", tolower('A'));
	printf("$ => %c\n", tolower('$'));
	printf("-----------------------------\n");
	printf("a => %c\n", ft_tolower('Q'));
	printf("f => %c\n", ft_tolower('f'));
	printf("A => %c\n", ft_tolower('A'));
	printf("$ => %c\n", ft_tolower('$'));
	return (0);
}

