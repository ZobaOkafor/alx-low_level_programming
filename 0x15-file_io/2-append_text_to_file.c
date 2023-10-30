#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: name of file to create
 * @text_content: null terminating string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
        int op, wr;

        if (filename == NULL)
                return (-1);

        op = open(filename, O_WRONLY | O_APPEND);
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

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
