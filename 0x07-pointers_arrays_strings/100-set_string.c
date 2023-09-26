#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char
 * @s: pointer to pointer to set
 * @to: string to set
 *
 * Return: no return
 */

void set_string(char **s, char *to)
{
	*s = to;
}
