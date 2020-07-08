#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *dest;
	char *src;

	src = "test";
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
