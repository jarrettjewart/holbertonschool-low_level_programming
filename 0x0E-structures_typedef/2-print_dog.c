#include "dog.h"
/**
 * print_dog - function that prints struct dog
 * @d: Struct Dog
 * Return: D if NULL
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\m", (d->owner == NULL ? "(nul)" : d->owner));
	}
}
