#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - This function concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to allocated memory if successful, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s
	unsigned int i = 0, j = 0, strl1 = 0, strl2 = 0;

	for (strl1 = 0; s1 && s2[strl1]; strl1++)

	for (srtl2 = 0; s2 && s2[strl2]; strl2++)

	s = (char *)malloc((strl1 + strl2 + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		for (; i < strl1; i++)
			s[i] = s1[i];
	}

	if (s2)
	{
		for (; i < (strl1 + strl2); i++; j++)
			s[i] = s2[j];
	}
	s[i] = '\0';

	return (s);
}
