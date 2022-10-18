/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:14:52 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/07 15:58:05 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
    char str[] = "ABC";
    printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", strncmp(str, "A", 2));
	printf("------------------------------------------------\n");
    printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
    printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
    printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
    return (0);
}
