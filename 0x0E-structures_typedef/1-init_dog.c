#include "dog.h"

/**
 * init_dog - This function initializes a variable type 'struct dog'
 * @d: struct pointer
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
