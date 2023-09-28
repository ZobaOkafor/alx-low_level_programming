#include "main.h"

/**
 * _puts_recursion - This function prints a string
 * followed by a new line
 * @s: string to print
 *
 * Return: 0 Always
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	
	else
	{
		_putchar(*s);
		++s;
		_puts_recursion(s);
	}
}
