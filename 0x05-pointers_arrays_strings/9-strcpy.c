#include "main.h"

/**
 * _strcpy - Function that copies the string pointed to by 'src',
 * including the terminating null byte (\0),
 * to the buffer pointed to by 'dest'.
 *
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: the pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
