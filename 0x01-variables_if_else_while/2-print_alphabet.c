#include <stdio.h>

/**
 * main: This program prints alphabet in lowercase 
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c++;
	}
	return (0);
}
