#include "holberton.h"
/**
 * _strcmp - main function
 * @s1: 1 var
 * @s2: 2 var
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '0'; i++)
	{
		if (*s1 - *s2 == 0)
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}
