#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char str1[10] = "000";
	char str2[10] = "213";
	char str3[10] = "";

	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	return (0);
}
