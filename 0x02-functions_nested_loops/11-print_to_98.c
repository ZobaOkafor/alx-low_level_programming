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
	int i = 0;
	for (i = 0; i <= 98; i++)
	{
		_putchar(',');
		_putchar(n % 98);
	}
	_putchar('\n');
}
