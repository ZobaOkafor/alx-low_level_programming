#include "main.h"


/**
 * print_binary - This function prints the binary representation of a number
 * @n: number to print
 *
 * Return: converted number
 * or 0 if there are chars not 0 or 1 in the string or if 'b' is NULL
 */

void print_binary(unsigned long int n)
{
	int bits;
	int i = 1, j = 0;
	int num_bits = 0;
	int tmp;

	tmp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (tmp > 0)
	{
		num_bits++;
		tmp = tmp >> 1;
	}

	i = 1 << (num_bits - 1);

	while (i > 0)
	{
		bits = (n & i) != 0;

		if (bits == 1 || j == 1)
			_putchar(bits + '0');

		if (bits == 1)
			j = 1;

		i = i >> 1;
	}
}
