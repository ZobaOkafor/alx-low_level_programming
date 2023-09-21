#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: a pointer to the string
 */

char *cap_string(char *s)
{
	int i;
	int j;

	char word_sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
			if (s[i] == word_sep[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
	}
}
