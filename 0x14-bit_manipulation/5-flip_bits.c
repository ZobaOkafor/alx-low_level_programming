#include "main.h"

/**
 * flip_bits - This function returns the number of bits you would need
 * to flip to get from one number to another
 * @n: 1st number to convert
 * @m: 2nd number to convert
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned long int count = 0;

	result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
