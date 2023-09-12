#include "main.h"

/**
 * main - A function that prints alphabet in lowercase
 * on a single line, followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
