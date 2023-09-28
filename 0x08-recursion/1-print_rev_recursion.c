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
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
