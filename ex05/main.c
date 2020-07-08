#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char str1[10] = "SDFfsdf";
	char str2[10] = "SFSDFSD";
	char str3[10] = "";

	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	return (0);
}
