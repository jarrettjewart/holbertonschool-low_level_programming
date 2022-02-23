#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Return: Null if fails, new_dog is works
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
