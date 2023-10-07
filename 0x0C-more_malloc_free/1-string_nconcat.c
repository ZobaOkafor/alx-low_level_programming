#include "main.h"

/**
 * string_nconcat - This function concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 *
 * Return: a pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;
	unsigned int strl1 = 0, strl2 = 0;

	while (s1 && s1[strl1] != '\0')
		strl1++;

	while (s2 &&  s2[strl2] != '\0')
		strl2++;

	if (n < strl2)
		s = (char *)malloc((strl1 + n + 1) * sizeof(char));

	else
		s = (char *)malloc((strl1 + strl2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (; i < strl1; i++)
		s[i] = s1[i];

	for (; n < strl2 && i < (strl1 + n); i++, j++)
		s[i] = s2[j];

	for (; n >= strl2 && i < (strl1 + strl2); i++, j++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
