#include "main.h"

/**
 * print_most_numbers -  This function prints numbers from 0 - 9
 * except for numbers '2' and '4', followed by a new line
 *
 * Return: no return
 */

void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
