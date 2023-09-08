#include <stdio.h>

/**
 * main - This program prints all possible different combinations
 * of two two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int j;

	for (x = 0; y < 100; y++)
	{
		for (y = 0; y < 100; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
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
