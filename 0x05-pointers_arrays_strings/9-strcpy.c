#include "main.h"
/**
 * *_strcpy - copys string
 * @dest: Destination
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
		size_t i;

		for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
		return (dest);	
}
