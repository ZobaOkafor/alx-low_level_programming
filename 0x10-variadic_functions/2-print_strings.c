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
	char *str;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("nil");

		if (separator != NULL)
			printf("%s", str);

		else if (i && separator == NULL)
			printf("%s", str);

		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(strings);
}
