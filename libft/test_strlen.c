#include<stdio.h>
#include<string.h>

size_t	ft_strlen(const char	*str);

int	main(void)
{
	char s1[256] = {"aaaaaaaaaaaaaaaaaaaaaadjklabiaeieifiuaslanjsilafjilebfaildjnaksdnfefbhksa"};
	char s2[256] = {""};
	char s3[256] = {"aksjaie;;;;;;                 "};

	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	num1 = ft_strlen(s1);
	num2 = strlen(s1);
	num3 = ft_strlen(s2);
	num4 = strlen(s2);
	num5 = ft_strlen(s3);
	num6 = strlen(s3);
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
	printf("%d\n", num5);
	printf("%d\n", num6);
	return (0);
}
