#include "main.h"
#include <stdio.h>

/**
 * main - This program prints its name
 * @argc: arguements count
 * @argv: pointer to array of pointers
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
