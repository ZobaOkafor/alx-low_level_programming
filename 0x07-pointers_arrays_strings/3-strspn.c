#include "main.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int_strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *a = accept;

	while (*s != '\0')
	{
		while (*a != '\0')
			if (*s == *a)
			{
				len++;
				break;
			}
			a++;

		if (*a == '\0')
			break;
		s++;

		return (len);
	}
}
