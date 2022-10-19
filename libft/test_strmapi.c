/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:43:51 by yichinos          #+#    #+#             */
/*   Updated: 2022/10/19 13:44:34 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	ft_plusone(unsigned int i, char c)
{
	return (1 + c);
}

char	ft_plusi(unsigned int i, char c)
{
	return (i + c);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("abcdefg", ft_plusone));
	printf("%s\n", ft_strmapi("abcdefg", ft_plusi));
	printf("%s\n", ft_strmapi("abcdefg", NULL));
	printf("%s\n", ft_strmapi("", ft_plusi));
	return (0);
}
