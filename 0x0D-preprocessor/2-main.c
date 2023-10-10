#include <stdio.h>
#include <stdlib.h>


/**
 * main - This program prints the name of the file it was compiled from
 *
 * Return: 0 Always
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
