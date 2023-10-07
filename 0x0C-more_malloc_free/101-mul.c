#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - This function checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}


/**
 * _strlen - This function returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * errors - This function handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - This function multiplies two positive numbers
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *s1, *s2;
	int strl1, strl2, str, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	strl1 = _strlen(s1);
	strl2 = _strlen(s2);
	str = strl1 + strl2 + 1;
	result = malloc(str * sizeof(int));
	if (result == NULL)
		return (1);
	for (i = 0; i <= strl1 + strl2; i++)
		result[i] = 0;
	for (strl1 = strl1 - 1; strl1 >= 0; strl1--)
	{
		digit1 = s1[strl1] - '0';
		carry = 0;
		for (strl2 = _strlen(s2) - 1; strl2 >= 0; strl2--)
		{
			digit2 = s2[strl2] - '0';
			carry += result[strl1 + strl2 + 1] + (digit1 * digit2);
			result[strl1 + strl2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[strl1 + strl2 + 1] += carry;
	}
	for (i = 0; i < str - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
