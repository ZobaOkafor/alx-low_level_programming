#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: string
 *
 * Return: no return
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	int j;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
