#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function frees memory allocated to struct dog
 * @d: struct pointer
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
