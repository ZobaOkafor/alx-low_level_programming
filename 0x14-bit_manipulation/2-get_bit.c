#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit to get
 *
 * Return: the value of the bit at index
 * or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int flag;

	if (index >= sizeof(n) * 8)
		return (-1);

	flag = 1UL << index;

	if ((n & flag) != 0)
		return (1);

	else
		return (0);
}
