#include "main.h"
#include <stdarg.h>

/**
 * error_exit - This function exits the program with an error message
 * and an exit code
 * @file_from: source file
 * @file_to: destination file
 * @argv: array pointer
 *
 */

void error_exit(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - This program copies the contents of one file to another file
 * @argc: argument count
 * @argv: array of pointers to the argument strings
 *
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	int eclose, file_from, file_to;
	ssize_t rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(file_from, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(file_to, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	eclose = close(file_from);
	if (eclose == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	eclose = close(file_to);
	if (eclose == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
