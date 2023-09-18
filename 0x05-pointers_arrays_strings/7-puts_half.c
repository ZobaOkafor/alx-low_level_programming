#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	int j = i / 2;

	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
