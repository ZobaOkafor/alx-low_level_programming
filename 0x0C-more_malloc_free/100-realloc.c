#include "main.h"

/**
 * _realloc - This function reallocates memory block using malloc and free
 * @ptr: pointer to the previoulsy allocated memory
 * @old_size: size of allocated memory for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *old_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	ptr_1 = realloc(ptr_1, new_size);
	if (ptr_1 == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			ptr_1[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			ptr_1[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (ptr_1);
}
