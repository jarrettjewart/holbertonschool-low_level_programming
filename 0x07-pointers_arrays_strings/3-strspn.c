#include "main.h"

/**
 * _strspn - main function
 * @s: 1 vari
 * @accept: 2 vari
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != 10; x++)
	{
		for (y = 0; accept[x] != '\n'; y++)
		{
			if (accept[y] == s[x])
			{
				break;
			}
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (0);
}
