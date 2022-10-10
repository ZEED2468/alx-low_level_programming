#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize the value of the dog file
 * @d: the dog to be initialized
 * @name: Name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
