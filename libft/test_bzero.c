#include <stdio.h>
#include <string.h>
#include"libft.h"

int main(void)
{
	char	array[] = "XXXHello 42!";
	char	array2[] = "XXXHello 42!";

	printf("***********************************\n");
	bzero(array, 5);
	ft_bzero(array2, 5);
	printf("bzero    : %s\n", &array[0]);
	printf("ft_bzero : %s\n", &array2[0]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[1]);
	printf("ft_bzero : %s\n", &array2[1]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[2]);
	printf("ft_bzero : %s\n", &array2[2]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[3]);
	printf("ft_bzero : %s\n", &array2[3]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[4]);
	printf("ft_bzero : %s\n", &array2[4]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[5]);
	printf("ft_bzero : %s\n", &array2[5]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[6]);
	printf("ft_bzero : %s\n", &array2[6]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[7]);
	printf("ft_bzero : %s\n", &array2[7]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[8]);
	printf("ft_bzero : %s\n", &array2[8]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[9]);
	printf("ft_bzero : %s\n", &array2[9]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[10]);
	printf("ft_bzero : %s\n", &array2[10]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[11]);
	printf("ft_bzero : %s\n", &array2[11]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[12]);
	printf("ft_bzero : %s\n", &array2[12]);
	printf("-----------------------------------\n");
	printf("bzero    : %s\n", &array[13]);
	printf("ft_bzero : %s\n", &array2[13]);
	printf("***********************************\n");
	return 0;
}
