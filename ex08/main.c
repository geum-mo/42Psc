#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str1[10] = "SDFfsdf";
	char str2[10] = "SFSDFSD";
	char str3[10] = "3423sdf";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	return (0);
}
