/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:31:01 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/05 16:27:33 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include<stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('A'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit(' '));
	printf("%d\n", isdigit('+'));
	printf("%d\n", isdigit('null'));
	printf("%d\n", isdigit(1));
	printf("--------------------------\n");
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('+'));
	printf("%d\n", ft_isdigit('null'));
	printf("%d\n", ft_isdigit(1));

	return (0);
}
