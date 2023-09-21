#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements in the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
