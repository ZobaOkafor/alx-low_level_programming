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
	ssize_t op, rd, wr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(op, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(op);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		close(op);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
