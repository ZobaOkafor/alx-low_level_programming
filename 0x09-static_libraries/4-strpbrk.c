#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - This function searches a string for any set of bytes
 * @s: string
 * @accept: input
 *
 * Return: s if matched and NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
			if (*s == accept[b])
				return (s);
		s++;
	}

	return (NULL);
}
