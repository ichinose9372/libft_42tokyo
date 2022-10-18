#include<stdio.h>
#include"libft.h"

int	main(void)
{
	printf("%s\t\n", ft_itoa(2147483647));
	printf("%s,\t%d\n", ft_itoa(-0), -0);
	printf("%s,\t%d\n", ft_itoa(+0), +0);
	printf("%s,\t%d\n", ft_itoa(1), 1);
	printf("%s,\t%d\n", ft_itoa(-1), -1);
	printf("%s,\t%d\n", ft_itoa(+1), +1);
	printf("%s,\t%d\n", ft_itoa(7), 7);
	printf("%s,\t%d\n", ft_itoa(-7), -7);
	printf("%s,\t%d\n", ft_itoa(0), 0);
	printf("%s,\t%d\n", ft_itoa(42), 42);
	printf("%s,\t%d\n", ft_itoa(-42), -42);
	printf("%s,\t%d\n", ft_itoa(+42), +42);
	printf("%s,\t%d\n", ft_itoa(2147483647), 2147483647);
	printf("%s,\t%ld\n", ft_itoa(-2147483648), -2147483648);
	printf("%s,\t%d\n", ft_itoa(2147483646), 2147483646);
	printf("%s,\t%d\n", ft_itoa(-2147483647), -2147483647);
	return (0);
}
