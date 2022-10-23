/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:02:03 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/23 15:10:46 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_count(int num)
{
	size_t	count;

	count = 0;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	if (num == 0)
		count = 1;
	while (num)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	num;
	size_t		count;
	char		*p_num;

	num = n;
	count = ft_count(n);
	p_num = malloc(sizeof(char) * count + 1);
	if (!p_num)
		return (NULL);
	p_num[count] = '\0';
	if (num == 0)
		p_num[0] = '0';
	if (num < 0)
	{
		p_num[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		p_num[count - 1] = num % 10 + '0';
		num /= 10;
		count--;
	}
	return (p_num);
}
