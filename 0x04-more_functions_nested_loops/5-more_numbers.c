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
	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
	_putchar('\n');
	j++;
	}
}
