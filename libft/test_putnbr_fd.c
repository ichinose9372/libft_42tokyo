/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:13:50 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/17 13:36:58 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	main(void)
{
	ft_putnbr_fd(123, 1);
	printf("\n");
	ft_putnbr_fd(214748364, 1);
	return (0);
}
