#include "main.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: string to print
 *
 * Return: 0 Always
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
		_putchar('\n');
	}
}
