#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char src[20] = "abcde";
	char dest[20] = "xyzab";
	int size;

	size = 5;
	printf("%d\n", ft_strlcpy(dest, src, size));
	return (0);
}
