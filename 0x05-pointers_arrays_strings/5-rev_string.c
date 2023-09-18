#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: string
 *
 * Return: no return
 */

void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		char rev = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = rev;
	}
}
