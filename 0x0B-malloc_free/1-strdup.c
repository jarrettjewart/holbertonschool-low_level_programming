#include "main.h"
/**
 * _strdup - main function
 * @str: string
 * Return: Null
 */

char *strdup(char *str)
{
	char *y;
	unsigned int x, strlen = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[strlen])
	{
		strlen++;
	}
	strlen++;

	y = malloc(sizeof(char) * strlen);

	if (y == 0)
	{
		return (NULL);
	}
	for (x = 0; x < strlen; x++)
	{
		y[x] = str[x];
	}
	return (y);
}
