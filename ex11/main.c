#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_convert_dec_to_hex(char c)
{
	int result;
	int remainder;

	result = c / 16;
	remainder = c % 16;

	write(1, "\\", 1);
	ft_putchar(result);
	if (remainder > 9)
		ft_putchar(remainder + 87);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (31 < str[i] && str[i] != 127)
			ft_putchar(str[i]);
		else
			ft_convert_dec_to_hex(str[i]);
		i++;
	}
}

int main(void)
{
	char str[30] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
