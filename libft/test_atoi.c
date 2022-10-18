/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:03:06 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 12:44:18 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	main(void)
{
	printf("%d %d\n", ft_atoi(""), atoi(""));
	printf("%d %d\n", ft_atoi("-"), atoi("-"));
	printf("%d %d\n", ft_atoi("+"), atoi("+"));
	printf("%d %d\n", ft_atoi("0"), atoi("0"));
	printf("%d %d\n", ft_atoi("-0"), atoi("-0"));
	printf("%d %d\n", ft_atoi("+0"), atoi("+0"));
	printf("%d %d\n", ft_atoi("1"), atoi("1"));
	printf("%d %d\n", ft_atoi("-1"), atoi("-1"));
	printf("%d %d\n", ft_atoi("+1"), atoi("+1"));
	printf("%d %d\n", ft_atoi("7"), atoi("7"));
	printf("%d %d\n", ft_atoi("-7"), atoi("-7"));
	printf("%d %d\n", ft_atoi("+7"), atoi("+7"));
	printf("%d %d\n", ft_atoi("42"), atoi("42"));
	printf("%d %d\n", ft_atoi("-42"), atoi("-42"));
	printf("%d %d\n", ft_atoi("a"), atoi("a"));
	printf("%d %d\n", ft_atoi("!"), atoi("!"));
	printf("%d %d\n", ft_atoi("2147483647"), atoi("2147483647"));
	printf("%d %d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("%d %d\n", ft_atoi("4294967295"), atoi("4294967295"));
	printf("%d %d\n", ft_atoi("9223372036854775807"),atoi("9223372036854775807"));
	printf("%d %d\n", ft_atoi("-9223372036854775808"),atoi("-9223372036854775808"));
	printf("%d %d\n", ft_atoi("18446744073709551615"),atoi("18446744073709551615"));
	printf("%d %d\n", ft_atoi("18446744073709551615"),atoi("18446744073709551615"));
	printf("%d %d\n", ft_atoi("2147483648"), atoi("2147483648"));
	printf("%d %d\n", ft_atoi("-2147483649"), atoi("-2147483649"));
	printf("%d %d\n", ft_atoi("4294967296"), atoi("4294967296"));
	printf("%d %d\n",ft_atoi("9223372036854775808"),atoi("9223372036854775808"));
	printf("%d %d\n", ft_atoi("-9223372036854775809"),atoi("-9223372036854775809"));
	printf("%d %d\n", ft_atoi("18446744073709551616"),atoi("18446744073709551616"));
/*30*/printf("%d %d\n", ft_atoi("18446744073709551616"),atoi("18446744073709551616"));
	printf("%d %d\n", ft_atoi("2147483646"), atoi("2147483646"));
	printf("%d %d\n", ft_atoi("-2147483647"), atoi("-2147483647"));
	printf("%d %d\n", ft_atoi("4294967294"), atoi("4294967294"));
	printf("%d %d\n", ft_atoi("9223372036854775806"),atoi("9223372036854775806"));
	printf("%d %d\n", ft_atoi("-9223372036854775807"),atoi("-9223372036854775807"));
	printf("%d %d\n", ft_atoi("18446744073709551614"),atoi("18446744073709551614"));
	printf("%d %d\n", ft_atoi("18446744073709551614"),atoi("18446744073709551614"));
	printf("%d %d\n", ft_atoi("000000000000000000008"),atoi("000000000000000000008"));
	printf("%d %d\n", ft_atoi("-000000000000000000008"),atoi("-000000000000000000008"));
	printf("%d %d\n", ft_atoi("+000000000000000000008"),atoi("+000000000000000000008"));
	// printf("%ld\n", LONG_MAX);
	// printf("%lld\n", LLONG_MAX);
	// printf("%d\n", atoi("9223372036854775807"));
	// printf("%d\n", atoi("9223372036854775808"));
	// printf("%d\n", atoi("9223372036854775809"));
	// printf("%d\n", atoi("9223372036854775810"));
	return (0);
}
