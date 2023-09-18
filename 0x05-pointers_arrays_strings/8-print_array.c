#include "main.h"

/**
 * print_array - Function that prints 'n' elements of an array of integers
 * followed by a new line
 * @a: pointer
 * @n: input 'n' elements
 *
 * Return: no return
 */

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
