/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichinoseyuuki <ichinoseyuuki@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:51:34 by ichinoseyuu       #+#    #+#             */
/*   Updated: 2022/10/07 16:58:26 by ichinoseyuu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
#include<string.h>

int	main(void)
{
	char *s = "libft-test-tokyo";
	printf("%s\t%s\n", ft_strrchr(s, 'l'), strrchr(s, 'l'));
	printf("%s\t%s\n", ft_strrchr(s, 'i'), strrchr(s, 'i'));
	printf("%s\t%s\n", ft_strrchr(s, 'b'), strrchr(s, 'b'));
	printf("%s\t%s\n", ft_strrchr(s, 'f'), strrchr(s, 'f'));
	printf("%s\t%s\n", ft_strrchr(s, 't'), strrchr(s, 't'));
	printf("%s\t%s\n", ft_strrchr(s, '-'), strrchr(s, '-'));
	printf("%s\t%s\n", ft_strrchr(s, 't'), strrchr(s, 't'));
	printf("%s\t%s\n", ft_strrchr(s, 'e'), strrchr(s, 'e'));
	printf("%s\t%s\n", ft_strrchr(s, 's'), strrchr(s, 's'));
	printf("%s\t%s\n", ft_strrchr(s, 't'), strrchr(s, 't'));
	printf("%s\t%s\n", ft_strrchr(s, '-'), strrchr(s, '-'));
	printf("%s\t%s\n", ft_strrchr(s, 't'), strrchr(s, 't'));
	printf("%s\t%s\n", ft_strrchr(s, 'o'), strrchr(s, 'o'));
	printf("%s\t%s\n", ft_strrchr(s, 'k'), strrchr(s, 'k'));
	printf("%s\t%s\n", ft_strrchr(s, 'y'), strrchr(s, 'y'));
	printf("%s\t%s\n", ft_strrchr(s, 'o'), strrchr(s, 'o'));
	printf("%s\t%s\n", ft_strrchr(s, '\0'), strrchr(s, '\0'));
	printf("%s\t%s\n", ft_strrchr(s, 'l' + 256), strrchr(s, 'l' + 256));
	printf("%s\t%s\n", ft_strrchr(s, 'i' + 256), strrchr(s, 'i' + 256));
	printf("%s\t%s\n", ft_strrchr(s, 'l' - 256), strrchr(s, 'l' - 256));
	printf("%s\t%s\n", ft_strrchr(s, 'i' - 256), strrchr(s, 'i' - 256));
	printf("%s\t%s\n", ft_strrchr(s, 'z'), strrchr(s, 'z'));
	printf("%s\t%s\n", ft_strrchr(s, '~'), strrchr(s, '~'));
	return (0);
}
