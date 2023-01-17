#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: function that frees dog
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
