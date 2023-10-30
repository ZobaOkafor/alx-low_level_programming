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
	char *buffer;
	size_t o, r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		close(o);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
