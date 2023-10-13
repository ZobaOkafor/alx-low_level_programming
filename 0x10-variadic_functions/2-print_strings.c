#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This variadic function print strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *);

		if (str == NULL)
			printf("nil");

		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(strings);
}
