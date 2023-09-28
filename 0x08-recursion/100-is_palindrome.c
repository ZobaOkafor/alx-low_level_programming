#include "main.h"

	int check_palindrome(char *s, int i, int len)
	int _strlen_recursion(char *s)
int is_palindrome(char *s)

	/**
	 * check_palindrome - This function recursively checks
	 * the characters for palindrome
	 * @s: string to check
	 * @i: iterator
	 * @len: length of string
	 *
	 * Return: 1 if it is palindrome &  0 if it's not
	 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	else if (i >= len)
		return (1);

	return (check_palindrome(s, i + 1, len - 1));
}


/**
 * _strlen_recursion - This function returns the length of a string
 * @s: string to calculate
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - This function checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is palindrome & 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
