#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers
 * @*a: array to be reversed
 * @n: the number of elements in the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1
	
	while (i < j)
	{
	 	temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
