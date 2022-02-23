#include "dog.h"
/**
 * init_dog - initializes the variable struct dog
 * @d: strutct of dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name =name;
		d->age = age;
		d->owner = owner;
	}
}
