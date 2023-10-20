#include <stdio.h>

/**
 * print_prestr - A function that prints a string
 * before the main function is executed
 *
 * Return: nothing
 */

void __attribute__((constructor))print_prestr()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
