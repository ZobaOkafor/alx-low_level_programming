#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This defines a new type 'struct dog'
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * function prototypes
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
