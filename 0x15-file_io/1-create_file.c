#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: the name of file to create
 * @text_content: the name of null terminating string to write in the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr;

	if (filename == NULL)
		return (-1);

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(op, text_content, strlen(text_content));
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}

	close(op);
	return (1);
}
