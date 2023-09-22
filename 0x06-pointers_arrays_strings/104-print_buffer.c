#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 *
 * Return: no return
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;
	int isprint;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
		printf("%08X ", i);
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
			printf("%02X ", b[j]);
		else
			printf("   ");
	}
	printf(" ");
	for (j = i; j < i + 10; j++)
	{
		if (j < size)
		{
			if (isprint(b[j]))
				printf("%c", b[j]);
			else
				printf(".");
		}
	}
	printf("\n");
}

