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
	int i, bits;
	int num_bits = 0;
	int print_bits = 0;
	unsigned long int flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	num_bits = sizeof(n) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		flag = 1UL << i;
		bits = (n & flag) ? 1 : 0;

		if (bits || print_bits)
		{
			_putchar(bits + '0');
			print_bits = 1;
		}
	}
}
