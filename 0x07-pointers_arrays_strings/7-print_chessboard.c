#include "main.h"

/**
 * print_chessboard - This function prints the chessboard
 * @a: array to print
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			if ((i + j) % 2 == 0)
				_putchar('#');
			else
				_putchar(' ');
	_putchar('\n');
}
