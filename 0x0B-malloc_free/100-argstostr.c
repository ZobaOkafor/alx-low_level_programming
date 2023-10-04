#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - This function concatenates all arguments of a program
 * @ac: argument count
 * @av: array of pointers
 *
 * Return: NULL if ac == 0 or av == NULL or
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	for (; i < ac; size++, i++)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
	}

	arg = (char *)malloc(1 + (size * sizeof(char)));

	if (arg == NULL)
		return (NULL);

	i = 0;
	for (; i < ac; k++, i++)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
	}

	arg[k] = '\0';
	return (arg);
}
