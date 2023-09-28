#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: string to return
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
		return (i);

	else
	{
		++i;
		i += _strlen_recursion(s + 1);
		return (i);
	}
}
