/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:01 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 17:08:52 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isascii(int c);


int	main(void)
{
	printf("%d\n", isascii('a'));
	printf("%d\n", isascii('A'));
	printf("%d\n", isascii('1'));
	printf("%d\n", isascii(' '));
	printf("%d\n", isascii('+'));
	printf("%d\n", isascii('null'));
	printf("%d\n", isascii(1));
	printf("--------------------------\n");
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('+'));
	printf("%d\n", ft_isascii('null'));
	printf("%d\n", ft_isascii(1));

	return (0);
}
