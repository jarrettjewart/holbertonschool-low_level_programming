#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: 1
 * @src: 2
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int src_len;
	int dest_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{}
	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
		dest[dest_len + src_len] = '\0';
		return (dest);
	}
}
