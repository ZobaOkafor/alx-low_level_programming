#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: first parameter
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int total = 0;
	va_list parasum;

	va_start(parasum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		total += va_arg(parasum, const unsigned int);

	va_end(parasum);
	return (total);
}
