#include <stdio.h>

/**
 * main - This program prints all possible combination
 * of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 59; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 58 || y != 59)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
