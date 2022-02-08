#include "holberton.h"
/**
 * _strncpy - main function
 * @dest: 1 var
 * @src: 2 var
 * @n: 3 var
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	retur (dest);
}
