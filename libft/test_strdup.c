/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:04:55 by jtoty             #+#    #+#             */
/*   Updated: 2022/10/18 13:17:12 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("hello 42");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("tz0OYvujCiYV9F2S2ID5TXSqcHIs94bF1BEwCtV");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("OD");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("wIVFMmhVyqbhOltpnmt8C4BiCdUhjCVbjrs");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("0iUkfwIPSy1lcC5HD7fWi8xCtulVEL2kxM2j");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("6nz2uiJTcuradRy8");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("3al5jRq0FzR8kaAxX0RKgmq7vHsn7U64rujhJN8OTvO7tQSni");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("KouCRN8e3ippGZ");
	printf("%s\n", str);
	free(str);
	str = ft_strdup("halbC6J2UDWXt0ytUElO95o5ngE4AdNBNanQGffyh37k57B");
	printf("%s\n", str);
	free(str);
}
