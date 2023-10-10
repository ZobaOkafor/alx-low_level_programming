#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defining a new struct type
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;


/**
 * function prototypes
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
