#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, int n);

int main(void)
{
	char src[] = "testingbbbb";
	char dest[] = "sdfsd";
	int n;

	n = 5;
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}
