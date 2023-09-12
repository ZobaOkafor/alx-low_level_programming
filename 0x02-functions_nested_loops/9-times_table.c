#include "main.h"
/**
 * times_table - This function prints the 9 times table,
 *  starting with 0.
 *
 *  Return: no return.
 */

void times_table(void)
{
	int i;

	for (int i = 0; i <= 9; i++)
	{
		int j = 9 * i;

		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(j + '0');
		_putchar('\n');
	}
}
