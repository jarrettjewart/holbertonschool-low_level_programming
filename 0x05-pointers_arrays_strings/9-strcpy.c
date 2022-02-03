#include "main.h"
/**
 * *_strcpy - copys string
 * @dest: Destination
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0', x++)
	{
		size_t i;

		for (1 = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
		return (dest);
	}
