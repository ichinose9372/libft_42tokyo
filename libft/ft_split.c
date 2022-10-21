/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:02:22 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/21 15:19:50 by yichinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

static size_t	word_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	len_word(char const *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (*s != 0)
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			len++;
		s++;
	}
	return (len);
}

char	**create(char **new_string, size_t	len, char const	*s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		while (*s == c && *s != '\0')
			s++;
		new_string[i] = malloc(sizeof(char) * word_count(s, c) + 1);
		if (new_string == NULL)
			free(new_string);
		j = 0;
		while (*s != '\0' && *s != c)
			new_string[i][j++] = *s++;
		new_string[i][j] = '\0';
		i++;
	}
	new_string[i] = NULL;
	return (new_string);
}

char	**ft_split(char const *s, char c)
{
	char	**new_string;
	size_t	len;

	if (!s)
		return (NULL);
	len = len_word(s, c);
	new_string = malloc(sizeof(char *) * len + 1);
	if (!new_string)
		return (NULL);
	return (create(new_string, len, s, c));
}
