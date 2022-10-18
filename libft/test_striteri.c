/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:52:01 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/18 14:11:54 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

static void    ft_putchar(unsigned int i, char *s)
	{
		(void) i;
		write(1, s, 1);
	}
	static void    ft_putendl(unsigned int i, char *s)
	{
		(void) i;
		write(1, s, 1);
		write(1, "\n", 1);
	}
	int main()
	{
	ft_striteri("12345\n", ft_putchar);
	ft_striteri("12345\n", ft_putendl);
	ft_striteri(NULL, ft_putchar);
	ft_striteri("67890\n",  NULL);
	}
