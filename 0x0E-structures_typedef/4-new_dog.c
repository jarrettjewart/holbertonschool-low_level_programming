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
	char *cpyname, *cpyowner;
	int namelen, ownerlen, i, x;

	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;
	namelen++;
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		;
	ownerlen++;
	cpyname = malloc(sizeof(char) * namelen);
	if (cpyname == NULL)
		return (NULL);
	cpyowner = malloc(sizeof(char) * ownerlen);
	if (cpyowner == NULL)
	{
		free(cpyname);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(cpyname);
		free(cpyowner);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
	{
		cpyname[i] = name[i];
	}
	for (x = 0; x < ownerlen; x++)
	{
		cpyowner[x] = owner[x];
	}
	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
