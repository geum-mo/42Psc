#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str1[10] = "SDFfsdf";
	char str2[10] = "sfsds";
	char str3[10] = "";

	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	return (0);
}
