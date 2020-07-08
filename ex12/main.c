#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_hexa(char c)
{
	int negative_char;
	char hex_n1;
	char hex_n2;

	if (c < 0)
	{
		negative_char = (-128 - (c)) * -1 + 128;
		hex_n1 = negative_char / 16;
		hex_n2 = negative_char % 16;
	}
	else
	{
		hex_n1 = c / 16;
		hex_n2 = c % 16;
	}
	if (hex_n1 < 10)
		ft_putchar(hex_n1 + '0');
	else
		ft_putchar(hex_n1 + 87);
	if (hex_n2 < 10)
		ft_putchar(hex_n2 + '0');
	else
		ft_putchar(hex_n2 + 87);
}

void ft_putaddr(void *addr)
{
	char addr_c[15]; // why 15 not 16? (Seems possible to append int element into string (char array))
	long addr_l;	 // why long not int?
	int i;

	addr_l = (long)addr; //Typecasts a void pointer
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16; // Appends single digit int to array
		if (addr_c[i] < 10)
			addr_c[i] += '0'; // Converts int element to char if int < 10
		else
			addr_c[i] += 87;  // Converts int element to lowercase alphabet if 10 =< int =< 16
		addr_l = addr_l / 16; // Iteration not recursion
		i++;
	}
	while (i < 15) // why 15?
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0) // Decreases i until hitting 0
		ft_putchar(addr_c[i]);
}

void ft_print_line(void *addr, int size)
{
	int i;
	int sp_to_print;
	char *addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hexa(addr_c[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	sp_to_print = ((16 - size) * 2) + (19 - size) / 2;
	while (--sp_to_print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int char_to_print;
	unsigned int offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			char_to_print = 16;
			size -= 16; // why?
		}
		else
		{
			char_to_print = size;
			size = 0; // to end the while loop
		}
		ft_putaddr(addr + offset); // Prints the first column of the output
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(addr + offset, char_to_print); // Print  the second & third column
		ft_putchar('\n');
		offset += 16; // Moves on to next line(?)
	}
	return (addr);
}
int main(void)
{
	int size;
	void *addr;
	char str1[16] = "Bonjour les amin";
	char str2[16] = "ches...c est fo";
	char str3[16] = "u.tout.ce qu on ";
	char str4[16] = "peut faire avec.";
	char str5[16] = "..print_memory..";
	char str6[16] = "..lol.lol. .";

	size = 16;
	addr = str1;
	ft_print_memory(addr, size);
}
