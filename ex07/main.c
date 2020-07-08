#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str1[10] = "SDFfsdf";
	char str2[10] = "SFSDFSD";
	char str3[10] = "3423sdf";

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
	return (0);
}
