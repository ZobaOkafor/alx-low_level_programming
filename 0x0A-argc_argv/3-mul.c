#include "main'h"
#include <stdio.h>

/**
 * main - This program multiplies two numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		puts("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}	
