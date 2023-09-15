#include "main.h"

/**
 * print_numbers - This function print numbers from 0 - 9
 *
 * Return: no return
 */

void print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
