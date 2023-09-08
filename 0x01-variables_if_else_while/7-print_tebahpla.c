#include <stdio.h>

/**
 * main -  This program prints lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	for (c = 'z'; c <= 'a'; c++)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
