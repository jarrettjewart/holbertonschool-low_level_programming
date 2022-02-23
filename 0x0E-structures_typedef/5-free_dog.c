#include "dog.h"
/**
 * free_dog - frees the dogs
 * @d: char 1
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
