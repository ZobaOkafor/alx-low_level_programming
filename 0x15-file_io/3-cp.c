#include "main.h"
#include <stdarg.h>

/**
 * error_exit - This function exits the program with an error message
 * and an exit code
 * @file_from: the exit code to return when program exits
 * @file_to: string for the error message
 * @argv: pointer
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
	int file_from, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
