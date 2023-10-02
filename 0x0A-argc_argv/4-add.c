#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int j, k;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[j]);
	}

	printf("%d\n", sum);
	return (0);
}
