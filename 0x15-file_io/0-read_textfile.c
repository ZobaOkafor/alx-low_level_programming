#include "main.h"

/**
 * read_textfile - This function reads a text file,
 * and prints it to POSIX standard output
 * @filename: pointer to the file
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char ch;
	size_t i = 0;
	int count = 0;
	char *buffer;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	while ((ch = fgetc(fp)) != EOF)
	{
		i++;
		if (i <= letters)
		{
			_putchar(ch);
			count++;
		}
	}

	fclose(fp);

	return (count);
}
