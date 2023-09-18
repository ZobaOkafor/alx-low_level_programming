#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = 0; i < i / 2; i++)
	{
		char rev = s[i];

		s[i] = s[i - i - 1];
		s[i - i - 1] = rev;
	}
}
