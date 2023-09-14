#include "main.h"

/**
 * print_numbers - This function print numbers from 0 - 9
 *
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
