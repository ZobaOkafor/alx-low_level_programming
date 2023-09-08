#include <stdio.h>

/**
 * main - This program prints all single digit numbers of
 * base 10 starting from 0, followed by a new line
 * using the 'putchar' function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
