#include"libft.h"
#include<stdio.h>
#include<string.h>

int	main(void)
  {
  	char *dst1 = calloc(10, sizeof(char));
  	char *dst2 = calloc(10, sizeof(char));
  	char *src1 = calloc(10, sizeof(char));
  	char *src2 = calloc(10, sizeof(char));
  	memset(src1, 'z', 9);
  	memset(src2, 'z', 9);

  	printf("01\t%zu\t%zu\n", ft_strlcpy(dst1, "", 10), strlcpy(dst2, "", 10));
  	printf("02\t%s\t%s\n", dst1, dst2);
  	printf("03\t%zu\t%zu\n", ft_strlcpy(dst1, "hello", 10), strlcpy(dst2,
  				"hello", 10));
  	printf("04\t%s\t%s\n", dst1, dst2);
  	printf("05\t%zu\t%zu\n", ft_strlcpy(dst1, "world", 10), strlcpy(dst2,
  				"world", 10));
  	printf("06\t%s\t%s\n", dst1, dst2);
  	printf("07\t%zu\t%zu\n", ft_strlcpy(dst1, src1, 0), strlcpy(dst2, src2, 0));
  	printf("08\t%s\t%s\n", dst1, dst2);
  	printf("09\t%zu\t%zu\n", ft_strlcpy(dst1, src1, 10), strlcpy(dst2, src2,
  				10));
  	printf("10\t%zu\t%zu\n", ft_strlcpy(NULL, "", 0), strlcpy(NULL, "", 0));
  	bzero(dst1, 10);
  	bzero(dst2, 10);

  	char *s1 = "hello";
  	char *s2 = "hello wonderfule world!";
  	for (size_t i = 0; i < strlen(s1); i++)
  	{
  		printf("%lu\t%zu\t%zu\n", 2 * i + 11, ft_strlcpy(dst1, s1, i),
  				strlcpy(dst2, s1, i));
  		printf("%lu\t%s\t%s\n", 2 * i + 12, dst1, dst2);
  	}
  	for (int i = 0; i < 10; i++)
  	{
  		printf("%d\t%zu\t%zu\n", 2 * i + 21, ft_strlcpy(dst1, s2, 10),
  				strlcpy(dst2, s2, 10));
  		printf("%d\t%s\t%s\n", 2 * i + 22, dst1, dst2);
  	}
  	printf("41\t%zu\t%zu\n", ft_strlcpy(dst1, "", 10), strlcpy(dst2, "", 10));
  	printf("42\t%s\t%s\n", dst1, dst2);
  	printf("43\t%zu\t%zu\n", ft_strlcpy(dst1, "hello", 10), strlcpy(dst2,
  				"hello", 10));
  	printf("44\t%s\t%s\n", dst1, dst2);
  	printf("45\t%zu\t%zu\n", ft_strlcpy(dst1, "world", 10), strlcpy(dst2,
  				"world", 10));
    printf("46\t%s\t%s\n", dst1, dst2);
    printf("47\t%zu\t%zu\n", ft_strlcpy(dst1, src1, 0), strlcpy(dst2, src2, 0));
    printf("48\t%s\t%s\n", dst1, dst2);
    printf("49\t%zu\t%zu\n", ft_strlcpy(dst1, src1, 10), strlcpy(dst2, src2,
          10));
    printf("50\t%zu\t%zu\n", ft_strlcpy(NULL, "", 0), strlcpy(NULL, "", 0));
    }
