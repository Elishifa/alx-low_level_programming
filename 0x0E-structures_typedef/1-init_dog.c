#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: structure dog
 * @name: dogs name pointer
 * @age: age of dog pointer
 * @owner: who owns dog pointer
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
