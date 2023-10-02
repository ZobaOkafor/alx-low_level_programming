#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - This program adds positive numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char **agrv)
{
	int i, j, k;
	int num;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
		{
			add += num;
		}
	}

	printf("%d\n", add);
	return (0);
}
