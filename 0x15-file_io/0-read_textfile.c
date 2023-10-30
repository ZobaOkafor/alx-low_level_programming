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
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	if (o == -1)
	{
		free(buffer);
		return (0);
	}

	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

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
