#include "main.h"

/**
 * print_chessboard - This function prints the chessboard
 * @a: array to print
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
	_putchar('\n');
	}
}
