/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:01 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 15:38:06 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum('A'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", isalnum(' '));
	printf("%d\n", isalnum('+'));
	printf("%d\n", isalnum('null'));
	printf("%d\n", isalnum(1));
	printf("--------------------------\n");
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('+'));
	printf("%d\n", ft_isalnum('null'));
	printf("%d\n", ft_isalnum(1));

	return (0);
}
