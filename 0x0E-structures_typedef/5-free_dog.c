#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *free_dog - a function that frees dogs
 *@d:a pointer to a dog_t struct
 *
 */


void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
}
