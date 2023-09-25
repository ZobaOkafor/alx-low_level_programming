#include "main.h"
#include <stddef.h>

/**
 * _strstr - This function locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; *haystack != '\0'; a++)
	{
		for (b = 0; *needle != '\0'; b++)
			if (*haystack  == *needle)
				break;
		if (!*needle)
			return (haystack);
	}

	return (NULL);
}
