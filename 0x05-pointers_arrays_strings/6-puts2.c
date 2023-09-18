#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

void puts2(char *str);
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
