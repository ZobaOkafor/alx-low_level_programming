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
	n = 0;
	for (n = 0; n < 98; n++)
	{
		_putchar(',');
		_putchar(n % 98);
		_putchar('\n');
	}
