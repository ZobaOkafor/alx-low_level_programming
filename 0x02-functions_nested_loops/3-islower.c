#include "main.h"

/**
 * _islower - This function checks for lowercase character.
 *
 * Return: 1 if character is loercase, else return 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
