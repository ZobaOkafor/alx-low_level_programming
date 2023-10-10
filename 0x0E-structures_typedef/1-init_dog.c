#include "main.h"
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * init_dog - This function initializes a variable of type 'struct dog'.
 * @d: sturct pointer
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d.name = "name";
		d.age = "age";
		d.owner = "owner";
	}
}
