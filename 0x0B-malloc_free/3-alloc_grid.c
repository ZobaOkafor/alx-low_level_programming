#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - This function returns a pointer
 * to a 2 dimensional array of integers
 * @width: matrix width
 * @height: matrix height
 *
 * Return: pointer to the matrix if successful, else NULL
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	ar = (int **)malloc(height * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	while (i < height)
	{
		ar[i] = (int *)malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			while (j < i)
				free(ar[j++]);
			free(ar);
			return (NULL);
		}


	j = 0;
	while (j < width)
		ar[i][j++] = 0;
	i++;
	}
	return (ar);
}
