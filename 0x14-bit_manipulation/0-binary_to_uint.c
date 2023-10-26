#include "main.h"

/**
 * binary_to_uint - This function converts a binary number
 * to an unsigned int
 * @b: pointer to string to convert
 *
 * Return: converted number
 * or 0 if there are chars not 0 or 1 in the string or if 'b' is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1;
		result = result + (b[i] - '0');
	}

	return (result);
}
