#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}

	return (len);
}
