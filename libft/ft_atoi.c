/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:52:04 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2023/01/18 11:42:19 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isspace(char c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

static int	check_nb(long number, int type, char c)
{
	if ((number * 10 + (c - '0')) / 10 != number)
	{
		if (type == -1)
			return ((int)LONG_MIN);
		else
			return ((int)LONG_MAX);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		type;
	long	number;

	type = 1;
	number = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			type *= -1;
		nptr++;
		if (*nptr == '+' || *nptr == '-')
			return (0);
	}
	while (ft_isdigit(*nptr))
	{
		if ((number * 10 + (*nptr - '0')) / 10 != number)
			return (check_nb(number, type, *nptr));
		number *= 10;
		number += *nptr - '0';
		nptr++;
	}
	return (number * type);
}
