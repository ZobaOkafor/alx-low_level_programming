#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 is equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == s2[i])
		return (s1[i] + 1, s2[i] +1);
	else
		return (s1[i] - s2[i]);
}	
