#include "main.h"
/**
 * create_array - main function
 * @size: vari 1
 * @c: vari 2
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	y = malloc(sizeof(char) * size);

	if (y == NULL || size == 0)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
