#include "main.h"

/**
 * alloc_grid - main function
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **z;
	int x;
	int y;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	z = malloc(sizeof(int *) * height);
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		z[x] = malloc(sizeof(int) * width);
		if (z[x] == NULL)
		{
			free(z);
			for (y = 0; y <= x; y++)
			{
				free(z[y]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			z[x][y] = 0;
		}
	}
	return (z);
}

