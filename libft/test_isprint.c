/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:01 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 16:56:16 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isprint(int c);


int	main(void)
{
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint('A'));
	printf("%d\n", isprint('1'));
	printf("%d\n", isprint(' '));
	printf("%d\n", isprint('+'));
	printf("%d\n", isprint('null'));
	printf("%d\n", isprint(1));
	printf("--------------------------\n");
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('1'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('+'));
	printf("%d\n", ft_isprint('null'));
	printf("%d\n", ft_isprint(1));

	return (0);
}
