#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This variadic function print numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;

	va_list integers;

	va_start(integers, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(integers, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(integers);

	printf("\n");
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
