#include "main.h"

/**
 *print_to_98 - This function checks for lowercase character.
 *
 * @n: The character to check.
 *
 * Return: no return.
 */

void print_to_98(int n)
{
	if (n < 98) 
	{
		for (n = n; n < 98; n++)
		{
			_putchar('n');
			_putchar(',');
			_putchar( 98);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar('n');
			_putchar(',');
			_putchar(98);
		}
	}
	_putchar('\n');
}
