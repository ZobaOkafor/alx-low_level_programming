#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * starting with the first character
 * @str: string
 *
 * Return: no return
 */

void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
