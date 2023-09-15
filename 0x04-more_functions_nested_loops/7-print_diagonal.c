#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			n++;
		}
		_putchar('\n');
	}
}
