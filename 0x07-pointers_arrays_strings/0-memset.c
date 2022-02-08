#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: 1 vari
 * @n: 2 vari
 * @b: 3 vari
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}

