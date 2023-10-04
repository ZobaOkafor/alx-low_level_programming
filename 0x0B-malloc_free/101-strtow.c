#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function to help count the number of words in a string
 * @s: string to count
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int c, w, flag;

	flag = 0;
	c = 0;
	w = 0;

	while (s[c] != '\0')
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	c++;

	return (w);
}


/**
 * strtow - This function splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings if successful, else NULL
 */

char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k, w, c, strl, start, end;

	k = 0;
	c = 0;
	strl = 0;

	while (*(str + strl))
		strl++;
	w = count_word(str);
	if (w == 0)
		return (NULL);

	mat = (char **)malloc((w + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	while (i <= strl)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc((c + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
		i++;
	}
	mat[k] = NULL;
	return (mat);
}
