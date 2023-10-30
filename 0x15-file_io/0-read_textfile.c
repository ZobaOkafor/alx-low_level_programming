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
	ssize_t r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	fp = fopen(filename, "r");
	r = fread(buffer, 1, letters, fp);
	w = fwrite(buffer, 1, r, stdout);

	if (fp == NULL)
		return (0);

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	if (r == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	if (w == -1 || w != r)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (w);
}
