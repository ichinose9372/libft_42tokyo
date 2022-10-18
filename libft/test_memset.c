/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:39:20 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 13:29:45 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>
#include<stdio.h>

int	main(void)
{
	char str[] = "0123456789";
	memset(str+2, 0, 0);
	printf("%s\n", str);
	return (0);
}
