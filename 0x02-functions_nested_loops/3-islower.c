#include "main.h"

/**
 * _islower - This function checks for lowercase character.
 *
 * @c: The character to check, in ASCII code.
 *
 * Return: 1 if character is loercase, else return 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
