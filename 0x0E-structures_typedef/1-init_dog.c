#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog structure initializer
 * @age: dog age
 * @d: dog structure
 * @name: dog name
 * @owner: dog owner
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
