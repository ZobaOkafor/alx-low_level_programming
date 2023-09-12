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
	for (j = a; j<=10; j++)
	{
		for (i = a; i <= z; 1++)
		{
			_putchar(i);
		}
		_putchar("\n");
	}
}
