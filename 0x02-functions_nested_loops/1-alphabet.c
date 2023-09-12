#include "main.h"

/**
 * main - A function that prints alphabet in lower case
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
	return (0);
}
