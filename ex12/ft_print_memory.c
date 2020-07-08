/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gekang <gekang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:07:59 by gekang            #+#    #+#             */
/*   Updated: 2020/07/08 11:38:06 by gekang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
	write(1, &c, 1); // what does & mean?
}

void *ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int hex;
	char str[]

		hex = (int)addr;
	i = 0;
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

	size = 16; // is the size of string?
	addr = str1;
	ft_print_memory(addr, size);
}
