#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char str1[10] = "slkdjfsd";
	char str2[10] = "sada#$kj";

	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}
