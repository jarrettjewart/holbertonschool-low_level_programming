#include "main.h"

/**
 * *_memcpy - comoys memory
 * @dest: 1 vari
 * @src: 2 vari
 * @n: 3 vari
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
