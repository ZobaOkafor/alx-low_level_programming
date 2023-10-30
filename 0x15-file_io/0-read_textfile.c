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

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r")
	if (fp == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	r = fread(buffer, 1, letters, fp);
	if (r == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	w = fwrite(buffer, 1, r, stdout);
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
