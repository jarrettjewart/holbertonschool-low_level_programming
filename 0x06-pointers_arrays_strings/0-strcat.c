#include "holberton.h"

/**
 * _strcat - main function
 * @dest: vari
 * @src: vari
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
