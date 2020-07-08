#include <stdio.h>
#include <string.h>

int ft_is_lowercase(char *str, int i)
{
	int is_lowercase;

	is_lowercase = 0;
	if (96 < str[i] && str[i] < 123)
	{
		is_lowercase = 1;
	}
	return (is_lowercase);
}

int ft_is_uppercase(char *str, int i)
{
	int is_uppercase;

	is_uppercase = 0;
	if (64 < str[i] && str[i] < 91)
	{
		is_uppercase = 1;
	}
	return (is_uppercase);
}

int ft_is_numeric(char *str, int i)
{
	int is_numeric;

	is_numeric = 0;
	if (47 < str[i] && str[i] < 58)
	{
		is_numeric = 1;
	}
	return (is_numeric);
}

int ft_is_alphanumeric(char *str, int i)
{
	int is_alphanumeric;

	is_alphanumeric = 0;
	if (ft_is_numeric(str, i) || ft_is_lowercase(str, i) || ft_is_uppercase(str, i))
	{
		is_alphanumeric = 1;
	}
	//printf("%d\n", is_alphanumeric);
	return (is_alphanumeric);
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_is_lowercase(str, i))
				str[i] = str[i] - 32;
			i++;
		}
		else
		{
			if (ft_is_alphanumeric(str, i - 1))
			{
				if (ft_is_uppercase(str, i))
				{
					str[i] = str[i] + 32;
					printf("%c\n", str[i]);
				}
				i++;
			}
			else
			{
				if (ft_is_lowercase(str, i))
				{
					str[i] = str[i] - 32;
					//printf("%c\n", str[i]);
				}
				i++;
			}
		}
	}
	return str;
}

int main(void)
{
	char str1[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
