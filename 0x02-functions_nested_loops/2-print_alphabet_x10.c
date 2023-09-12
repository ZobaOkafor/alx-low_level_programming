#include "main.h"

/**
 * print_alphabet_x10 - A function taht prints alphabet 10 times,
 * in lower case, followed by a new line.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i,j;

	j = 0;
	for (j = 0; j <= 10; j++)
	{
		i = 'a';
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
