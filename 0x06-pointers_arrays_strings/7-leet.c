#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @s: string
 *
 * Return: string encoded
 */

char *leet(char *s)
{
	int i;
	int j;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0', i++)
	{
		for (j = 0; j < 10; j++)
			if (s[i] == a[j])
				s[i] = b[j];
	}
	return (s);
}
