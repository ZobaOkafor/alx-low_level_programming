#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1 at a given index
 * @n: number passed to the pointer
 * @index: position to change
 *
 * Return: 1 if successful and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag;

	if (index >= sizeof(*n) * 8)
		return (-1);

	flag = 1UL << index;
	*n |= flag;

	return (1);
}
