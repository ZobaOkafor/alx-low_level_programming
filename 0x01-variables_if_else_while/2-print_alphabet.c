#include <stdio.h>

/**
 *  * main: This program prints alphabet in lowercase 
 *   * followed by a new line
 *    *
 *     * Return: Always 0 (Success)
 *      */

int main(void)
{
	char c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
	       	putchar(c);
       	}
		putchar('\n');
	return (0);

