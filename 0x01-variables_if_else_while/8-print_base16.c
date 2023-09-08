#include <stdio.h>

/**
 * main - This program prints all numbers of base 16 in lower case,
 * followed by a new line
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
	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
