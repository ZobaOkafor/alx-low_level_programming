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
	char *c = accept;

	while (*s != '\0')
	{
		while (*c != '\0')
			if (*s == *c)
				return (s);
			c++;
		s++;
	}

	return (NULL);
}
