#include<stdio.h>
#include"libft.h"


int main(void)
{
	char	**str;
	size_t	i;

	i = 0;
	str = ft_split("a11111a22222aaa3333a44aa5", '1');
	while (1)
	{
		if (!str[i])
			break ;
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
