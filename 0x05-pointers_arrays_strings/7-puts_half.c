#include "main.h"

/**
 * puts_half - Function that prints half of a string
 * followed by a new line
 * @str: a pointer to the int
 *
 * Return: no return
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	j = (i + 1) / 2;

	for (i = j; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
