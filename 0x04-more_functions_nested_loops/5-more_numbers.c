#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers
 * from 0 - 14, followed by a new line
 *
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;

	j = 0;
	while (j <= 10)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}
	_putchar(j);
	j++;
	}
	_putchar('\n');
}
