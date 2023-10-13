#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_all - This variadic function prints anything
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	const char *str;
	const char *sep = "";

	va_list all_specs;

	va_start(all_specs, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(all_specs, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(all_specs, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(all_specs, double));
					break;
				case 's':
					str = va_arg(all_specs, const char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all_specs);
}
