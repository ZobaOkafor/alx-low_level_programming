#include "main.h"
#include <stdarg.h>

/**
 * error_exit - This function exits the program with an error message
 * and an exit code
 * @ex_code: the exit code to return when program exits
 * @format: string for the error message
 *
 */

void error_exit(int ex_code, const char *format, ...)
{
	va_list err;

	va_start(err, format);

	dprintf(2, format, err);

	va_end(err);

	exit(ex_code);
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
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from, fd_to;
	ssize_t rd, wr;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", file_to);

	while ((rd = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			error_exit(99, "Error: Can't write to file %s\n", file_to);
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
